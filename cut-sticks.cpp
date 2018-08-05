//Hacker Rank Problems.
//Solution to Cut the sticks problem.

//To run the program, please use the test data provided by hacker rank for this problem.
//https://www.hackerrank.com/challenges/cut-the-sticks


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int minLength(int a[],int N)
    {
    vector<int> nonZeroes;
    for(int i=0;i<N;i++)
        {
        if(a[i]>0)
            nonZeroes.push_back(a[i]);
    }
    vector<int>::iterator it=nonZeroes.begin();
    int min=*it;
    it++;
    for(it;it!=nonZeroes.end();it++)
        {
        if(*it<min)
            min=*it;
    }   
    return min;
}

int main() {
    int N;
    cin>>N;
    int a[N],sticks_cut=N;
    int min=0;
    for(int i=0;i<N;i++)
        cin>>a[i];
    while(sticks_cut>=1)
        {
        cout<<sticks_cut<<endl;
        sticks_cut=0;
        min=minLength(a,N);
        for(int i=0;i<N;i++)
            {
            a[i]=a[i]-min;
            if(a[i]>0)
                sticks_cut++;
        }
        } 
    return 0;

