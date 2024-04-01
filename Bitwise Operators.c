/*In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. The logical operators, and C language, use  to represent true and  to represent false. The logical operators compare bits in two numbers and return true or false,  or , for each bit compared.

Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by */

//------------------------------------------------------------------------------------------------------------------------------------------------------------------//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  
    int r = 0,r1 = 0,r2 = 0;
    int r_prv = 0,r1_prv = 0,r2_prv = 0;
    int r_max = 0,r1_max = 0,r2_max = 0;
  
    //Write your code here.
    int a,b;
    for(a = 1;a<n;a++){
        
        for(b = a+1;b<=n;b++){
      
                r  = a&b;
                if((r > r_prv)&&(r<k)){
                    
                    r_max = r;
                    r_prv =r;
                    
                }
                
                r1 = a|b;
                if((r1 > r1_prv)&&(r1<k)){
                    
                    r1_max = r1;
                    r1_prv = r1;
                    
                }
                
                r2 = a^b;
                if((r2 > r2_prv)&&(r2 <k)){
                    
                    r2_max = r2;
                    r2_prv = r2;
                     
                }
      
        }
        
    }
    
    printf("%d\n",r_max);
    printf("%d\n",r1_max);
    printf("%d\n",r2_max);
    
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
    
}

