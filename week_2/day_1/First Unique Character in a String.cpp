class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);

        //Count frequency
        for(char ch : s) {
            freq[ch - 'a']++;
        }

        //first unique character
        for(int i = 0; i < s.length(); i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};;
