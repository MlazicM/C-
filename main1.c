#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main(void)
{
    int niz[MAX];
    int i,n,max;
    do
    {
        printf("Unesite velicinu niza:");
        scanf("%d", &n);
    }
    while(n<1||n>MAX);
    printf("Unos elemenata\n");
    for(i=0;i<n;i++)
    {
        printf("Element [%d]= ", i);
        scanf("%d", &niz[i]);
    }
    max=niz[0];
    for(i=1;i<n;i++)
    {
        if(niz[i]>max)
            max=niz[i];
    }
    printf("Najveci element u nizu ima vrednost %d\n",max);
    return 0;
}
