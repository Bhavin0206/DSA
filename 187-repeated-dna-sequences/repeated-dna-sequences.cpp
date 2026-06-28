class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> freq;
        vector<string> ans;

        for (int i = 0; i + 10 <= s.size(); i++) {
            string part = s.substr(i, 10);

            freq[part]++;

            // Add only when it appears for the second time
            if (freq[part] == 2) {
                ans.push_back(part);
            }
        }

        return ans;
    }
};