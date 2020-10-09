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
    scanf ("%d",&a);
    copyA = a;
    int chetni = -1, nechetni = -1;

    while(copyA)
    {
        copyA/=10;
        aLength++;
    }
if (aLength % 2 == 0)
        {
            while (a>0)
            {
                digit = a % 10;
                if (counter % 2 == 0)
                {
                    chetni = digit;
                }
                else
                {
                    nechetni = digit;
                }
                if (nechetni != -1 && chetni != -1)
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
                        razrad *= 10;
                        res += chetni * razrad;
                    }
                    nechetni = -1;
                    chetni = -1;
                    razrad *= 10;
                }
              
                
                a /= 10;
                counter++;
            }
            printf("%d",res);
        }
        else
        {
            printf("Odd amount of numbers");
        }



 
     getch ();
     return 0;
}
