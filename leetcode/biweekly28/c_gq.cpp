// PROBLEM LINK:> https://leetcode.com/contest/biweekly-contest-28/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum/
#include <iostream>
//#include <bits/stdc++.h>
//#include "../../macro.h"
using namespace std;

/*
mm: tc(n) sc(1)
		* idea - two pointer 
		* wa - due to give up :-)
ba: tc(n) sc(2*arr)
		* idea - dynamic programming 
		* store index of k sum ele on prefix and suffix 
		* then return min(prefix[i]+suffix[i]);

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
	
	int t=1;	//cin>>t;
	while(t--){

	}

	return 0;
}