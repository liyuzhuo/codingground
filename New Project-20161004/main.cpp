#include <iostream>
#include "Coordinate.h"

using namespace std;

int main()
{
    Coordinate a;
    cout << "Default contstructor x value : " << a.x <<" y value : "<< a.y << endl;
    Coordinate b(2,3);
    cout << "Another contstructor x value : " << b.x <<" y value : "<< b.y << endl;
}

