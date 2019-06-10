def xor(data, key): 
        return bytearray(a^b for a, b in zip(*map(bytearray, [data, key]))) 

def main():
    one_time_pad = 'ICE' 
    plaintext = "Burning 'em, if you ain't quick and nimble"
    #"I go crazy when I hear a cymbal"

    ciphertext = xor(plaintext, one_time_pad) 
    print ciphertext 

if __name__ == '__main__':
    main()


