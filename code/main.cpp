#include <iostream>
using namespace std;

int main() {
    // Dimensions of Banana
    double banana_width = 0.75;
    double banana_length = 7.5;
    double banana_area = banana_width * banana_length;

    // Dimensions of Football field
    double football_field_width = 1920;
    double football_field_length = 3600;
    double football_field_area = football_field_width * football_field_length;

    double bananas_fit = football_field_area / banana_area;

    cout << bananas_fit << " bananas could fit in a football field" << endl;
    // prints: 1228800.0 bananas could fit in a football field
    // rouhgly 480

    return 0;
}
