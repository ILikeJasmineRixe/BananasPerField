#include <stdio.h>

int main() {
    double banana_width = 0.75;  // inches
    double banana_length = 7.5;  // inches
    double banana_area = banana_width * banana_length;

    double football_field_width = 1920;  // inches
    double football_field_length = 3600;  // inches
    double football_field_area = football_field_width * football_field_length;

    double bananas_fit = football_field_area / banana_area;

    printf("%f bananas could fit in a football field\n", bananas_fit);
    // prints: 1228800.0 bananas could fit in a football field
    // rouhgly 480
}
