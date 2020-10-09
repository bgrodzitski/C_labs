// 1)-|x|+x+(x-1)^3 при x<-2; 2)sin(x)+sqrt(5-x)при -2<=x<10; 3)((x^2+4-sin(x^2))/x) при x>=10  В7
// Гродзицкий Богдан 

#include <stdio.h>           
#include <math.h>
#include <conio.h>           

int main(int argc, char *argv[]){
	float x,f;
	int t;
	t=0;
printf("\nEnter x=");
scanf("%f", &x);
if(x>=5 && x<10)
		t=1;
f= x<-2 ? -abs(x)+x+pow((x-1),3) : x<10 ? sin(x)+sqrt(5-x) : (x*x+4-sin(x*x))/x;
if (t==0){
printf("\n if x=%-6.2f then  y=%-10.3f t=%-6.2f", x,f,t);}
else{
printf("function isn't defined");	
}
getch();
return 0;
}



