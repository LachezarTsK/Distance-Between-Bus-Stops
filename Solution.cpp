
#include <vector>
using namespace std;

class Solution {
    
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination)const {
        int forwardDistance = findDistance(distance, start, destination);
        int backwardDistance = findDistance(distance, destination, start);
        return min(forwardDistance, backwardDistance);
    }

private:
    int findDistance(const vector<int>& distance, int start, int destination) const {
        int totalDistance = 0;
        for (int current = start; current != destination; current = (current + 1) % distance.size()) {
            totalDistance += distance[current];
        }
        return totalDistance;
    }
};
