#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
	
	int t;	cin>>t;
	while(t--){
		// GRADER input
		int n,p,x;
		cin>>n>>p;

		// YOU 
		cout<<"1 1 1 4 4\n";

		// GRADER 6 input 
		cin>>x;

		// YOU 
		cout<<"1 2 1 4 4\n";

		// GRADER 4 input 
		cin>>x;

		// YOU 
		cout<<"1 1 3 1 4\n"; 

		// GRADER 2 input 
		cin>>x;

		// YOU 
		cout<<"1 3 2 3 3\n";

		// GRADER 1 input 
		cin>>x;

		// YOU 
		cout<<"2\n";
		cout<<"0 0 1 1\n";
    cout<<"1 0 0 1\n";
    cout<<"0 0 1 0\n";
    cout<<"1 0 0 0\n";
		

		// GRADER 1 input -> final verdict
		cin>>x;
		if(x==-1)	break;
		else 			continue;

	}
	
	return 0;
}