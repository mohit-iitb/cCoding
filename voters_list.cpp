#include<bits/stdc++.h>
using namespace std;

int main(){
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	int count = 0;
	int size = n1+n2+n3;
	int arr[size];

	for(int i = 0; i < size; i++)
		cin >> arr[i];
	sort(arr,arr+size);

	int i = 0;
	vector<int> out;
	while(size-i){
		if(arr[i]==arr[i+1]){
			count ++;
			out.push_back(arr[i]);
			i++;
		}
		i++;
	}
	cout << count << endl;
	for(int i = 0; i < out.size(); i++)
		cout << out[i] << endl;

	return 0;
}