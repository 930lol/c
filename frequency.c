#include <stdio.h>

int main()
{
    //Initializing variables.
    char str[100];
    int i;
    int freq[256] = {0};
    
    //Accepting inputs.
    printf("Enter the string: ");
    gets(str);
    
    //Calculating frequency of each character.
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    
    //Printing frequency of each character.
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("The frequency of %c is %d\n", i, freq[i]);
        }
    }
    return 0;
}
