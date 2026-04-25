/*
Merge Strings Alternately
Easy Topics Company Tags

You are given two strings, word1 and word2. Construct a new string by merging them in alternating order, starting with word1 — take one character from word1, then one from word2, and repeat this process.

If one string is longer than the other, append the remaining characters from the longer string to the end of the merged result.

Return the final merged string.

Example 1:

Input: word1 = "abc", word2 = "xyz"

Output: "axbycz"
*/

#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string out = "";
        int i = 0, j = 0;
         while (i < word1.size() || j < word2.size()) {
            if (i < word1.size()) {
                out.push_back(word1[i]);
                i++;
            }
            if (j < word2.size()) {
                out.push_back(word2[j]);
                j++;
            }
        }
        return out;
    }
};