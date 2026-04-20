#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

struct Restaurant {
    std::string name;
    std::string cuisine;
    double rating;
    int costPerPerson;
};

std::vector<Restaurant> getRestaurants(std::string);
std::vector<std::string> getRestaurantData(std::string);
void printRestaurant(const Restaurant&);