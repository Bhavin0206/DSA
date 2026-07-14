class Solution {
public:
    bool isHappy(int n) {

        unordered_set<int> os;

        while (n != 1) {
            if(os.find(n) !=os.end()){
                return false;
            }
            os.insert(n);
            n=getSum(n);
        }
        return true;
    }

    int getSum(int n) {
        int sum=0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n = n / 10;
        }
        return sum;
    }
};