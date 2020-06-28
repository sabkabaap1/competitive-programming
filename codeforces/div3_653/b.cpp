/* 
PROBLEM LINK:>	https://codeforces.com/contest/1374/problem/B	
#include "macro.h"
#include <iostream>
#include <bits/stdc++.h>
#include "../../macro.h"
*/
#include "../../macro.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t;	cin>>t;
	while(t--){
		int n, cnt=0;	cin>>n;
		bool nextMove = true;

		while(n>1){			
			if(n%6==0){
				n/=6;
			}
			else{
				if((2*n)%6==0){
					n*=2;
				}
				else{
					nextMove = false;
					break;
				}
			}
			cout<<endl;
			cnt++;
		}

		if(nextMove && n==1){
			cout<<cnt<<"\n";
		}
		else{
			cout<<-1<<"\n";
		}
	}

	return 0;
}

/*
7
1
2
3
12
12345
15116544
387420489
*/