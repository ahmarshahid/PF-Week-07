#include <iostream>
using namespace std;
void printpercentage(int number);
main()
{
    int number;
    cout << "Enter a number :";
    cin >> number;
    printpercentage(number);
}

void printpercentage(int number)
{
    int num1;
    float range2 = 0;
    float range1 = 0;
    float range3 = 0;
    float range4 = 0;
    float range5 = 0;

    for (int count = 1; count <= number; count++)
    {
        cout << "Enter a number";
        cin >> num1;

        if (num1 >= 1 && num1 < 200)
        {
            range1 = range1 + 1;
        }
        else if (num1 >= 200 && num1 < 400)
        {
            range2 = range2 + 1;
        }
        else if (num1 >= 400 && num1 < 600)
        {
            range3 = range3 + 1;
        }
        else if (num1 >= 600 && num1 < 800)
        {
            range4 = range4 + 1;
         }
        else if (num1 >= 800 && num1 < 1000)
        {
            range5 = range5 + 1;
        }
    }
    float percentage1 = (range1/number)*100;
    cout << percentage1 << '%' << endl;
    float percentage2 = (range2/number)*100;
    cout << percentage2 << '%' << endl;
    float percentage3 = (range3/number)*100;
    cout << percentage3 << '%' << endl;
    float percentage4 = (range4/number)*100;
    cout << percentage4 << '%' << endl;
    float percentage5 = (range5/number)*100;
    cout << percentage5 << '%' << endl;
}