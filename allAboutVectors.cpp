#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){

    //normal initilising
    vector<int> hehe;
    
    //initialising vector with 5 size and 1 at all elements
    vector<int> v(5, 1);
    
    //adding element at last of vector
    v.push_back(5);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }

    cout<<endl;
    //copying v into a
    vector<int> a(v);

    //using iterator to get a's values
    vector<int>::iterator ok;
    for(ok = a.begin(); ok != a.end(); ok++){
        cout<< *ok;
    }
    cout<<endl;

    //removes last element
    a.pop_back();
    
    //quickest way to iterate the vector
    for(auto element:a){
        cout<<element;
    }
    cout<<endl;

    //swaps elements of two vectors into each other
    swap(v, a);
    for(auto element:v){
        cout<<element;
    }
    cout<<endl;
    for(auto element:a){
        cout<<element;
    }
    cout<<endl<<"fresh below"<<endl;

    a.push_back(7);
    a.push_back(3);
    a.push_back(9);

    //sorting in vectors
        //ascending:
    sort(a.begin(), a.end());
    for(auto element:a){
        cout<<element;
    }
    cout<<endl;

        //descending
    sort(a.begin(), a.end(), greater<int>());
    for(auto element:a){
        cout<<element;
    }
    cout<<endl;


    // array of vectors: (number of rows fixed but collumn not)
    vector<int> heheee[10];

    // vectors of vectors: (both number of rows and collumn variable(both dynamic))
    vector<vector<int>> vecturrr;

        // this is how to use and get values in this vecturrr
    vector <int> temp;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        temp.push_back(x);
    }
    vecturrr.push_back(temp);
    
    // short better method for below:
    // vector<int>::iterator ok;
    // for(ok = a.begin(); ok != a.end(); ok++){
    //     cout<< *ok;
    // }
    // cout<<endl;

    for (auto ok = a.begin(); ok != a.end(); ok++){
        cout<< *ok;
    }
    cout<<endl;

    

    return 0;
}
