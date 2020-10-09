//Гродзицкий Богдан В7
// 1) xy<2 	z = (x*x+25)/(x*x+y*y+1);2)x*y > 2 z = 1/(x*x-y*y+1); 3)  z = sin(abs(x+y*y));  
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, m, t ;
	float  x, y, z;
	printf ("\n Enter [x,y] \n");
	scanf ("%f%f",&x,&y);
	
			
				t = 1;//flag zero division 
				if (x * y < 2)
						z = x*x+25/(x*x+y*y+1);
				
				else if (x*y > 2)
						if(x*x-y*y==-1)
							t=0;
						else z = 1/(x*x-y*y+1);
				else 
				   z = sin(abs(x+y*y));
				   
				if (t == 0)
					printf ("\n%c%6.2f%c %6.2f%c Del. na 0 %c",186,88,186,y,186,186);
					else
						printf("\n%c%6.2f%c %6.2f%c %12.5f%c",186,x,186,y,186,z,186);
					
		

	
	
	getch();
	return 0;
}
