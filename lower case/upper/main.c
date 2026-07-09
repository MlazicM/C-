#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char text[55];
    int num1=0,num2=0,i=0, num3=0, num4=0;
    printf("Enter a word :\n");
    fgets(text, sizeof(text), stdin);
    int lenght = strlen(text);
    for(i=0;i<lenght;i++){
        if(strchr("aeiouAEIOU", text[i]) !=NULL)
        num1++;
    else
        num2++;
    if(islower(text[i]))
        num3++;
    if (isupper(text[i])!=0)
        num4++;
    }
    printf("Number of vowels: %d\n", num1);
    printf("Number of consonants: %d\n", num2);
    printf("Number of lower case letters : %d\n", num3);
    printf("Number of upper case letters : %d\n", num4);
    return 0;
}
