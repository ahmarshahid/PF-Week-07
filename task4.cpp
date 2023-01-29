#include <iostream>
using namespace std;
int frequency(int num1, int digit);
main()
{
    int num1;
    int digit;
    cout << "Enter a number :" << endl;
    cin >> num1;
    cout << "Enter the digit :";
    cin >> digit;
    int output = frequency(num1, digit);
    cout << output;
}

int frequency(int num1, int digit)
{
    int rightMostDigit;
    int numberOfDigits =0;
    while (num1 != 0)
    {
        rightMostDigit = num1 % 10;
        if (digit == rightMostDigit)
        {
            numberOfDigits++;
        }
        num1 = num1 / 10;
    }
    return numberOfDigits;
}