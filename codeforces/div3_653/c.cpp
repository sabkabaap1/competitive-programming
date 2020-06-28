/* 
PROBLEM LINK:>	https://codeforces.com/contest/1374/problem/C
*/
//#include "macro.h"
//#include <iostream>
//#include <bits/stdc++.h>
#include "../../macro.h"

using namespace std;

bool isValid(char top, char br){
	if(top=='(' && br==')')
		return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t;	cin>>t;
	while(t--){
		int n;	cin>>n;
		stack<char> st;

		string s;	cin>>s;

		for(auto br: s){
			if(st.empty()){
				st.push(br);
			}
			else{
				if(isValid(st.top(), br)){
					st.pop();
				}
				else{
					st.push(br);
				}
			}
		}

//pStk(st);
		int cnt=0;
		while(!st.empty()){
			cnt++;
			st.pop();
		}

		cout<<cnt<<"\n";

	}

	return 0;
}

/*
4
2
)(
4
()()
8
())()()(
10
)))((((())
*/