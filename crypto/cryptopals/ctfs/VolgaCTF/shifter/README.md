Nice crypto challenge, with for once a stream cipher using an LFSR.

Es un reto que usa el LFSR
para más información ver el reto de
TCTF: [LSFR](https://github.com/CesarTavo/befun/crypto/cryptopals/ctfs/TCTF/zer0lfsr)

La idea principal de este reto es usar el algoritmo Berkelamp-Massey para forzar bit a bit 
donde la bandera pueda estar en `encrypted.txt`, ya que el algoritmo de Berlekamp-Massey 
es un algoritmo que encontrará el registro de desplazamiento de retroalimentación lineal más corto (LFSR) 
para una secuencia de salida binaria dada. 
El algoritmo también encontrará el polinomio mínimo de una secuencia linealmente recurrente en un campo arbitrario.

Sabemos que la bandera al menos contiene `VolgaCTF{` y lo que se hace es que por medio de una 
cadena de bits encuentre la bandera.

`VolgaCTF{It_h45_alr3ady_b3c0m3_a_cl4ssic}`
