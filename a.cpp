#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
//ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	cout<<"Enter the size of array:" <<"\n";
	int n;
	cin>>n;
	cout<<"Enter elements into array:" <<"\n";
	vector<int> A(n);
	for(auto &x:A)cin>>x;
	sort(A.begin(),A.end()); //sorting in ascending order
	cout<<"Sorted array:" <<"\n";
	for(auto x:A)cout<<x <<" ";
	cout<<"\n";
}
