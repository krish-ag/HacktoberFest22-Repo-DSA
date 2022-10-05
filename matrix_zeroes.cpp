/*

This problem is where we have to set the column and row elements as zero whenever we see a zero element in the matrix and it has to be done in place.
The approach here is to iterate through the matrix and store the position of a zero element, and then for each element that was zero its row ad column elements are changed to zero.
This approach is O(mn) complexity.

*/

#include <bits/stdc++.h>

using namespace std;

void changeMatrix(vector<vector<int>> &matrix, int r, int c){
    for(int i=0;i<matrix[0].size();i++){
        matrix[r][i]=0;
    }
    for(int i=0;i<matrix.size();i++){
        matrix[i][c]=0;
    }
}
void setZeroes(vector<vector<int>>& matrix) {
    vector<pair<int, int>> zeroes;
    pair<int, int> temp;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                temp.first=i;
                temp.second=j;
                zeroes.push_back(temp);
            }
        }
    }
    for (auto p: zeroes){
        changeMatrix(matrix, p.first, p.second);
    }
}


int main(){
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    setZeroes(matrix);
    for (int i = 0; i < matrix.size();i++){
        for (int j = 0; j < matrix[0].size();j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }
        return 0;
}