/*Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format

The first line contains a string,  which is the given number.

Constraints


All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from  to .*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1000];
    int freq[100];

    scanf("%s",&str);

    for(int i=48;i<58;i++)
        freq[i] = 0;

    //for(int i=0;i<10;i++)
        //printf("%c",str[i]);

    //printf("\n");

    for(int i=48;i<58;i++){

        for(int j=0;j<strlen(str);j++){

                //printf("%c",str[j]);

            if(str[j]==i){

                //printf("%c",str[j]);

                ++freq[i];

            }

        }

        //printf("\n");


    }

    for(int i=48;i<58;i++)
        printf("%d ",freq[i]);

    return 0;

}
