#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include "main2.hpp"

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::vector<int> arr;

    if (!input.empty()) {
        std::istringstream s(input);
        int elem;
        while (s >> elem) {
            arr.push_back(elem);
        }
    }

    Task1(arr);
    Task2(arr);
    Task3(arr);
    Task4(arr);
    Task5(arr);
}