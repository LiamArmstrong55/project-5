//  Project 5
//  Liam Armstrong
//  11/27/23
//  main.cpp
#include <iostream>
#include "Dogs.h"
using namespace std;

int main() {
    try {
        Dogs dogPopulation("dogs.txt");

        int userChoice;
        do {
            cout << "\nDog Population Explorer Menu:\n";
            cout << "1. See the total number of dogs in the world\n";
            cout << "2. Input a country name to find out how many dogs are in that country\n";
            cout << "3. Exit\n";
            cout << "Enter your choice: ";
            cin >> userChoice;

            switch (userChoice) {
                case 1:
                    cout << "Total number of dogs in the world: " << dogPopulation.getTotalDogs() << endl;
                    break;

                case 2: {
                    string inputCountry;
                    cout << "Enter the country name: ";
                    cin >> inputCountry;

                    int dogsInCountry = dogPopulation.getDogsInCountry(inputCountry);
                    cout << "Number of dogs in " << inputCountry << ": " << dogsInCountry << endl;
                    break;
                }

                case 3:
                    cout << "Exiting program.\n";
                    break;

                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (userChoice != 3);
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
