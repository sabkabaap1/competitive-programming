#include <iostream>
using namespace std;

int checkResponse(int res){
	if(res=='E')               // X==Y
		return 0;
	else if(res=='L')          // X<Y
		return -1;
	else 
		return 1;                // X>Y 
}

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
	
	int n, y, x, res1, res2, mid,start=1,end;
	bool find=false;

	// INPUT N {1<=x<=N}
	cin>>n;
	

		// questioning all even number	
		start=1; end=n;
		while(start<end && find==false){
			mid = (start+end)/2;
			mid = mid%2==0?mid:mid+1;            // hemant..! doubt1: should i make mid even because we are aksing question including even guess

			// GUESS
			printf("%d\n", mid);
			fflush(stdout);
			// ALICE RESPONSE
			cin>>res1;

			// GUESS
			printf("%d\n", mid);                // asking same question again to check wheather alice speaking lie or not
			fflush(stdout);
			// ALICE RESPONSE
			cin>>res2;

			if(res1=='E' || res2=='E'){
				find=true;
			}
			else if(res1=='L' && res2=='L'){
				// x present in lower search space
				end = mid-1;
			}
			else if(res1=='G' && res2=='G'){
				// x present in heigher search space 
				start = mid+1;
			}
			else{																// doubt2: what if she is lie then what we do
				// alice speaking lie 
				continue; 
			}
			
		}


		if(find==false){
			// questioning all odd number	
			start=1; end=n;
			while(start<end && find==false){
				mid = (start+end)/2;
				mid = mid%2==0?mid:mid+1;            // hemant..! here i have doubt, should i make mid odd because we are aksing question including odd guess

				// GUESS
				printf("%d\n", mid);
				fflush(stdout);
				// ALICE RESPONSE
				cin>>res1;

				// GUESS
				printf("%d\n", mid);              
				fflush(stdout);
				// ALICE RESPONSE
				cin>>res2;

				if(res1=='E' || res2=='E'){
					find=true;
				}
				else if(res1=='L' && res2=='L'){
					// x present in lower search space
					end = mid-1;
				}
				else if(res1=='G' && res2=='G'){
					// x present in heigher search space 
					start = mid+1;
				}
				else{
					// alice speaking lie 
					continue; 
				}
				
			}
		}

	return 0;
}