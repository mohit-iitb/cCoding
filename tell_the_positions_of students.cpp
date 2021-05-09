// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     struct students{
//         string name;
//         int m1,m2,m3,total;
//     };
//     // students stud[n];
// 	students*studs=new students[n];  
//     vector<pair <int,int> > total;
//     int add;
//     for(int i = 0; i<n ; i++){
//         cin >> studs[i].name >> studs[i].m1 >> studs[i].m2 >> studs[i].m3;
//         add = studs[i].m1+studs[i].m2+studs[i].m3;
//         total.push_back(make_pair(add, i));
//     }
//     sort(total.begin(),total.end());
//     for (int i = total.size() - 1; i >= 0 ; i--) {
//         cout << studs[total[i].second].name <<" "<< total.size()-i << endl;
//     }
    
    
    
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
bool sort_pred(const pair<int,int> &a,
              const pair<int,int> &b)
{   if(a.first == b.first)
        return (a.second > b.second);
    else return a.first < b.first;
}

int main()
{
    int n;
    cin>>n;
    struct students{
        string name;
        int m1,m2,m3,total;
    };
    // students stud[n];
    students*studs=new students[n];  
    vector<pair <int,int> > total;
    int add;
    for(int i = 0; i<n ; i++){
        cin >> studs[i].name >> studs[i].m1 >> studs[i].m2 >> studs[i].m3;
        add = studs[i].m1+studs[i].m2+studs[i].m3;
        total.push_back(make_pair(add, i));
    }
    sort(total.begin(),total.end(),sort_pred);
    for (int i = total.size() - 1; i >= 0 ; i--) {
        cout << total.size()-i  <<" "<< studs[total[i].second].name<< endl;
    }
    
    
    
    return 0;
}

