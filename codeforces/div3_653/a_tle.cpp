/* 
PROBLEM LINK:>
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
		int x,y,n;	cin>>x>>y>>n;
		int k = n;
		while(k>=0){
			if(k%x==y){
				cout<<k<<"\n";
				break;
			}
			k--;
		}
	}

	return 0;
}

/*
7
7 5 12345
5 0 4
10 5 15
17 8 54321
499999993 9 1000000000
10 5 187
2 0 999999999
*/