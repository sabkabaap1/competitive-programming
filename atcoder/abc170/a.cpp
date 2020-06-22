#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
	int i=0, n;
	while(i<5){
		cin>>n; if(n==0){
			cout<<i+1<<"\n";
			break;
		}
		i+=1;
	}
	return 0;
}