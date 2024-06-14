// Dimensions of Banana
const banana_width = 0.75;
const banana_length = 7.5;
const banana_area = banana_width * banana_length;

// Dimensions of Football field
const football_field_width = 1920;
const football_field_length = 3600;
const football_field_area = football_field_width * football_field_length;

const bananas_fit = football_field_area / banana_area;

console.log(bananas_fit + ' bananas could fit in a football field');
// prints: 1228800 bananas could fit in a football field
// // roughly 480
