#include <iostream>
#include <vector>
#include "io.h"
#include "sort.h"

std::vector<Restaurant> sortRestaurants () {
    std::string fileName = "restaurants.txt";
    std::vector<Restaurant> input = getRestaurants(fileName);

    // initialize vector sorted to the same size as vector input
    std::vector<Restaurant> sorted (input.size());

    // iterate through vector input
    for (int i = 0; i < input.size(); i++) {
        // compare the rating of the new input and the existing, sorted vector
        if ( input.at(i).rating > sorted.at(i).rating ) {
            // pull existing elements back by one 
            for (int k = sorted.size() - 1; k > sorted.at(i).rating; k--) {
                sorted.at(k) = sorted.at(k-1);
            }
            // insert restaurant
            sorted.at(i) = input.at(i);
        } else {
            sorted.push_back(input.at(i));
        };
    }

    return sorted;
};