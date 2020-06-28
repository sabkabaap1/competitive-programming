/* 
PROBLEM LINK:> https://www.codechef.com/LTIME85B/problems/MAXAND18
editorial link:> https://www.youtube.com/watch?v=WHR2-a0iAQw

#include "macro.h"
#include <iostream>
#include <bits/stdc++.h>
#include "../../macro.h"
*/
#include "../../macro.h"
using namespace std;

bool checkIthBit(int num,int i)
{
    bool bit = num & (1<<i);
    return bit;
}

int findTotalBit(int num){
    //num req i bit if 2^(i-1) ≤ num ≤ 2^i – 1
    if(num==0)  return 0;
    int i = (int)log2(num)+1;
    return i;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t;	cin>>t;

	while(t--){
		int n,k;	cin>>n>>k;
		vector<int> arr(n,0);

		int mx = INT_MIN;

		for(int i=0; i<n; i++){
			cin>>arr[i];
			mx = max(mx, arr[i]);
		}

		int z = findTotalBit(mx);

		vector<int> cnt(32,0);

		for(int i=0; i<32; i++){
			for(int j=0; j<n; j++){				
				if(arr[j]){
					if(checkIthBit(arr[j], i)){						
						cnt[i]+=1;
					}
				}				
			}
		}
		
		//pv(cnt);

		bitset<32> bit;

		int p = 0;
		for(int i=z; i>=0; i--){
			if(k<=0)
				break;
			if(cnt[i]!=0 && k>0){
				//cout<<i<<" "<<cnt[i]<<" ";
				bit.set(i);
				k--;
			}
		}
		//cout<<"\n";
        
		//cout<<bit<<"\n";
		cout<<bit.to_ulong()<<endl;

		/*
		1
		4 1
		3 4 5 1
		*/

	}

	return 0;
}