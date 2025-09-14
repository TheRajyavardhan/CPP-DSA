#include <iostream>
using namespace std;

int main()
{
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;

    if (mark >= 90)
    {
        cout << "Grade A\n";
    }
    else if (mark >= 60 && mark < 90)
    {
        cout << "Grade B\n";
    }
    else if (mark >= 30 && mark < 60)
    {
        cout << "Grade C\n";
    }
    else
    {
        cout << "Grade D\n";
    }
    return 0;
}
