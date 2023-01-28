#include <iostream>
using namespace std;
void printfibonachii(int number);

main()
{
    int number = 0;
    cout << "Enter the number :";
    cin >> number;
    printfibonachii(number);
}
void printfibonachii(int number)
{
    int sum;
    int num1 = 0;
    int num2 = 1;
    cout << num1 << ", " << num2 << ", ";
    for (int x = 1; x <= number - 2; x++)
    {
        sum = num1 + num2;
        cout << sum << ", ";
        num1 = num2;
        num2 = sum;
    }
}