Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"

 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

char* reverseVowels(char* s){

    int count = 0;
    int len = strlen(s);


    for(int i=0;i<len;i++){

        if((s[i] == 'a')||(s[i] == 'e')||(s[i] == 'i')||(s[i] == 'o')||(s[i] == 'u')||(s[i] == 'A')||(s[i] == 'E')||(s[i] == 'I')||(s[i] == 'O')||(s[i] == 'U')){

            count++;

        }

    }

    printf("len = %d\n",count);

    char *p = malloc(count*sizeof(char));
    char *p1 = p;
    int j = count - 1;

    for(int i=0;i<len;i++){

        if((s[i] == 'a')||(s[i] == 'e')||(s[i] == 'i')||(s[i] == 'o')||(s[i] == 'u')||(s[i] == 'A')||(s[i] == 'E')||(s[i] == 'I')||(s[i] == 'O')||(s[i] == 'U')){

            *p = s[i];
            p++;

        }

    }

    for(int i=0;i<len;i++){

        if((s[i] == 'a')||(s[i] == 'e')||(s[i] == 'i')||(s[i] == 'o')||(s[i] == 'u')||(s[i] == 'A')||(s[i] == 'E')||(s[i] == 'I')||(s[i] == 'O')||(s[i] == 'U')){

            //printf("char = %c\n",p1[(count-1) - i]);
            s[i] = p1[j--];

        }

    }

    return s;

}
