'''
https://cryptopals.com/sets/1/challenges/2

Fixed XOR
Write a function that takes two equal-length buffers and produces their XOR combination.

If your function works properly, then when you feed it the string:

    1c0111001f010100061a024b53535009181c

... after hex decoding, and when XOR'd against:
        686974207468652062756c6c277320657965
... should produce:
            746865206b696420646f6e277420706c6179
'''

def XOR(s1,s2):
    return bytes([a ^ b for a, b in zip(s1, s2)])

string=input("Ingrese el primer valor hexadecimal: ")
value_input_1 = bytes.fromhex(string)
string=input("Ingrese el segundo valor hexadecimal: ")
value_input_2 = bytes.fromhex(string)
print(XOR(value_input_1,value_input_2).hex())
