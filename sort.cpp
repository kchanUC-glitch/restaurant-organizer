#include <iostream>
#include <vector>
#include "io.h"
#include "sort.h"

std::vector<Restaurant> sortRestaurants () {
    std::string fileName = "restaurants.txt";
    std::vector<Restaurant> input = getRestaurants(fileName);

    // iterate through vector input
    for (int i = 0; i < input.size() - 1; i++) {
        // compare the rating
        for (int k = i; k < input.size() - 1; k++) {
            if ( input.at(i).rating < input.at(k+1).rating) {
                Restaurant placeHolder = input.at(k+1);
                input.at(k+1) = input.at(i);
                input.at(i) = placeHolder;
            }
        }
    }

    return input;
};