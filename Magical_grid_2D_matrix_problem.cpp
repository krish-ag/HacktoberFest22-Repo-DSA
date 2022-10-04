#include<bits/stdc++.h>
using namespace std;

void magical_park(char arr[1000][1000],int row,int col,int threshold_strength,int initial_strength) {
//person can get out of the park
bool success = true;
for(int i = 0;i<row;i++) {
    for(int j = 0;j<col;j++) {
        char ch = arr[i][j];
        if(initial_strength < threshold_strength) {
            success = false;
            break;
        }
        if(ch == '*') {
            initial_strength+=5;
        }
        else if(ch == '.') {
            initial_strength-=2;
        }
        else {
            break;
        }
        //we will loose 1 point when we move right except for the last column
        if(j != col-1) {
            initial_strength-=1;
        }
    }
}
if(success) {
    cout<<"yes"<<endl;
    cout<<initial_strength<<endl;
}
else {
    cout<<"No"<<endl;
}
}

int main() {
char matrix_grid[1000][1000] = {
{'.','.','*','.'},
{'.','#','.','.'},
{'*','*','.','.'},
{'.','#','*','*'}
};

int row,cols,threshold_strength,initial_strength;
cout<<"enter row : ";
cin>>row;
cout<<"enter cols : ";
cin>>cols;
cout<<"enter threshold_strength :  ";
cin>>threshold_strength;
cout<<"enter initial strength : ";
cin>>initial_strength;

magical_park(matrix_grid,row,cols,threshold_strength,initial_strength);
    return 0;
}
