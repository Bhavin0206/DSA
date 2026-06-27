class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>freq;

       

        for(int i=0;i<ransomNote.size();i++){
            freq[ransomNote[i]]++;
        }
        for(int j=0;j<magazine.size();j++){
            if(freq.find(magazine[j])!=freq.end() && freq[magazine[j]]>0){
                freq[magazine[j]]--;
            }
        }

        for(auto& p:freq){
            if(p.second!=0){
                return false;
            }
        }

        return true;

    }

        // unordered_map<char, int> uo;

        // for(int i=0;i<ransomNote.length();i++){
        //     uo[ransomNote[i]]++;
        // }

        // for(int j=0;j<magazine.length();j++){
        //    if(uo.find(magazine[j])!=uo.end()){
        //     uo[magazine[j]]--;

        //     if(uo[magazine[j]]==0){
        //         uo.erase(magazine[j]);
        //     }
        //    }
        // }
        // if(uo.empty())
        // {
        //     return true;
        // }else{
        //     return false;
        // }
        
    // }
};