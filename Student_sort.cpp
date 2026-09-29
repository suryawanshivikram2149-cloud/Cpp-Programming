#include <iostream>
using namespace std;
int main()
{
    int rollNo[5];
    int marks[5];
    cout << "Enter roll number and marks for 5 students:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        cout << "Roll Number: ";
        cin >> rollNo[i];

        cout << "Marks: ";
        cin >> marks[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (marks[i] < marks[j])
            {
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
                temp = rollNo[i];
                rollNo[i] = rollNo[j];
                rollNo[j] = temp;
            }
        }
    }

    // Display the final result
    cout << "\n----------------------------------\n";
    cout << "Students Ranked by Marks\n";
    cout << "----------------------------------\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Rank " << i + 1
             << "  |  Roll No: " << rollNo[i]
             << "  |  Marks: " << marks[i] << endl;
    }

    return 0;
}

