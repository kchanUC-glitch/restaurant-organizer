#include "io.h"
#include "sort.h"

int main() {
    std::string fileName = "restaurants.txt";

    std::vector<Restaurant> restaurants = getRestaurants(fileName);

    // for (int i = 0; i < restaurants.size(); i++) {
    //     std::cout << "Name: " << restaurants.at(i).name << "Cuisine: " << restaurants.at(i).cuisine << "Rating: " << restaurants.at(i).rating << "Cost per person: " << restaurants.at(i).costPerPerson;
    // }

    return 0;
}