# VOLGACTF

## Shadow

Este reto trataba sobre descifrar acdenas en SHA512, basicamente teníamos una lista con los respectivos password's 'hasheados' con SHA512.


```bash
z:$6$AEqLtEqq$1ojEoCgug5dzqeNfjGNE9p5SZFwIul8uOFp9vMZEz50oiUXOVFW3lw1S0fuvFY5ggi5CfbfoWaMDr2bvtSNRC/:17930:0:99999:7:::
a:$6$9Eg69bYI$q75YWUVWb4MYzkcExXukpt.VJ3fX458iZJm1ygpTLwX.CgroHpmeSG88By.zQmKyOHCvBHoA0Q001aBqbkVpg/:17930:0:99999:7:::
x:$6$5TF0Txe3$APSNzUSjFmMbsmrkCS9qE84qfu4AI2dNEjqm2PRKgSjncBTI4lECXofQ8abdAtYX6tST6FGCgOdvLlDYQTCJx0:17930:0:99999:7:::
q:$6$I3iqZL0m$nxHWvcLz7lg/ZKoKfX9dq5k0uqkOtKgLdyREAQxQkfPkVvbNHPfQaoCFfnXl1BoX1vgOcEDghVPvfRUrs6dGp1:17930:0:99999:7:::
l:$6$n8iJWaW/$M1Od8seiEL6h3L.egHubBYAk.cd8/LUctESIm69/r.gvP0eqabusN5/D1rNu1qDHOkgRpHf8PWGSb8zoxrgrp1:17930:0:99999:7:::
v:$6$GatagTHS$I1UfNfn3NGP5Vre0z7s3DGqFpjN5Pw2XhAHSw6ZSMwaMAsf8IteFedXovNlHLuIXvR9ezeya89XEOq2We7CcW1:17930:0:99999:7:::
e:$6$ZO6YiExi$7DBV0zMIqf8iy.zVTL7gbHetCmJ3LL4ROEYG/UME4Tmym82vZYkFWjiNpCGapvF83QNJKFJOjkhXMgFLfkhza.:17930:0:99999:7:::
f:$6$HXoF2OZ1$onkVfp52IRdd2OipQv3rPPsGr7QradAFTFnmXv5c9xkGy4xcgJFkoaSJzMQCtfWuU2FQ3BN3lyL47SyoIoPmy0:17930:0:99999:7:::
b:$6$I9Uq9PRG$euVEYx5TR2lUFe/k7s0e8us8xgl7j/cbiYRnvba.eFfMSSPsm5I.gcShqOLqAa58m5VISomkPpHlJ1xLgCRxw/:17930:0:99999:7:::
r:$6$J.qms5y0$YOMnlR0V.WQjqAyik3nU7TDdy8hZQZWfhF8CTJHJtd/0mrANrxBvULoXNiJnvX.yn5T3QBFu4wk3xrFye.uus1:17930:0:99999:7:::
g:$6$b4GkIuzQ$j/prK.Jy304eu6W/NG0Yz4mHDOc3BavkYRBomdjVG.fAksRM/xIDRoWcKcJw66YZmVGcV51YkIwVZHVfA//KU.:17930:0:99999:7:::
n:$6$f2QD.cIu$n70jbCSe0QVz7M48SVE2Z..IPDV0QjIfZ8D40oQOO9smt0ZeA2I0sSO927VIr1SJwupjZairVR0T/pKQ0QG3N1:17930:0:99999:7:::
o:$6$qyBGOX79$OAvGVjmH69C.0ZfObcJ0DcKzoSWHhBBt9sPVjbIJtYmT4nV/TU/zCiKgCkSQaQJ.n.vTjAScdh9htzjBzTwOT/:17930:0:99999:7:::
p:$6$EW1gOlyH$omuxKElrI3DeVoxrLet3OW3MfuFPwLwefVxOr62E.wo7szQ6.swTec1edCFiKnPc42XxMRGsrNJn36mkc2dgH/:17930:0:99999:7:::
s:$6$TXxh4vV5$v1vF49YZQnonSZrKwBWNp7rpxIRoQY/ooEODqjsdwwdoY8sso.y/EOsoC3GFlpCLYnEY./n/1BuNID5njg0CV.:17930:0:99999:7:::
c:$6$IYxRoIyR$eEmGTNPNd6HPQibc/UBdQ5zgR/dGQ1dtCuSl0lUmvmbrSKbYEf/SEDlX4fgP.JQXlyFqEgu4NOBiu2eozpAM.0:17930:0:99999:7:::
w:$6$RmCyBroe$EovezmWQJVvQFGd6.ei2.SfzGJG22CsV47tTnyfKx30TbuG1VMgsk0de6NOQ04bKNML9fbuMu0Pw3TMf82zye1:17930:0:99999:7:::
d:$6$..CK41Sn$36X19X0jrviLxVVk.KtR9zbHMML0mg1XzMNQgP7eOpGMF1JYSbZHAyReDhNVkm1WaNn3lfO2CsAww14fZZads1:17930:0:99999:7:::
t:$6$zVFV5HoW$q9WyP6/D0kPL.n7s.FvPcOSRfvcUFQu5QMPps6VbQUD5RMozQsP14GtUiOa/H2V2pU6c6OxcgRqruaLejPaES1:17930:0:99999:7:::
h:$6$S1RnJ8DK$F/FWFf9En/mn6YqZ67/gOnMT0WdSuaEyn2OArTJbG1IGHd0pUs9TiGDE9P.PhRB6XyHUgA5l/LBmBW8PpJg9M.:17930:0:99999:7:::
m:$6$SqkKQRak$nZHDrq3vdnajdLzotrW3J9kYzUvzPaUrs6NZaKkkcVN0KiCfUhJfgM6WJvZjZR7hBGWkfIwhZymko7wtsq49s1:17930:0:99999:7:::
k:$6$ZLCr2itT$tZ0.u7TsXPc3nAntIOepETGkhqfVG1IKaiuW0mAH5QROVuc7fonE43qEhUFT2LHMftYDdTQRAMHpRNMM8Yn1c1:17930:0:99999:7:::
i:$6$ZlWmheB2$DBLJQPLVhhEdA/iATrOYiqFv4i5TcmBUSX6.tZDo63YP4dcdlAuBnFU65xXIRP1tpNsCS7kc6Fu6jPMS2F7aP1:17930:0:99999:7:::
y:$6$rIoO6U2u$c5usMXbFP9S75qmDyBBWz1QZuyGH0MGq3mXN32kYipoL5XCFEHjmTRVcuZkmed5OzAopV0CgyA49QzILz5Rmq/:17930:0:99999:7:::
j:$6$Gpavrajq$me1yxZQ0OiJFedrTmxFsyP5zwOePuFJmgujUWun0h5bCOIVeuJuaIUTDHGCYxkT6mw41BTjlx9c3QvdsG8o0o.:17930:0:99999:7:::
u:$6$0w3EeszD$bUDQorjCKku1sjtCWMQfJ3ZRmsC5N.LN7CQnjvyCbcq5wSD33x2t/TVXA6jnjtajv8nIZc.Aj.oY80lm44Dhy0:17930:0:99999:7:::
underscore:$6$RVUCQJFr$fsKkPUT9Pp5QlsZblSLJ4yKkfBxNMWN0TS.q7ticuEr/HQFdEbyiwK5JmaKKS9UDFzUsY6mhe1knnRbwy7K0s/:17930:0:99999:7:::
```

Hay que notar que los hashes empiezan con `$6` el cual es la función usada para SHA512. Por lo que para solucionarlo se tuvo que hacer un diccionario ya que el método realizado es el de sustitución y para cada usuario recurrir al diccionario.

Por otro lado teníamos esta cadena

```bash
hajjzvajvzqyaqbendzvajvqauzarlapjzrkybjzenzuvczjvastlj
```

```python

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
```

Y así podemos ver el diccionario que se uso y aplicando la sustitución obtenemos la bandera:
`pass_hash_cracking_hashcat_always_lurks_in_the_shadows`
