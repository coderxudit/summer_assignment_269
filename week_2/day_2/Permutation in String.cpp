class Solution {
public:

    bool checkEqual(int a[26], int b[26]) {
        for(int i = 0; i < 26; i++) {
            if(a[i] != b[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        int count1[26] = {0};

        for(char ch : s1) {
            count1[ch - 'a']++;
        }

        int windowSize = s1.length();
        int count2[26] = {0};

        int i = 0;

        // first window
        while(i < windowSize && i < s2.length()) {
            count2[s2[i] - 'a']++;
            i++;
        }

        if(checkEqual(count1, count2))
            return true;

        // remaining windows
        while(i < s2.length()) {

            count2[s2[i] - 'a']++;

            count2[s2[i - windowSize] - 'a']--;

            if(checkEqual(count1, count2))
                return true;

            i++;
        }

        return false;
    }
};
