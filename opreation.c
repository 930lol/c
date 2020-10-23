#include  <stdio.h>
#include<string.h>
int main()
{
    //Initializing variables.
    char s[100];
    int i,sum = 0;
    
    //Accepting inputs.
    printf("Enter the string:\n");
    gets(s);
    int n=strlen(s);
    int p=n-1;
    //Iterating each character through for loop.
    for (i= 0; s[i] != '\0'; i++)
    {
       if(i==0||i==n-1)
       {
       	s[i]=s[i]-32;
       }
       else if(s[i]==' ')
       {
       	s[i-1]=s[i-1]-32;
       	s[i+1]=s[i+1]-32;
       }
    }
    //Printing result.
    printf("%s ", s);
    return 0; 
}
