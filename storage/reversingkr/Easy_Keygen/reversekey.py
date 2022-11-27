serial = "5B134977135E7D13"
key = [0x10, 0x20, 0x30]

real_serial = []
i = 0
while i < len(serial) - 1:
    real_serial.append(int('0x' + serial[i:i + 2], 16))
    i += 2


name = ''
i = 0
for each in real_serial:
    name += chr(each ^ key[i])
    i = (i + 1) % 3
print(name)