class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;
        int count = 1;

        for (int fast = 1; fast <= chars.size(); fast++) {
            if (fast < chars.size() && chars[fast] == chars[fast - 1]) {
                count++;
            } else {
                chars[write++] = chars[fast - 1];

                if (count > 1) {
                    string number = to_string(count);

                    for (char digit : number) {
                        chars[write++] = digit;
                    }
                }

                count = 1;
            }
        }

        return write;
    }
};