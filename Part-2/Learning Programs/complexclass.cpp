#include<iostream>

using namespace std;

class complex
{
    int a,b;
    public:
        complex(int a,int b);
};

complex::complex(int a,int b)
{
    cout<<a<<"+ i"<<b;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    complex obj(n1,n2);

    return 0;
}