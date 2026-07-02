#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes,
                              vector<int>& bobSizes) {
        int aliceTotal = 0;
        int bobTotal = 0;

        for (int box : aliceSizes) {
            aliceTotal += box;
        }

        for (int box : bobSizes) {
            bobTotal += box;
        }

        int difference = (bobTotal - aliceTotal) / 2;

        unordered_set<int> bobSet;

        for (int box : bobSizes) {
            bobSet.insert(box);
        }

        for (int aliceBox : aliceSizes) {
            int bobBoxNeeded = aliceBox + difference;

            if (bobSet.find(bobBoxNeeded) != bobSet.end()) {
                return {aliceBox, bobBoxNeeded};
            }
        }

        return {};
    }
};