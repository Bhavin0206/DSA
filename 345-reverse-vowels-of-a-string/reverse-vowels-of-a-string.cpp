class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right){
            char leftSmall=tolower(s[left]);
            char rightSmall=tolower(s[right]);
            if((leftSmall=='a'||leftSmall=='e'|| leftSmall=='i'|| leftSmall=='o'|| leftSmall=='u') && (rightSmall=='a'||rightSmall=='e'|| rightSmall=='i'|| rightSmall=='o'|| rightSmall=='u')){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if((leftSmall=='a'||leftSmall=='e'|| leftSmall=='i'|| leftSmall=='o'|| leftSmall=='u') && (rightSmall!='a' &&rightSmall!='e'&& rightSmall!='i'&& rightSmall!='o'&& rightSmall!='u')){
                right--;
            }else if((leftSmall!='a'&& leftSmall!='e'&& leftSmall!='i'&& leftSmall!='o'&& leftSmall!='u') && (rightSmall=='a'||rightSmall=='e'|| rightSmall=='i'|| rightSmall=='o'|| rightSmall=='u')){
                left++;
            }else{
                left++;
                right--;
            }
        }

        return s;
        
    }
};