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
    cout<<count;
    return 0;

}
int main(){
    int arr[] = {1,2,4,8,9};
    cout << check(arr, 2,3,5);
}