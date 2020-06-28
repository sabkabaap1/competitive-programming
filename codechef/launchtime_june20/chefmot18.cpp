/* 
PROBLEM LINK:>
#include "macro.h"
#include <iostream>
#include <bits/stdc++.h>
#include "../../macro.h"
*/
#include "../../macro.h"
using namespace std;

#define si(x)	            scanf("%d",&x)

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t,s,n,cnt;

	cin>>t;
	while(t--){
		cnt = 0;
		cin>>s>>n;

		if(s%2!=0){
			cnt+=1;
			s--;
		}
		
        
        	while(s!=0 && n>=2){
        		cnt += s/n;
        		s = s%n;
						
        		//n -= 2;  here i'm making mistake which raise tle 
						n = s;		
						// learning is s mod even gives even so instead of 
						//running brute force we directly jump to lower even
        	}
    

		cout<<cnt<<"\n";
		
	}

	return 0;
}