#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int i;
    do
    {
        i = get_int("Height: ");
    }
    while (i<1||i>8);
    for (int n = 0; n < i; n++)
    {
        for (int k=0;k<7-n;k++)
        {
            printf(" ");
        }
        for (int j=0;j<n+1;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
    

