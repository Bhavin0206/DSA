class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> mourse = {".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                                 "--.",  "....", "..",   ".---", "-.-",  ".-..",
                                 "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                                 "...",  "-",    "..-",  "...-", ".--",  "-..-",
                                 "-.--", "--.."};
        unordered_set<string> seen;

        for (int i = 0; i < words.size(); i++) {
            string transformation = "";
            for (int j = 0; j < words[i].size(); j++) {
                int index = words[i][j] - 'a';
                transformation += mourse[index];
            }
            seen.insert(transformation);
        }

        return seen.size();
    }
};