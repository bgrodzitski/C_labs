// 1)-|x|+x+(x-1)^3 при x<-2; 2)sin(x)+sqrt(5-x)при -2<=x<10; 3)((x^2+4-sin(x^2))/x) при x>=10  В7
// Гродзицкий Богдан
#include <stdlib.h>           
#include <math.h>
#include <stdio.h> 
int main(int argc, char *argv[]){
	float x,f;
	int t;
	t=0;
     // задание фона экрана
 window(1,1,50,25);
textbackground(1);
clrscr();
   // задание  цвета символов
textcolor(4);
 // создание второго окна для ввода исходных данных
window(20,2,60,5);  
textbackground(2);
clrscr();
  // ввод и вычислния
cprintf("\nEnter x=");
cscanf("%f", &x);
if(x>=5 && x<10)
		t=1;
f= x<-2 ? -abs(x)+x+pow((x-1),3) : (x<10 ? sin(x)+sqrt(5-x) : (x*x+4-sin(x*x))/x);

  // сознание третьего окна для вывода результатов
window(20,10,60,15);                        
textbackground(2);
clrscr();
  //вывод результатов
  if (t==0){
cprintf("\n if x=%-6.2f then  y=%-10.3f t=%-6.2f", x,f,t);}
else{
cprintf("function isn't defined");	
}
getch();
getch();
  // восстановление цвета фона экрана и цвета символов
window(1,1,80,25);
textbackground(0);
clrscr();
textcolor(15);



return 0;
}

