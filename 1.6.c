#include <stdio.h>

int main(void)
{
    int a, n;
    int s = 0;
    printf("Введите переменную a\n");
    scanf("%d",&a);
            for (n = 2; n < a; n++)
                {
                    printf("n = %d, a = %d\n",n ,a);
                     if (a % n == 0) 
                        {
                         s = 1; break;
                        }
                }
    printf("%d\n",s);   
}