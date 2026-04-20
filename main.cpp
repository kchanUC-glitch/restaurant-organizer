#include "io.h"
#include "sort.h"

struct Restaurant;

int main() {
    std::string fileName = "restaurants.txt";


    std::vector<Restaurant> restaurants = sortByRating();

    for (const Restaurant& restaurant : restaurants) {
        printRestaurant(restaurant);
        std::cout << std::endl;
    }

    return 0;
}