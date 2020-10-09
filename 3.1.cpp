//кол-во пар отличающихся на 2
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
    int a, s = 0;
    int counter = 1 ;
    int t;
    int odd;
    int even = -2147483647;
    int amount = 0;
    printf ("\n Vvedite chisla (konez vvoda '*') \n");
    while (scanf("%d", &a)){
        if(counter%2!=0)
        {
        odd = a;
        }
        else
        {
         even = a;
        }

        if(odd == even+2)
        {
            amount++;
        }
        if(even == odd+2)
        {
            amount++;
        }

      counter++;
    }
 

     printf ("Amount  = %d",amount);
     getch ();
     return 0;
 }
