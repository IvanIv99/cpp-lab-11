#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <deque>
#include <fstream>


template<typename T>
std::ostream &operator<<(std::ostream &vivod, std::vector<T> brr) {
    for (size_t i = 0; i < brr.size(); ++i) {
        vivod << brr[i] << " ";
    }
    return vivod;
}

template<typename T>
void displayContainer(std::deque<T> brr) {
    if (brr.empty())
        exit(0);
    for (size_t i = 0; i < brr.size(); ++i) {
        std::cout << brr[i] << " ";
    }
    std::cout << std::endl;
}

template<typename T>
void Task1(std::vector<T> input) {
    std::cout << input;

    typename std::vector<T>::iterator a = input.begin();
    typename std::vector<T>::iterator b = input.end();
    std::reverse(a, b);
    std::cout << input;

    std::advance(a, std::distance(a,b)/2);
    std::replace(a, b, 2, 0);
    std::cout << input;
}

template <typename T>
void Task2(const std::vector<T> input) {
    std::cout << input;
    std::deque<T> deck(input.begin(), input.end());
    auto back_iter = std::back_inserter(deck);
    auto forward_iter = std::front_inserter(deck);
    std::fill_n(forward_iter, 3, 4);
    std::fill_n(back_iter, 3, -1);
    displayContainer<T>(deck);
}

template<typename T>
void Task3(const std::vector<T> input) {
    std::ifstream input_file("txt.txt");
    std::vector<T> file_data((std::istream_iterator<T>(input_file)), std::istream_iterator<T>());
    std::cout << file_data;
    input_file.close();

    std::ofstream output_file("txt.txt");
    std::copy(input.begin(), input.end(), std::ostream_iterator<T>(output_file, " "));
    output_file.close();
}

template<typename T>
void Task4(const std::vector<T> input) {
    auto a = input.begin();
    auto  b = input.end();
    std::deque<T> deck(a, b);
}

template<typename T>
void Task5(const std::vector<T> input) {
    typename std::vector<T>::const_reverse_iterator a = input.rbegin();
    typename std::vector<T>::const_reverse_iterator b = input.rend();
    std::vector<T> reversed_input(a, b);
    std::cout << reversed_input;
}