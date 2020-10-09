//Гродзицкий Богдан В7 
//	A>>=b++% --c	unsigned Int, int, short int 
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
int main(int argc, char *argv[])
{
   int b,b1,d1,e1;
   short int c, c1;
   unsigned int A,A1;
   window (1,1,80,25);
   textcolor(14);
   clrscr();
   //enter initial data
   printf ("Enter A-->");
   scanf ("%d",&A);
   printf ("Enter b-->");
   scanf ("%d",&b);
   printf ("Enter c-->");
   scanf ("%d",&c);
   // copy initial data
   A1=A;
   b1=b;
   c1=c;
   // initial data
    printf ("A=%d, b=%d, c=%d",A,b,c);
    // calculate
   A>>=b++% --c;
   // print rezult
   printf ("\nA=%d, b=%d, c=%d",A,b,c);
	//	A>>=b++% --c
	c1=c1-1;
	d1=b1%c1;
	b1=b1+1;
	A1>>=d1;
	
	printf ("\nA1=%d, b1=%d, c1=%d",A1,b1,c1);

   getchar();
   getch();
   return 0;
}

