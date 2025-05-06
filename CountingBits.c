Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
 

Constraints:

0 <= n <= 105

/////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void reverse(char *bin, int left, int right) {

    while (left < right) {
        char temp = bin[left];
        bin[left] = bin[right];
        bin[right] = temp;
        left++;
        right--;
    }
}

// function to convert decimal to binary
char* decToBinary(int n) {
    int index = 0;
	char* bin = (char*) malloc(32 * sizeof(char));

    while (n > 0) {
        int bit = n % 2;
        bin[index++] = '0' + bit;
        n /= 2;
    }
    bin[index] = '\0';

	// Reverse the binary string
	reverse(bin, 0, index-1);
  	return bin;

}

int* countBits(int n, int* returnSize) {

    char* bin;
    int count = 0;
    int *p = malloc((n+1)*sizeof(int));

    for(int i = 0;i<=n;i++){

        p[i] = i;

        bin = decToBinary(p[i]);

        //printf("char =%s\n",bin);

        for(int j=0;j<strlen(bin);j++){

            if(bin[j]==49){

                count++;

            }

        }

        p[i] = count;
        //printf("count =%d\n",p[i]);
        count = 0;

    }

    *returnSize = n+1;
    return p;

}
