#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double);

int main ()
{
	int imax, iter; 
	double xi,xd,ea,em,test,xa,xaold;
	
	printf("\n METODO DE BISIECCION\n");
	printf("\n Realizado por Alexis Lema\n");
	printf("\n -------------------------\n");
	printf("Ingrese el extremo izquierdo del intervalo: ");
	scanf("%lf", &xi);
	printf("Ingrese el extremo derecho del intervalo: ");
	scanf("%lf", &xd);
	printf("Ingrese el numero de iteraciones maximas: ");
	scanf("%d", &imax);
	printf("Ingrese el erro minimo de calculo: ");
	scanf("%lf", &em);
	
	iter=0;
	xa=0;
	
	if(f(xi)*f(xd)>0)
		printf("No hay raiz n ese intervalo\n");
		
	else
	{
		system("cls");
		printf("\n|Iter\t|Raiz     \t|Error_Aprox\n");
		printf("|-------|---------------|-----------");
		do
		{
			iter++;
			xaold=xa;
			xa=(xi+xd)/2;
			ea=fabs((xa-xaold)/xa)*100;
			test= f(xi)*f(xa);
			
			if(test<0)
				xd=xa;
				
			else if(test>0)
				xi=xa;
			else
				ea=0;
			
			printf("\n|%d \t|%lf   \t|%lf",iter,xa,ea );	
				
		}while(ea>em && iter<imax);
	}
return 0;
}

double f(double x)
{
	return pow (x,3)-25;
}

