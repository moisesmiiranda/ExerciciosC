#include <stdio.h>
#include <string.h>//bilbioteca necessaria para usar a strlen para obter a quantidade de caracteres da palavra
int main(){

	char letra; // Variável que vai guardar uma letra
	char palavra[22];//Variável que vai guardar uma palavra

	scanf("%c",&letra);//leitura da letra
	/*A palavra pode ter até 20 caracteres. */
	scanf("%s",palavra);//leitura da palavra
	if(strlen(palavra)<=20){//se a quantidade de caracteres for até 20...
		int i;//incrementador para laço de repetição
		int cont = 0;//contador de vezes que a letra se repete na palavra
		
		for(i = 0; i<20;i++){//inicio da repetição
			if(letra == palavra[i])//se a letra for igual a alguma letra da palavra
				cont++;//contador aumenta em 1
		}
		//Saída mostrando qual a letra escolhida, quantas vezes se repete na palavra, e qual a palavra
		printf("A letra %c se repete %d vezes na palavra  %s  \n",letra,cont,palavra);
	}else{//se ultrapassar o tamanho de 20 caracteres esse não é feito nada e exibe a seguinte saída...
		printf("O tamanho da palavra ultrapassou 20 caracteres.\n");
	}
	
	return 0;
}
