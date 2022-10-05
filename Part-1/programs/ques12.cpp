// Main function of the C++ program.

#include<iostream>
using namespace std;
int * altReadQuizMarks(int n)
{
    int * marks, * temp, i;
    marks = new int[n];
    temp = new int[n];
    if ((marks == NULL) || (temp == NULL))
    {
        return NULL;
    }
    for (i = 0; i < n; i++)
    {
        cin >> marks[i];
        temp[i] = marks[i] + 10;

    }
// Some computation with temp
    if (temp != NULL)
    {
        delete[] temp;
    }

    return marks;
}

int main()
{
    int numStudents;
    int *qMarks;
    cout << "Given student count: " << endl;
    cin >> numStudents;
    cout << "Give marks of students"<< endl;
    qMarks = altReadQuizMarks(numStudents);
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
    // Print max and min marks from qMarks
cout << "Min: " << min << endl;
cout << "Max: "<< max << endl;
    if (qMarks != NULL)
    {
        delete[] qMarks;
    }
    return 0;
}


/*
Sample test case:

Given student count: 
5
Give marks of students
10
8
6
9
7
Min: 6
Max: 10

*/