import crypt

d = dict()

def testPass(cryptPass):
    _,ID,salt,passwd = cryptPass.split('$')
    salt = '$'+ID+'$'+salt
    with open('dictionary.txt', 'r') as dictFile:
        for word in dictFile.readlines():
            word = word.strip('\n')
            cryptWord = crypt.crypt(word, salt)
            if cryptWord == cryptPass:
                #print("[+] Contraseña encontrada: {} \n".format(word))
                return(word)
        return


def main():
    d = dict()
    print("El diccionario que se esta usando es: ")
    with open('shadow.txt') as passFile: 
        for line in passFile.readlines():
            if ':' in line:
                user = line.split(':')[0]
                cryptPass = line.split(':')[1].strip(' ')
                w = testPass(cryptPass)
                d[user] = w
                print(user,"->",w)

    with open('encrypted', 'r') as f:
        s = f.readline().strip()
        print('\n')
        print(s)

    flag = []
    for c in s:
        flag.append(d[c])

    print(''.join(flag))


if __name__ == '__main__':
    main()
