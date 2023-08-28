/*Given a five digit integer, print the sum of its digits.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int val;
    int n;
    int sum;
    
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(int i = 0; i<5;++i)
    {
        val = n;
        val = val%10;
        n = n/10;
        
        sum +=val;
        
    
    }
    
    printf("%d",sum);
    

    return 0;
}
