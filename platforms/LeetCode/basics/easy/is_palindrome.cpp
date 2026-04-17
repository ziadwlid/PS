class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        
        int original = x;
        long rev = 0;

        while (x > 0) {
            int dig = x % 10;
            rev = rev * 10 + dig;
            x /= 10;
        }

        return original == rev;
    }
};