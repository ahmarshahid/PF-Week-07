#include <iostream>
using namespace std;
main()
{
    int number;
    cout << " guess my lucky number :" << endl;
    cin >> number;
    while (number != 10)
    {
        cout << " not my lucky number  ! try again" << endl;
        cout << "guess again ";
        cin >> number;
    }
    cout << "you have guessed";
}