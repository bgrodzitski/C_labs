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
    scanf ("%lo",&a);
    copyA = a;
    int chetni = -100, nechetni = -100;

    while(copyA)
    {
        copyA=copyA>>3;
        aLength++;
    }
if (aLength % 2 == 0)
        {
            while (a>0)
            {
                digit = a & 0x7;
                if (counter % 2 == 0)
                {
                    chetni = digit;
                }
                else
                {
                    nechetni = digit;
                }
                if (nechetni !=-100 && chetni !=-100)
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
                        razrad=razrad<<3;
                        res += chetni * razrad;
                    }
                    nechetni = -100;
                    chetni = -100;
                    razrad=razrad<<3;
                }
                a=a>>3;
                counter++;
            }
         
            printf("%lo",res);
        }
       
        else
        {
        	
            printf("Odd amount of numbers");
        }



 
     getch ();
     return 0;
}
