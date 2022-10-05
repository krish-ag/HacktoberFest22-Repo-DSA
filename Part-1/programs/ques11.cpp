// Main function of the C++ program.

#include<iostream>
using namespace std;
int * readQuizMarks(int n);
int main()
{
    int numStudents;
    int * qMarks;
    cout << "Given student count:"<< endl;
    cin >> numStudents;
    cout << "Give marks of students"<< endl;
    qMarks = readQuizMarks(numStudents);
    if (qMarks == NULL)
    {
        return -1;
    }
    int i, min = qMarks[0], max = qMarks[0];
    for (i = 1; i < numStudents; i++)
    {
        if (qMarks[i] < min)
        {
            min = qMarks[i];
        }
        if (qMarks[i] > max)
        {
            max = qMarks[i];
        }
    }
    // Print max and min marks
    cout << "Min: "<< min << endl;
    cout << "Max: "<< max << endl;
    return 0;
}

int * readQuizMarks(int n)
{
    int * marks, i;
    marks = new int[n];
    if (marks == NULL)
    {
        return NULL;
    }
    for (i = 0; i<n; i++)
    {
        cin >> marks[i];
    }
    return marks;
}


/*
Sample test case:

Given student count:
5
Give marks of students
7
8
9
10
8
Min: 7
Max: 10

*/