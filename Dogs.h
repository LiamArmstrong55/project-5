//  Dogs.h
#ifndef DOGS_H
#define DOGS_H

#include <string>
#include <unordered_map>

class Dogs {
public:
    Dogs(const std::string& dataFileName);
    int getTotalDogs() const;
    int getDogsInCountry(const std::string& inputCountry) const;

private:
    std::unordered_map<std::string, int> dogPopulation; // Hash table with country as key and dog population as value
    int totalDogs; // Total number of dogs in the world
};

#endif // DOGS_H
