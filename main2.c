#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main(void)
{
    int niz[MAX];
    int i,n,broj,nemarezultat=-1;
    do
    {
        printf("\nUnesite velicinu niza:");
        scanf("\%d", &n);
    }
    while(n<1||n>MAX);
    printf("Unos elemenata niza\n");
    for(i=0;i<n;i++)
    {
        printf("\tElement [%d]= ", i);
        scanf("%d", &niz[i]);
    }
    printf("Unesite broj koji trazite u nizu: ");
    scanf("%d", &broj);
    for(i=0;i<n;i++)
        if(broj==niz[i])
    {
        printf("\nTrazeni element se nalazi na poziciji :%d\n", i);
        nemarezultat=0;
    }
    if(nemarezultat==-1)
        printf("\n\tTrazeni element se ne nalazi u nizu.\n");



    return 0;
}
