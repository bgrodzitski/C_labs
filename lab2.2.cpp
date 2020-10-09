//Гродзицкий Богдан В7
// 1) xy<2 	z = x*x+25/(x*x+y*y+1);2)x*y > 2 z = 1/(x*x-y*y+1); 3)  z = sin(abs(x+y*y));  
#include <stdio.h>
#include <math.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, m, t ;
	float a, b, c, d, hx, hy, x, y, z;
	printf ("\n Enter [a,b] i n\n");
	scanf ("%f%f%d",&a,&b,&n);
	printf ("\n Enter [c,d] i m\n");
	scanf ("%f%f%d",&c,&d,&m);
	printf("--------------------------------\n");
	printf("|   X   |    Y   |      Z      |\n");
	printf("--------------------------------");
	if (a < b && c < d && n > 0 && m > 0)
	{
		hx = (b - a) / n;
		hy = (d - c) / m;
		
		
		for (x = a; x <= b ; x += hx)
			for (y = c; y <= d ; y += hy)
			{
				t = 1;//zero div flag 
				if (x * y < 2)
						z = x*x+25/(x*x+y*y+1);
				
				else if (x*y > 2)
						if(x*x-y*y==-1)
							t=0;
						else z = 1/(x*x-y*y+1);
				else 
				   z = sin(abs(x+y*y));
				   
				if (t == 0)
					printf ("\n%6.2f%c %6.2f%c Del. na 0 %c",185,x,186,y,186,186);
					else{
						printf("\n%c%6.2f%c  %6.2f%c  %12.5f%c ",186,x,186,y,186,z,186);
							}
			}

	}
	else printf("\n wrong data");
	fflush;
	return 0;
}
