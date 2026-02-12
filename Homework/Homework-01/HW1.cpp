#include <iostream>
using namespace std;

//int to binary conversion
void convertInt(int x)
{
    if(x < 0)
    {
        cout << "-";
        x = x * -1;
    }
    if (x == 0)
    {
        cout << "0";
        return;
    }
    int powerOfTwo = 1;

    while(powerOfTwo <= x)
    {
        powerOfTwo = powerOfTwo * 2;
    }
    powerOfTwo = powerOfTwo / 2;

    while(powerOfTwo > 0)
    {
        if(x >= powerOfTwo)
        {
            cout << "1";
            x = x - powerOfTwo;
        }
        else
        {
            cout << "0";
        }
        powerOfTwo = powerOfTwo / 2;
    }
}

//float to binary conversion
void convertFloat(float x)
{
    if(x < 0)
    {
        cout << "-";
        x = x * -1;
    }
    int wholeNum = (int)x;         
    float decimal = x - wholeNum;
    convertInt(wholeNum);
    cout << ".";
    int count = 0;
    
    //8 decimal places counter
    while(count < 8)
    {
        decimal = decimal * 2;
        if(decimal >= 1)
        {
            cout << "1";
            decimal = decimal - 1;
        }
        else
        {
            cout << "0";
        }
        count = count + 1;
    }
}

int main()
{
    int choice;
    
    cout << "Choose what to convert:" << endl;
    cout << "1 - Integer" << endl;
    cout << "2 - Character" << endl;
    cout << "3 - Float" << endl;

    cin >> choice;

    if(choice == 1)
    {
        int number;
        cout << "Enter Integer: ";
        cin >> number;

        cout << "Binary: ";
        convertInt(number);
    }
    else if (choice == 2)
    {
        char letter;
        cout << "Enter charcter: ";
        cin >> letter;

        cout << "Binary: ";
        convertInt(letter);
    }
    else if (choice == 3)
    {
        float number;
        cout << "Enter Float: ";
        cin >> number;

        cout << "Binary: ";
        convertFloat(number);
    }
    else
    {
        cout << "Invalid :P";
    }
    
}