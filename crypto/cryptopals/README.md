# One day you woke up and lost everything

## The Cryptopals crypto challenges

[cryptopals](https://cryptopals.com/)
[Wargame-Krypton](http://overthewire.org/wargames/krypton/krypton0.html)

### Solutions for Wargame-Krypton

`ssh kryptonr1@krypton.labs.overthewire.org -p 2222`
password: `KRYPTONISGREAT`
echo S1JZUFRPTklTR1JFQVQ= | base64 -d


`ssh kryptonr2@krypton.labs.overthewire.org -p 2222`
password: `ROTTEN`
	cipher text: YRIRY GJB CNFFJBEQ EBGGRA
	SOLVE: Using my caesar_crack.py note that LEVELMTWOMPASSWORDMROTTEN
	is very useful to know ROT13

`ssh kryptonr3@krypton.labs.overthewire.org -p 2222`
password: `CAESARISEASY`
	cipher text: OMQEMDUEQMEK
	SOLVE: Using my caesar_crack.py note that CAESARISEASY
	is very useful to know Caesar Cipher
