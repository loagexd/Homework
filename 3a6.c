#include <stdio.h>

int main (void)
{
    int h = 5, w = 5, wm = w, f = 0, count = 0, hh;
    char a = 'A', b = a;
        for (hh = 0; hh <= h/2; hh++)
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
        wm += 4;
        if (h % 2 == 0)
                {
                    f = (h/2 +1);
                    wm += 2;
                }
         else
                    f = (h/2 +1) + 1;       
        for (hh = h/2 + 1; hh > h/2 && hh < h; hh++)
            {   
                for (f ; (h - f) > 0; f += 1)
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
}