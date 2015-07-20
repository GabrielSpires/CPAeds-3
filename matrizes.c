#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){

	int **v1, **v2, **prod;
	int n, i, j, k;
	srand(time(NULL));
	
	n = atoi(argv[1]);
	
	v1 = (int**)malloc(sizeof(int*)*n);
	for(i=0; i<n; i++)
		v1[i] = (int*)malloc(sizeof(int)*n);
		
	v2 = (int**)malloc(sizeof(int*)*n);
	for(i=0; i<n; i++)
		v2[i] = (int*)malloc(sizeof(int)*n);
	
	prod = (int**)calloc(n, sizeof(int*));
	for(i=0; i<n; i++)
		prod[i] = (int*)calloc(n, sizeof(int));
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			v1[i][j] = 1+rand()%5;
			v2[i][j] = 1+rand()%5;
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			for(k=0; k<n; k++){
				prod[i][j] += v1[i][k]*v2[k][j];
			}
		}
	}
	/*
	printf("Matriz 1: \n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d", v1[i][j]);
			if(j+1 < n) printf(", ");
		}printf("\n");
	}printf("\n");
	
	printf("Matriz 2: \n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d", v2[i][j]);
			if(j+1 < n) printf(", ");
		}printf("\n");
	}printf("\n");
	
	printf("Matriz produto: \n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d", prod[i][j]);
			if(j+1 < n) printf(", ");
		}printf("\n");
	}printf("\n");
	*/
	
	return 0;
}
