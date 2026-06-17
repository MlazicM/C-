#include <stdio.h>
#include <stdlib.h>
#define MAX 50 //definisanje velicnine
int main(void)
{
    int niz[MAX]; //deklaracija celobrojnog niza od 50 elemenata
    int i,n,min; //deklaracija promenljivih
    do //zastita od pogresnog unosa
    {
        printf("\nUnesite velicinu niza:");
        scanf("%d", &n);
    }
    while(n<1 || n>MAX); //velicina mora biti u opsegu
    printf("\nUnos elemenata niza:\n");
    for(i=0;i<n;i++)
    {
        printf("\tElement[%d]=",i);
        scanf("%d", &niz[i]);
    }
    min=niz[0];
    for(i=1;i<n;i++)
        if(niz[i]<min)
        min=niz[i];
    printf("\nNajmanji element u nizu uma vrednost %d\n", min);
    return 0;
}
