#include <iostream>
using namespace std;
main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    for (int count = 0; count <= num; count = count + 2)
    {
        cout << count << ", ";
    }
}