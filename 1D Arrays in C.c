/*In this challenge, create an array of size  dynamically, and read the values from stdin. Iterate the array calculating the sum of all elements. Print the sum and free the memory where the array is stored.

While it is true that you can sum the elements as they are read, without first storing them to an array, but you will not get the experience working with an array. Efficiency will be required later.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int *arr,n,sum = 0;
    scanf("%d",&n);

    arr = (int*) malloc(n* sizeof(int));
    for(int i=0;i<n;i++){

        scanf("%d",(arr+i));

    }

    for(int i=0;i<n;i++){

        sum+=*(arr+i);

    }

    printf("%d",sum);
    free(arr);
    return 0;
}
