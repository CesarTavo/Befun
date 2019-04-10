barr = b''
with open('keystream','rb') as f:
    data = f.read()
    i = 0
    while i < len(data):
        if data[i] == 194 or data[i] == 195:
            barr += bytes([ord(bytes([data[i], data[i+1]]).decode())])
            i += 1
        else:
            barr += bytes([ord(bytes([data[i]]).decode())])
        i += 1
with open('decoded-keystream', 'wb') as f:
    f.write(barr)
