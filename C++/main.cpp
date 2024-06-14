#include <iostream>
#include <string>

int main() {
    double banana_length = 7.5;
    int football_field_length = 3500;

    double banana_width = 0.75;
    int football_field_width = 1920;

    double bananas_per_field_length = football_field_length / banana_length;
    double bananas_per_field_width = football_field_width / banana_width;

    std::cout << "length: " + std::to_string(bananas_per_field_length) << std::endl;
    std::cout << "width: " + std::to_string(bananas_per_field_width) << std::endl;
    std::cout << "football area: " + std::to_string(bananas_per_field_length * bananas_per_field_width) << std::endl;

    return 0; // roughly 480 
}