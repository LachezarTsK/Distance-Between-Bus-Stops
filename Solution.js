
/**
 * @param {number[]} distance
 * @param {number} start
 * @param {number} destination
 * @return {number}
 */
var distanceBetweenBusStops = function (distance, start, destination) {
    let forwardDistance = findDistance(distance, start, destination);
    let backwardDistance = findDistance(distance, destination, start);
    return Math.min(forwardDistance, backwardDistance);
};

/**
 * @param {number[]} distance
 * @param {number} start
 * @param {number} destination
 * @return {number}
 */
function findDistance(distance, start, destination) {
    let totalDistance = 0;
    for (let current = start; current !== destination; current = (current + 1) % distance.length) {
        totalDistance += distance[current];
    }
    return totalDistance;
}
