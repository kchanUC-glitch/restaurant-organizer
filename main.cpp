#include "io.h"
#include "sort.h"

int main() {
    std::string fileName = "restaurants.txt";

    std::vector<Restaurant> restaurants = sortRestaurants();

    for (const Restaurant& restaurant : restaurants) {
        printRestaurant(restaurant);
        std::cout << std::endl;
    }

    return 0;
}