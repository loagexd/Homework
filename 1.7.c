#include <stdio.h>

int main(void)
{
    int n = 2, a, crat = 0;
    printf("Введите число A\n");
    scanf("%d",&a);
        while (a % n != 0)
            {
                n++;
                if (n == a)
                    {crat = 1;break;}
            }
    printf("%d\n",crat);
}