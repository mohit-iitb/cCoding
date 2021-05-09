#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int n,m;
	cin>>n>>m;
	ll arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	queue<ll> q;
	int count_m = 0;
	sort(arr,arr+n);
	cout<<arr[n-1];
	int pointer = n-1;
	ll display;
	// cout<<arr[pointer]/2<<endl;
	display = arr[pointer/2];
	q.push(arr[pointer]/2);
	pointer--;
	int curr_m; int i = 1; 
	if(i == curr_m)
			cout<<display<<endl;
	while(m--){
		i++;
		cin >> curr_m;
		if(q.empty() || pointer == -1)
			return 0;
		else if(arr[pointer]>q.front()){
			// cout<<arr[pointer]/2<<endl;
			display = arr[pointer/2];
			q.push(arr[pointer]/2);
			pointer--;
		}
		else{
			// cout<<q.front()/2<<endl;
			display = q.front()/2;
			q.push(q.front()/2);
			q.pop();


		}
		if(i == curr_m)
			cout<<display<<endl;


	}
	return 0;
}