#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int wynik,n,i;
    wynik=1;
    printf("Podaj liczbe, ktorej silnie chcesz obliczyc \n");
    scanf("%d",&n);
    {
        i=n;
        while(i>0)
            wynik*=i--;
        printf("%d! wynosi %d \n",n,wynik);
    }
    return 0;
}
