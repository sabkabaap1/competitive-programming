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

    do{
			// YOU - AKSING QUERIES
			cout<<"1 1 1 4 4\n";
			cout<<"1 2 1 4 4\n";
			cout<<"1 1 3 1 4\n";
			cout<<"1 3 2 3 3\n";

			// GRADER INPUT - no of infected people
			cin>>x;
    }while(x!=-1);
		
		
		// YOU - AFTER AKSING QUERIES PRINTING MATRIX
		cout<<"2\n";
		cout<<"0 0 1 1\n";
    cout<<"1 0 0 1\n";
    cout<<"0 0 1 0\n";
    cout<<"1 0 0 0\n";
		

		// GRADER INPUT - final verdict
		cin>>x;
		if(x==-1)	break;
		else 		continue;

	}
	
	return 0;
}