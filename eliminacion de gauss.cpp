#include <stdio.h>

main()
{
	int i,j,k,n;
	float A[i][j], B[i], X[n];
	printf("\nIngrese el tama%co de la matriz\n", 164);
	printf("\nIngrese el Nro de filas: ");
	scanf("%d",&n);
	printf("\nIngrese el tama%co de las columnas: ", 164);
	scanf("%d",&n);
	for(i=1; i<=n;i++)
	{
		for(j=1; i<=n; j++)
		{
			printf("\nIngrese el valor de la matriz de la Posicion [%d,%d]",i,j);
			scanf("%c", &[i][j]);
		}
	}
	
	for(i=1; i<=n; i++)
	{
		printf("\nIngrese el valor del vector de la posicion [%d]", i);
		scanf("%d", &B[i]);
	}
	
	for(k=1; k<=n-1; k++)
	{
		for(j=k; j<=n)
		{
			A[i][j]=A[i][j]-A[k][j](A[i][k]/A[k][k]);
		}
		B[i]= B[i]-B[k](A[i][k]/A[k][k]);
		printf("")
	}
}
