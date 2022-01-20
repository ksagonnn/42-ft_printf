conversion entre base hexadécimale et décimale
 
hexa = base 16 (0 à 15) 0 1 2 3 4 5 6 7 8 9  A  B  C  D  E  F
					    10 11 12 13 14 15
deci = base 10 (0 à 9)

45  = 2D 

45 : 16 (base 16) 
dans 45 combien de fois va rentrer 16 ? 2
2 * 16 = 32 
reste 13
2 : 16 = 0
reste 2
(on s'arrête quand on touve un 0)
entoure les restes (13 et 2), commence par le dernier donc 2 ET 13
2 = 2 / 13 = D
45 (base 10) = 2D (base 16)
 
{
long decimalnum, quotient, remainder;
int i, j = 0;
char hexadecimalnum[100];

quotient = decimalnum;

while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		quotient = quotient / 16;
	}
for (i = j; i >= 0; i--)
return (0);
}
