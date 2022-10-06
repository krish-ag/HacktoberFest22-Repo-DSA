#include<bits/stdc++.h>
 using namespace std;


// T.C -> 0(N^2)
 // int main() {
 //     // int arr[] = {1,2,1,3,5,1,2,4,2,2,2,2,2};
 //     int arr[] = {1,2,3,4,5,6,7};
 //     int n = sizeof(arr) / sizeof(int);
 //     // int count = 1;
 //     if(n == 0) {
 //         return n;
 //     }
 //     int max_count = INT_MIN;
 //     for(int i = 0;i<n;i++) {
 //         int freq = arr[i];
 //         int count = 1;
 //         for(int j = i+1;j<n;j++) {
 //             if(freq == arr[j]) {
 //                 count++;
 //             }
 //         }
 //     max_count = max(max_count,count);
 //     }
 //     cout<<max_count<<endl;
 //     return 0;
 // }


// T.C -> 0(N)
 int main() {
 unordered_map<int,int>unorder_map;
 // vector<int>nums ={1,2,1,3,1,4,1,2,2,3,4,3,3,1};
 vector<int>nums ={1,1,1,2,2,2,2};
 for(auto it:nums) {
     unorder_map[it]++;
 }
 int count = 1;
 int max_count = 1;
 for(auto it:unorder_map) {
     if(it.second > 1) {
         count++;
     } 
     max_count = max(max_count,count);
 }
 cout<<max_count<<endl;
     return 0;
 }
