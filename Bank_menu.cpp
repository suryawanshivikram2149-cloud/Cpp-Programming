#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> q;
    int choice, token = 101;

    do
    {
        cout << "\n1. Generate Token";
        cout << "\n2. Serve Customer";
        cout << "\n3. Display Tokens";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                q.push_back(token);
                cout << "Token generated: " << token << endl;
                token++;
                break;

            case 2:
                if (!q.empty())
                {
                    cout << "Serving customer with token: "
                         << q.front() << endl;
                    q.pop_front();
                }
                else
                {
                    cout << "No customers waiting.\n";
                }
                break;

            case 3:
                if (!q.empty())
                {
                    cout << "Waiting tokens: ";
                    for (int t : q)
                        cout << t << " ";
                    cout << endl;
                }
                else
                {
                    cout << "No customers waiting.\n";
                }
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}

