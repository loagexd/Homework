#include <stdio.h>

int main (void)
{
    int h, w, f = 0, count = 0, hh;
    char a = 'A', b = a;
    printf("Введите высоту и ширину: ");
    scanf("%d %d",&h, &w);
    printf("\n");
    int wm = w, g = ((h+1)/2);
        for (hh = 0; hh < (h+1)/2; hh++)
            {
                f = hh;
                for (f ; f > 0; f -= 1 )
                {
                    printf (" ");
                    count ++;
                }
                    b = a + count;
                for (int ww = 0; ww < wm; ww++)
                {
                    if (ww + count <= w/2)
                    { 
                        printf("%c",b);
                        b ++;
                    }
                    else 
                    {
                        b --;
                        printf("%c",b-1);
                    }
                }
                wm -= 2; count = 0; printf("\n");
            }
        if (h % 2 == 0)
            wm += 2; 
        else
            wm += 4;      
        for (hh = g; hh >= (h+1)/2 && hh < h; hh++)
            {   
                f = hh + 1;
                for (f; f < h; f ++)
                {
                    printf (" ");
                    count ++;
                } 
                
                b = a + count;
                for (int ww = 0; ww < wm ; ww++)
                {
                    if (ww + count <= w/2)
                    { 
                        printf("%c",b);
                        b ++;
                    }
                    else 
                    {
                        b --;
                        printf("%c",b-1);
                    }
                }
                wm += 2; count = 0; printf("\n");
            }
    printf("\n");        
}
