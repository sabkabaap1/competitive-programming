/* 
PROBLEM LINK:>
*/
//#include "macro.h"
//#include <iostream>
//#include <bits/stdc++.h>
#include "../../../macro.h"
using namespace std;

static bool comp(pair<int, int> a, pair<int, int> b){
	return a.first<b.first;
}

int main(){
	//cp();

	int t=1;
	cin>>t;
	while(t--){
		int i, temp;
		string res;

		// code here
		int n, s;	si(n);	si(s);
		s=100-s;
		vector<pair<int, int>> data;

		i=0;
		ff(i,n){
			si(temp);	// price
			data.pb(mp(temp, -1));
		}

		i=0;
		ff(i,n){
			si(temp);	// type
			data[i].second = temp;
		}

		// base case 
		if(s==0){
			res = "no";
		}

		else{
			// apply greedy 
			sort(vall(data), comp);
			
			// selection 
			bool take_0 = false, take_1 = false;

			i=0;
			while((take_0==false || take_1==false) && i<n  && s>0){
			    //pxy(data[i].first, s);
				if(!take_0 && data[i].first<=s && data[i].second==0){
					take_0 = true;
					s -= data[i].first;
				}
				if(!take_1 && data[i].first<=s && data[i].second==1){
					take_1 = true;
					s -= data[i].first;
				}
				i+=1;
			}
//cout<<"*";
			if(take_1 && take_0){
				res = "yes";
			}
			else{
				res = "no";
			}
		}

		cout<<res<<"\n";

	}

	return 0;
}