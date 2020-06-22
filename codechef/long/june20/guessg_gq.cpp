// PROBLEM LINK:> https://www.codechef.com/JUNE20B/problems/GUESSG
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
	
	int n, res1, res2, l,h, x=5, y;
	char alice=' ';
	bool find=false;

	// INPUT N {1<=x<=N}
	cin>>n;


    // checking for even queries 
    l = 2; 
		h = (n%2==0)? n: n-1;
		
    while(l<h){
      y = (l+h)/2;

			cout<<y<<"\n";
				fflush(stdout);
				cin>>alice;

			if(alice=='E')
				break;
			else if(alice=='G')		//if(x>y)
				l=y+1;
			else
				h=y-1;
    }
    
		
    // checking for odd queries
    l=1; 
		h= (n%2==0) ? n-1: n; 

		while(l<h && alice!='E'){
			y = (l+h)/2;

			cout<<y<<"\n";
				fflush(stdout);
				cin>>alice;

			if(alice=='E')
				break;
			else if(alice=='G')		//if(x>y)
				l=y+1;
			else
				h=y-1;
		}

	return 0;
}