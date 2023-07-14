//Task

//You have to print the character,c, in the first line. 
//Then print s in next line. In the last line print the sentence, sen.
##########################################################

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    char s[100];
    char sen[100];
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        
    scanf("%c",&c);
    scanf("\n");
    scanf("%[^\n]%*c",&s);
    scanf("\n");
    scanf("%[^\n]%*c",&sen); 
    
    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s\n",sen);
    
    return 0;
}
