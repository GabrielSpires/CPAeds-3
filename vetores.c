#include <stdio.h>
#include <stdlib.h>

int main(){
	int *v1, *v2;	
	int n, prod=0;
	
	scanf("%d", &n);
	
	v1 = (int*)malloc(sizeof(int)*n);
	v2 = (int*)malloc(sizeof(int)*n);
	
	int i;
	srand(time(NULL));
	for(i=0; i<n; i++){
		v1[i] = rand()%5;
		v2[i] = rand()%5;
		prod += v1[i]*v2[i];
	}
		
	printf("Vetor 1: (");
	for(i=0; i<n; i++){
		printf("%d", v1[i]);
		if(i+1 < n) printf(", ");
		else printf(")");
	}printf("\n");
	
	printf("Vetor 2: (");
	for(i=0; i<n; i++){
		printf("%d", v2[i]);
		if(i+1 < n) printf(", ");
		else printf(")");
	}printf("\n");
	
	for(i=0; i<n; i++){
		printf("%d*%d ", v1[i], v2[i]);
		if(i+1 < n) printf("+ ");
		else printf("= ");
	}
	printf("%d\n", prod);
	
	return 0;
}
