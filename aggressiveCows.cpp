#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int d,int C,int N){
    int j = 0,count = 0;
    count++;
    for(int i = 1;i<N;i++){
        if(arr[i]-arr[j]>=d){
            count++;
            j = i;
            if(count == C)
                return 1;
        }
    }

    return 0;

}
int main()
{   int t;
    cin >> t;
    int N,C;
    int dstart,dend,middle;
    while(t--){
        cin >> N >> C;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin >> arr[i];
        sort(arr,arr+N);
        dstart = 0;                  
        dend = N-1;             
        while(dstart < dend-1){
            if((dstart+dend) %2 == 0)
                middle = ((dstart+dend)/2);
            else middle = ((dstart+dend)/2)+1;
            // cout<< dstart<<dend;
            if(check(arr,middle,C,N)==1){
                dstart = middle;
    
            }
            else {
                dend = middle ;
            }
        }

    cout << dstart;
    }

}