//  Dogs.cpp
#include "Dogs.h"
#include <fstream>
#include <stdexcept>

Dogs::Dogs(const std::string& dataFileName) {
    std::ifstream inputFile(dataFileName);
    if (!inputFile.is_open()) {
        throw std::runtime_error("Unable to open data file.");
    }

    std::string country;
    int population;
    totalDogs = 0;

    while (inputFile >> country >> population) {
        dogPopulation[country] = population;
        totalDogs += population;
    }

    inputFile.close();
}

int Dogs::getTotalDogs() const {
    return totalDogs;
}

int Dogs::getDogsInCountry(const std::string& inputCountry) const {
    auto it = dogPopulation.find(inputCountry);
    if (it != dogPopulation.end()) {
        return it->second;
    } else {
        throw std::runtime_error("Country not found in the data.");
    }
}
