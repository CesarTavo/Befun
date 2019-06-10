'''
If the numbers 1 to 5 are written out in words: 
one, two, three, four, five, then 
there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) 
inclusive were written out in words, 
how many letters would be used?


NOTE: Do not count spaces or hyphens. 
For example, 342 (three hundred and forty-two) contains 23 letters 
and 115 (one hundred and fifteen) contains 20 letters. 
The use of "and" when writing out numbers is in compliance with British usage.
'''

num_word = {1:len("one"),2:len("two"),3:len("three"),
        4:len("four"),5:len("five"), 6:len("six"),7:len("seven"),
        8:len("eight"),9:len("nine"),10:len("ten"),11:len("eleven"),
        12:len("twelve"),13:len("thirteen"),14:len("fourteen"),
        15:len("fifteen"),16:len("sixteen"),17:len("seventeen"),
        18:len("eighteen"),19:len("nineteen"),20:len("twenty"),
        30:len("thirty"),40:len("fourty"),50:len("fifty"),
        60:len("sixty"),70:len("seventy"),80:len("eighty"),
        90:len("ninety"),100:len("onehundred"),200:len("twohundred"),
        300:len("threehundred"),400:len("fourhundred"),
        500:len("fivehundred"),600:len("sixhundred"),700:len("sevenhundred"),
        800:len("eighthundred"),900:len("ninehundred"),1000:len("onethousand")}

suma = 0

for x in range (1,1001):

	acarreo = suma

	if len(str(x)) == 4: suma += num_word[1000]
	elif len(str(x)) == 3:
		hundreds = int(str(x)[0]+"00")
                print hundreds
		if x%100 != 0: suma += num_word[hundreds]+3
		else: suma += num_word[hundreds]
		tens = int(str(x)[1]+"0")
                print(tens)
		if tens != 00: suma += num_word[tens]
		ones = int(str(x)[2])
                print ones
		if ones != 0: suma += num_word[ones]
	elif len(str(x)) == 2 and str(x)[0] != "1":
		tens = int(str(x)[0]+"0")
		if tens != 00: suma += num_word[tens]
		ones = int(str(x)[1])
		if ones != 0: suma += num_word[ones]
	elif len(str(x)) == 2 and str(x)[0] == "1":
		suma += num_word[x]
	else:
		suma += num_word[x] 
	print x,suma,suma-acarreo

print suma
