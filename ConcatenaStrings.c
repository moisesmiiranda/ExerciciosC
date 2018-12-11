#include <stdio.h>
#include <string.h>//biblioteca para obter a funcao de contar os caracteres da string

int main(){

char str1[22];//variavel para ler uma string
char str2[22];//variavel para ler outra string

scanf("%s%s",str1,str2);//leitura das strings

if(strlen(str1) > strlen(str2))//se a string 1 for maior que a 2
	printf("%s%s\n",str2,str1);//mostre a 2 depois a 1
else//se nao...
	printf("%s%s\n",str1,str2);//mostre a 1 depois a 2

return 0;
}
