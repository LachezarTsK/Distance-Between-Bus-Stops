
public class Solution {

    public int distanceBetweenBusStops(int[] distance, int start, int destination) {
        int forwardDistance = findDistance(distance, start, destination);
        int backwardDistance = findDistance(distance, destination, start);
        return Math.min(forwardDistance, backwardDistance);
    }

    private int findDistance(int[] distance, int start, int destination) {
        int totalDistance = 0;
        for (int current = start; current != destination; current = (current + 1) % distance.length) {
            totalDistance += distance[current];
        }
        return totalDistance;
    }
}
