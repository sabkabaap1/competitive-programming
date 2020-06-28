/* 
PROBLEM LINK:>
#include "macro.h"
#include <iostream>
#include <bits/stdc++.h>
#include "../../macro.h"
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t;	cin>>t;
	while(t--){
		int n;	cin>>n; 
		int arr[n];

		for(int i=0; i<n; i++)
			cin>>arr[i];
		
		sort(arr, arr+n);
		
		int res[n] = {0};
		
		int i=0, k=0;
		while(i<n){
		    res[k++] = arr[i];
		    i+=2;
		}
		
        if(i-2==n-1)
            i = n-2;
        else 
            i = n-1;

		while(i>=0){
		    res[k++] = arr[i];
		    i-=2;
		}

		// checking for no case 
		i=0;
		int flag=1;
		while(i+1<n){
			if(res[i]==res[i+1]){
				flag=0;
				break;
			}
			i+=1;
		}
		

		if(flag){
			cout<<"YES\n";
			for(int i=0; i<n; i++)
				cout<<res[i]<<" ";
			cout<<"\n";
		}
		else{
			cout<<"NO\n";
		}
	}

	return 0;
}