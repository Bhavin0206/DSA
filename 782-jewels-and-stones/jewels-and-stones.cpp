class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_set<char>seen;

        for(int i=0;i<jewels.length();i++){
            seen.insert(jewels[i]);
        }
        int count=0;

        for(int i=0;i<stones.length();i++){
            if(seen.find(stones[i])!=seen.end()){
                count++;
            }
        }
        return count;
        
    }
};