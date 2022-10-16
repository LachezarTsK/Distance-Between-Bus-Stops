
#include <vector>
#include <numeric>
using namespace std;

class Solution {
    
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) const {
        if (start > destination) {
            swap(start, destination);
        }
        int forwardDistance = accumulate(distance.begin() + start, distance.begin() + destination, 0);
        int backwardDistance = accumulate(distance.begin() + destination, distance.end(), 0)
                             + accumulate(distance.begin(), distance.begin() + start, 0);
        return min(forwardDistance, backwardDistance);
    }
};
