from Crypto.Util.number import long_to_bytes
from hashlib import sha256

flag = 'flag{' + sha256(long_to_bytes(70989122156399) + long_to_bytes(181037482648735) + long_to_bytes(191532558614761)).hexdigest() + '}'

print(flag)
