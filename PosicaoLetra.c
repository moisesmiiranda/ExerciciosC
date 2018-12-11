#include <stdio.h>
int main(){

	char letra; // Variável que vai guardar uma letra
	char palavra[22];//Variável que vai guardar uma palavra
	int vetor[20];//Vetor auxiliar para armazenar as posições em que a letra vai aparecer na palavra
	scanf("%c",&letra);//leitura da letra
	scanf("%s",palavra);//leitura da palavra
	int i;//contador para o laço de repetição
	int cont = 0; //contador de vezes em que a letra se repete na palavra
	for(i=0;i<22;i++){//laço que percorre cada letra da palavra
		if(palavra[i]==letra){//a cada letra da palavra que for igual a variável letra...
			vetor[cont] = i;//quarda-se a posição no vetor auxiliar e
			cont++;//incrementa o contador de letras repetidas
		}
	}
	if(cont>0){//Se o cont foi incrementado é pq existe pelo menos 1 repetição da letra na palavra
			// Saída informando a letra e palavra lidas.
		printf("A letra %c se repete na palavra %s nas posicoes:\n",letra,palavra);
		for(i=0;i<cont;i++){//laço que percorre o vetor auxiliar
			printf("%d ",vetor[i]+1);//exibe as posições onde a letra se repetiu na palavra
		}
	}else{//Se não foi incrementado é pq a letra não existe na palavra
		printf("Letra nao encontrada.");
	}
	
return 0;
}
