#include <bits/stdc++.h>
using namespace std;
int main()
{
    int subjects;
    cout << "No. of Subjects: ";
    cin >> subjects;

    string course[10];
    for (int i = 0; i < subjects; i++)
    {
        cout << "Enter " << i + 1 << " subject name: ";
        cin >> course[i];
    }

    int credit[10];
    for (int i = 0; i < subjects; i++)
    {
        cout << "Enter credit of " << course[i] << " : ";
        cin >> credit[i];
    }

    int marks[10];
    for (int i = 0; i < subjects; i++)
    {
        cout << "Enter marks of " << course[i] << " out of 100 : ";
        cin >> marks[i];
    }

    int grade[10];
    for (int i = 0; i < subjects; i++)
    {
        if (marks[i] <= 100 && marks[i] >= 91)
        {
            grade[i] = 10;
        }

        else if (marks[i] <= 90 && marks[i] >= 81)
        {
            grade[i] = 9;
        }

        else if (marks[i] <= 80 && marks[i] >= 71)
        {
            grade[i] = 8;
        }

        else if (marks[i] <= 70 && marks[i] >= 61)
        {
            grade[i] = 7;
        }

        else if (marks[i] <= 60 && marks[i] >= 51)
        {
            grade[i] = 6;
        }

        else if (marks[i] <= 50 && marks[i] >= 41)
        {
            grade[i] = 5;
        }

        else if (marks[i] <= 40 && marks[i] >= 32)
        {
            grade[i] = 4;
        }

        else if (marks[i] < 32 && marks[i] >= 0)
        {
            grade[i] = 0;
        }
        else
        {
            cout << "ERROR: MARKS SHOULD NOT BE GREATER THAN 100 OR LESS THAN 0";
        }
    }

    int icg[10];
    for (int i = 0; i < subjects; i++)
    {
        icg[i] = credit[i] * grade[i];
    }

    int num = 0;
    int dum = 0;
    for (int i = 0; i < subjects; i++)
    {
        num = num + icg[i];
        dum = dum + credit[i];
    }

    float cgpa = num / dum;
    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}