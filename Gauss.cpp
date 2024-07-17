#include"stdio.h"
 main(void)
{
    int i,j,k,n;
    float A[20][20],c,x[10];
    printf("\n|------------------------------------------------------------------------------|");
    printf("\n|                        TEMA: METODO DE GAUSS                                 |");
    printf("\n|                        NOMBRE: ALEXIS LEMA                                   |");
    printf("\n|______________________________________________________________________________|\n");
    printf("\nIngrese el tama%co de la matriz: ", 164);
    scanf("%d",&n);
    printf("\nIngrese los elementos de la matriz:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf(" A[%d][%d]:", i,j);
            scanf("%f",&A[i][j]);
        }
       printf("\n");
    }

//impresion de los elementos ingresados
printf("\n\nEl sistema ingresado es: \n\n");
 for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("%f:\t",A[i][j]);
            if(j==n)
                printf("   |");
        }
      printf("\n");
    }

//Encontramos los elementos de la diagonal de la matriz
    for(j=1; j<n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=A[i][j]/A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                    
                }
            }
        }
    }


//impresion del sistema resultante
printf("\nEl sistema resultante es: \n\n");
 for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("%f:\t",A[i][j]);
            if(j==n)
              printf("   |");
        }
      printf("\n");
    }


//impresion de los resultados
    printf("\nLa respuesta es:\n\n");
    for(i=1; i<=n; i ++)
    {
        x[i]=A[i][n+1]/A[i][i];
    }
     printf("x%d=%7.6f\n",n,x[n]);	

}

