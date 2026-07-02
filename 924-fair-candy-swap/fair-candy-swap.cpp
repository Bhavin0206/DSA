class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int aliceTotal = 0;
        int bobTotal = 0;

        for (int x : aliceSizes) {
            aliceTotal += x;
        }

        for (int x : bobSizes) {
            bobTotal += x;
        }

        for (int aliceBox : aliceSizes) {
            for (int bobBox : bobSizes) {
                int newAliceTotal = aliceTotal - aliceBox + bobBox;
                int newBobTotal = bobTotal - bobBox + aliceBox;

                if (newAliceTotal == newBobTotal) {
                    return {aliceBox, bobBox};
                }
            }
        }

        return {};
    }
};