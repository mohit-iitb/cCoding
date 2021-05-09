#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int n;
    cin >> n;
    int arrivals[n];
    int departure[n];
    int input;
    
    for (int i = 0; i < n; ++i) {
        cin >> arrivals[i];
    }
    
	for (int i = 0; i < n; ++i) {
        cin >> departure[i];
    }
    sort(arrivals,arrivals+n);
    sort(departure,departure+n);

    int chair = 0, j = 0;
    for (int i = 0; i < n; i++) {
        if(arrivals[i] < departure[j])
            chair++;
        else j++;

    }
    cout<< chair;
    
}