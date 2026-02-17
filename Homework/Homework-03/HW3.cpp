#include <iostream>
using namespace std;

int main()
{
    constexpr double Pi {3.14};
    int x;

    cout << "1. Calculate the area of a square" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a circle" << endl;
    cout << "4. Caluclate the area of a cyclinder" << endl;
    cout << "Please enter your choice (1-4): " << endl;
    cin >> x;

    if(x == 1) //square area
    {
        double l; //length

        cout << "Enter side: ";
        cin >> l;

        double squareArea {l*l};
        cout << "Total area: " << squareArea << endl;
    }

    if(x == 2) //rectangle area
    {
        double l; //length
        double w; //width

        cout << "Enter length: ";
        cin >> l;
        cout << endl;

        cout << "Enter width: ";
        cin >> w;
        cout << endl;

        double area {l * w};
        cout << "Total Area: " << area << endl;
    }

    if(x == 3) //circle area
    {
        double r; //radius

        cout << "Enter radius: ";
        cin >> r;
        cout << endl;

        double area {Pi * (r * r)};

        cout << "Total area: " << area << endl;
    }

    if(x == 4) //cylinder area
    {
        double r; //radius
        double h; //height

        cout << "Enter Radius: ";
        cin >> r;
        cout << endl;

        cout << "Enter Height: ";
        cin >> h;
        cout << endl;

        double area {(2*Pi*r*h) + (2*Pi*(r*r))};
        cout << "Total area: " << area << endl;
    }

    else
    {
        cout << "Invalid Choice" << endl;
    }
    return 0;
}