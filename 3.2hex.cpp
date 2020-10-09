//для чёт числа из пары удалить большую цифру
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
     int a = 0;
     int copyA = 0;

    int counter = 1;
    int digit = 0;
    int razrad = 1;

    int aLength = 0;
    int res = 0;

    printf ("Enter your number ->\n");
    scanf ("%lx",&a);
    copyA = a;
    int chetni = -100, nechetni = -100;

    while(copyA)
    {
        copyA=copyA>>4;
        aLength++;
    }
if (aLength % 2 == 0)
        {
            while (a>0)
            {
                digit = a & 0xf;
                if (counter % 2 == 0)
                {
                    chetni = digit;
                }
                else
                {
                    nechetni = digit;
                }
                if (nechetni != -100 && chetni != -100)
                {
                    if (chetni > nechetni)
                    {
                        res += nechetni * razrad;
                    }
                    else if(chetni<nechetni)
                    {
                        res += chetni * razrad;
                    }
                    else
                    {
                        res += nechetni * razrad;
                        razrad=razrad<<4;
                        res += chetni * razrad;
                    }
                    nechetni = -100;
                    chetni = -100;
                    razrad=razrad<<4;
                }
                a=a>>4;
                counter++;
            }
         
            printf("%lx",res);
        }
       
        else
        {
        	
            printf("Odd amount of numbers");
        }



  	
     getch ();
     return 0;
}
