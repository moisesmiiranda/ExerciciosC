#include <stdio.h>
#include <string.h>//biblioteca para uso da strlen para obter a quantidade de caracteres da palavra
int main(){

	char palavraCB[22];//Variável que vai guardar uma palavra em caixa baixa (minusculas)

	scanf("%s",palavraCB);//leitura da palavra

	if(strlen(palavraCB) <= 20 ){//so aceita palavras de ate 20 caracteres

		int i;//contador da repeticao

		for (i = 0; i <strlen(palavraCB); i++){//Repeticao para percorrer os vetores de char

			printf("%c",palavraCB[i]-32);//exibindo a nova palavra em caixa alta.

		}//fim do laco	

	}//fim da condicao

return 0;

}//fim do programa
