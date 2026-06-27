class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq;
        if(s.size()!=t.size()){
            return false;
        }

        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }

        for(int j=0;j<t.size();j++){
            if(freq.find(t[j])!=freq.end()){
                freq[t[j]]--;
            }
        }

        bool chk=true;
        for(auto p:freq){
            if(p.second!=0){
                chk=false;
            }
        }

        return chk;





    }




    //     if(s.length()!=t.length()){
    //         return false;
    //     }
    //     sort(s.begin(),s.end());
    //     sort(t.begin(),t.end());

    //     for(int i=0;i<s.length();i++){
    //         if(s[i]!=t[i]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
};