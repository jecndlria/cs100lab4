#include "../header/rectangle.hpp"

Rectangle::Rectangle() : width(0), height(0) {};
Rectangle::Rectangle(int w, int h) : width(w + 1), height(h + 1) {}; 

void Rectangle::set_width(int w) {
    this->width = w + 1;
}

void Rectangle::set_height(int h) {
    this->height = h + 1;
}

int Rectangle::area() {
    return this->width * this->height;
}

int Rectangle::perimeter() {
    return (2 * this->width) + (2 * this->height);
}