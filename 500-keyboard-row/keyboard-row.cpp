class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        
        string rows[] = {
            "qwertyuiop",
            "asdfghjkl",
            "zxcvbnm"
        };

        for (const string& word : words) {
            string lowerWord = word;

            for (char& ch : lowerWord) {
                ch = tolower(static_cast<unsigned char>(ch));
            }

            for (const string& row : rows) {
                bool valid = true;

                for (char ch : lowerWord) {
                    if (row.find(ch) == string::npos) {
                        valid = false;
                        break;
                    }
                }

                if (valid) {
                    ans.push_back(word);
                    break;
                }
            }
        }

        return ans;
    }
};