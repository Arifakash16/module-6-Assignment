

class PalindromeChecker {
public:

    bool checkPalindrome(string s, int i) {
        if (i > s.size() / 2) { // Check if i is greater than half of the length of the string
            return true;
        }
        return s[i] == s[s.size() - i - 1] && checkPalindrome(s, i + 1); // Recursively check if s[i] == s[j] then call the function again
    }

    bool isPalindrome(string s) {
        return checkPalindrome(s, 0);
    }

};

// Time Complexity: O(n)
// Space Complexity: O(n)