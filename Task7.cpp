#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int output);
main()
{
    int number1;
    int number2;
    cout << "Enter the number1 : ";
    cin >> number1;
    cout << "Enter the number2 : ";
    cin >> number2;
    int output;
    output = calculateGCD(number1, number2);
    cout << "The HCF is : " << output <<endl;
    int lcm;
    lcm = calculateLCM(number1, number2, output);
    cout << "The LCM is :" << lcm;
}
int calculateGCD(int number1, int number2)
{
    int gcd;
    for (int counter = 1; counter <= number1; counter++)
    {
        if (number1 % counter == 0 && number2 % counter == 0)
        {
            gcd = counter;
        }
    }
    return gcd;
}
int calculateLCM(int number1, int number2, int output)
{
    int result;
    result = (number1 * number2) / output;
    return result;
}
