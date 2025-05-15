A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
 

Constraints:

0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.

///////////////////////////////////////////////////////////////////////////////////////////////

  bool isSubsequence(char* s, char* t) {
    int n = strlen(s), m = strlen(t);
    if (n == 0) return true;
    if (n > m)  return false;

    int prev = 0;
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = prev; j < m; j++) {
            if (s[i] == t[j]) {
                prev = j + 1;  // next search starts just after this match
                found = true;
                break;
            }
        }
        if (!found) {
            return false;    // s[i] couldn't be matched in t after prev
        }
    }
    return true;   // every char in s was found in order
}
