#include <iostream>
using namespace std;

int main()
{
    int rollNo[5];


    cout << "Enter roll numbers of 5 students:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter roll number " << i + 1 << ": ";
        cin >> rollNo[i];
    }


    cout << "\nRoll numbers entered by the user:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << rollNo[i] << endl;
    }

    return 0;
}

