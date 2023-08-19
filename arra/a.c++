#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

 int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int t = (n*(n+1))/2;
        int sum =0;
        for(int i=0;i<n-1;i++){sum+=array[i];}
        return t-sum;
    }
int main()
{
    vector<int > s{2 ,3 ,4, 1 ,6 ,7};
cout<<missingNumber(s,7);

}