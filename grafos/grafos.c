#include <stdio.h>
#include "stack.h"

int main(){
	int tam =10;
	int i, j, k, ori, des, peso;
	int matriz[tam][tam];
	for(i=0; i<tam; i++)
		for(j=0; j<tam; j++)
			matriz[i][j] = -1;
	
	printf("Quantas arestas inserir: ");
	scanf("%d", &i);
	for(; i>0; i--){
		scanf("%d %d %d", &ori, &des, &peso);
		matriz[ori][des] = peso;
	}
	
	printf("  ");
	for(i=0; i<tam; i++) printf(" %2d ", i);
	printf("\n  +");
	
	for(k=0; k<tam; k++) printf("---+");
		printf("\n");
	
	for(i=0; i<tam; i++){ 
		printf("%d |", i);
		for(j=0; j<tam; j++){
			if(matriz[i][j] != -1) printf(" %2d |", matriz[i][j]);
			else printf("%2d |", matriz[i][j]);
		}printf("\n  +");
		for(k=0; k<tam; k++) printf("---+");
		printf("\n");
	}
	
	//DFS
	
	int atual;
	int inicial;
	int visitados[10];
	printf("Vertice inicial: ");
	scanf("%d", &inicial);
	stack minhaPilha; //Inicia vazia
	make_stack(&minhaPilha);
	push(inicial, &minhaPilha);
	/*
	while(!empty(&minhaPilha)){
		atual = minhaPilha.size-1;
		pop(&minhaPilha);
		for(i=0; i<10; i++){
			if(matriz[atual][i] != 0 && visitados[i] == 0){
				push(i, &minhaPilha);
			}
		}
	}*/
	
	return 0;
}
