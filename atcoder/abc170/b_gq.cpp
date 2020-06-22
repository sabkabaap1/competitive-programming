// PROBLEM:> https://atcoder.jp/contests/abc170/tasks/abc170_b
#include <iostream>
//#include <bits/stdc++.h>
//#include "../../macro.h"
using namespace std;

/*
mm	:	tc(linear) sc(memo+stack)
			idea-
					generate all combinations
			
			TLE: without memorization
			WA: with memorization

ba	:	tc(x) sc(array)
			idea- 
					let x=3 (animal) y=8 (legs total)
					crans possible, c = [0,1,2,3]
					turtle possible, t = [3,2,1,0]
					c, t contain possible number of crane & turtle

			iterate over i=0 to x+1 
				check if 2*c[i]+4*t[i] == y, then return true

*/
int memo[101];
void recursion(int x, int y, int animal, int legs, int &ans){
	if(legs==y && animal==x){
		ans = 1;
		return;
	}
	if(legs>y || animal>x){
		return;
	}

	// memorization
	if(memo[legs]==-1){
		memo[legs]=1;
		recursion(x,y, animal+1, legs+2, ans);
		recursion(x,y,animal+1, legs+4, ans);
	}
}

int editorial(int x, int y){
	int c[x+1], t[x+1];
	for(int i=0; i<x+1; i++){
		c[i] = i;
		t[i] = x-i;
	}
	for(int i=0; i<x+1; i++){
		if(2*c[i]+4*t[i]==y)
			return 1;
	}
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
	int x, y;	cin>>x>>y;
	int ans =	editorial(x,y);	
	if(ans)	cout<<"Yes";
	else cout<<"No";
	return 0;
}