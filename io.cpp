#include "io.h"

std::vector<Restaurant> getRestaurants(std::string fileName) {
    std::vector<std::string> restaurantData = getRestaurantData(fileName);

    std::cout << restaurantData.at(3) << std::endl;
    std::cout << restaurantData.at(4) << std::endl;

    std::vector<Restaurant> restaurants;
    std::string name;
    std::string cuisine;
    double rating;
    int costPerPerson;

    for (int i = 0; i < restaurantData.size(); i += 4) {
        name = restaurantData.at(i);
        cuisine = restaurantData.at(i + 1);
        rating = std::stod(restaurantData.at(i + 2));
        costPerPerson = std::stoi(restaurantData.at(i + 3));

        Restaurant restaurant;
        restaurant.name = name;
        restaurant.cuisine = cuisine;
        restaurant.rating = rating;
        restaurant.costPerPerson = costPerPerson;

        restaurants.push_back(restaurant);
    }

    return restaurants;

}

std::vector<std::string> getRestaurantData(std::string fileName) {
    std::ifstream file;
    file.open(fileName);

    std::string segment;

    std::getline(file, segment);
    std::getline(file, segment);

    std::vector<std::string> data;

    while (std::getline(file, segment, '|')) {
        data.push_back(segment);
    }

    file.close();

    return data;
}


