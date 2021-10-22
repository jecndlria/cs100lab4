#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect(1,1);
    cout << "Rectangle area: " << rect.area() << endl;
    return 0;
}
