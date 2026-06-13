class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0;

        while (i < n) {
            int start = i;

            while (i < n && s[i] != ' ') {
                i++;
            }

            reverse(s.begin() + start, s.begin() + i);
            i++; // skip space
        }

        return s;
    }
};
