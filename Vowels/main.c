#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char text[55];
    int num1=0,num2=0,i=0;
    int lenght = strlen(text);
    printf("Enter a word :\n");
    scanf("%s", text);
    for(i=0;i<lenght;i++){
        if(strchr("aeiouAEIOU", text[i]) !=NULL)
        num1++;
    else
        num2++;
    }
    printf("Number of vowels: %d\n", num1);
    printf("Number of consonants: %d\n", num2);




    return 0;
}
