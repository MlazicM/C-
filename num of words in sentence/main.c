#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sentence[100];
    printf("Enter sentence:\n");
    fgets(sentence, sizeof(sentence),stdin);
    printf("You entered :\t%s\n", sentence);
    int word_count=0;
    int in_word=0;
    int lenght=strlen(sentence);
    for(int i=0;i<lenght;i++)
    {
        if(sentence[i]!= ' '&& !in_word){
            word_count++;
            in_word=1;
        }
        else if(sentence[i]== ' '){
            in_word=0;
        }
    }
    printf("Count of words: %d\t\n", word_count);
    return 0;
}
