#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.000001
#define   f(x)   x*x*x + x*x -1
#define   g(x)   1/sqrt(x+1)

int main()
{
	 int i=1;
	 float x0, x1,f1;
	 printf("Enter x0 ");
	 scanf("%f", &x0);
	//  printf("Enter maximum iteration: ");
	//  scanf("%d", &N);
	//  printf("\ni\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 printf("i\t\tx1\t\tf1\n");
	 do
	 {
		  x1 = g(x0);
          f1=f(x1);
		  printf("%d\t\t%f\t%f\n",i, x1, f1);
		
		  i++;
		  
		  x0 = x1;
		  
	 }while( fabs(f(x1)) > e);
	 
	 printf("\nRoot is %f", x1);
	
	 getch();
	 return(0);
}
