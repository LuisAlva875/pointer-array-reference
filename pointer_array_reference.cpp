#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	
	int n;
	
	printf("De cuanto el arreglo joven ?");
	scanf ("%d",&n);
		
	int **B, A[n];
	
	B=(int**)malloc(n*sizeof(int*));
		
	srand(time(NULL));
	
	for(int i=0; i<n;i++)
	A[i]=rand()%10;

	for(int i=0; i<n;i++)
	printf ("%d, ", A[i]);
	
	for(int i=0; i<n;i++)
	B[i]=&A[i];
	
	printf ("\n");
	for(int i=0; i<n;i++)
	printf ("%d, ", *B[i]);
	
}
