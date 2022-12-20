#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("To jest program obliczajacy silnie");
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
    return 2;
}
int main()
{
    int n;
    printf("Podaj liczbe do wyliczenia silni: ");
    scanf("%d", &n);
    printf("Silnia dla %d to %d\n", n, silnia(n));

    return 0;
}
