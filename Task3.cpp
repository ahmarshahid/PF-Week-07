#include <iostream>
using namespace std;
int totaldigits(int number);
main()
{
    int number;
    int digits;
    cout << "enter the number";
    cin >> number;
    int total = totaldigits(number);
    cout << total;

}
int totaldigits(int number)
{
    int tx = 0;
    int ty = 0;
    while (ty != 1)
    {
        number = number / 10;
        tx = tx + 1;
        if (number == 0)
        {
            ty = 1;
        }
    }
    return tx;
}