#include <iostream>
using namespace std;
int digitsum(int number);
main()
{
    int number;
    cout << "enter the number";
    cin >> number;
    int output = digitsum(number);
    cout << output;
}
int digitsum(int number)
{
    int value;
    int sum = 0;
    while (number != 0)
    {
        value = number % 10;
        sum = value + sum;
        number = number/10;
    }
    return sum;
}