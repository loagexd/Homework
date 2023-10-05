#include <stdio.h>

int main(void)
{
    int n;
    printf("Введите число n\n");
    scanf("%d",&n);
    for (int s = 1, i = 1; i <= n; i++)
        {
            s *= i;
            printf("%d , %d\n",i ,s);
        }
}