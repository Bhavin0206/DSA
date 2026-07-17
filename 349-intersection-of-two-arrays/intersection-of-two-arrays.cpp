class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>chk;

        for(int i=0;i<nums2.size();i++){
            chk.insert(nums2[i]);
        }

        vector<int>rs;

        for(int i=0;i<nums1.size();i++){
            
                if(chk.find(nums1[i])!=chk.end()){
                    rs.push_back(nums1[i]);
                    chk.erase(nums1[i]);
                }
             
        }

        return rs;














        // unordered_set<int> uo;
        // vector<int> v;

        // for(int i=0;i<nums1.size();i++){
        //     uo.insert(nums1[i]);
        // }

        // for(int j=0; j<nums2.size();j++){
        //     if(uo.find(nums2[j])!=uo.end()){
        //         v.push_back(nums2[j]);
        //         uo.erase(nums2[j]);
        //     }
        // }
        // return v;
    }


    //---------hashing method--------- 3ms
    //     unordered_set<int> result;
    //     vector<int> v;

    //     for(int i=0;i<nums1.size();i++){
    //         result.insert(nums1[i]);
    //     }

    //     for(int j=0;j<nums2.size();j++){
    //        if(result.count(nums2[j])>0)
    //        {
    //         v.push_back(nums2[j]);
    //         result.erase(nums2[j]);
    //        }
    //     }

    //     return v;
    // }

    
//----------this is Brute Force method 11ms----------------
    //     vector<int> store;

    //     for(int i=0;i<nums1.size();i++){

    //         for(int j=0;j<nums2.size();j++){
    //             if(nums1[i]==nums2[j]){
    //                 if(find(store.begin(), store.end(), nums1[i]) == store.end()){
    //                     store.push_back(nums1[i]);
    //                 }
    //             }
    //         }
    //     }
    //     return store;
    // }
};