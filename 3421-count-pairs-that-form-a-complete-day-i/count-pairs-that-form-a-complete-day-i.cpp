class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int count =0;
        int hr=hours.size();
        for(int i=0;i<hr;i++){
            for(int j=i+1;j<hr;j++){
                int total=(hours[i]+hours[j]);
                if(total%24==0){
                    count++;
                }
            }
        }
        return count;
    
        
    }
};