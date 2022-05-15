#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    int x, y;
    x = 0;
    y = 25;
    while(y >= -25)
    {
        x = -25;
        while (x <= 25)
        {
            if (x*x + y*y == 25)   //draws circle, would recommend for you to comment out the other graphs so as to not mess this up.
            {
                printf("*");
            } 
            
            if (y == x)  // y=x, comment out the circle graph first before viewing the rest.
            {
                printf("/");
            }
            else if (y == x*x) // y=x^2
            {
                printf("*");
            } 
            else if (y == 0) //x axis
            {
                printf("-");
            }
            else if (x == 0) // y axis
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
            x = x + 1; 
            //printf("\nx = %d, y = %d", x, y);     //shows the plotted points and unplotted points
        } 
    printf("\n");
    y = y - 1;  
    //printf("x = %d, y = %d", x, y);
    }
}  
    

