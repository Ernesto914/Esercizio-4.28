#include <stdio.h>

int main(void)
{
int numeratore=1, n, max=0;
    while (numeratore <= 10)
    {
        printf("Inserisci il %d numero: ", numeratore);
        scanf("%d", &n);
        numeratore++;
        if (n>max)
        {
            max=n;
        }
    }
    printf("Il numero massimo tra quelli inseriti è %d", max);
    return 0;

}
