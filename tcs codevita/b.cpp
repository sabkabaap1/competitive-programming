/* NOT DONE 
PROBLEM LINK:>
#include <iostream>
#include <bits/stdc++.h>
*/
#include "../../macro.h"

using namespace std;

int prime[26] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,91,97};

bool checkPrime(int n){
	if(n<=1){
    return false;
  }
  else{
    for(int i=2; i<=sqrt(n); i++){
      if(n%i==0){
        return false;
      }
    }
  }
  return true;
}


void print_int_array(int *na, int len){
    for (int i = 0; i < len; i++) {
        if (i%10==0&&i!=0) printf("\n");
        printf("%d ", na[i]);
    }
    printf("\n");
}

//find the length of plist -1 (pn)
int find_pn(int n) {
    int pn = 0;
    for (; prime[pn]<n; pn++);
    return --pn;
}

//build a list of prime smaller than n from the prime list
vector<int> build_plist(int n, int pn){
    //allocate memory
		vector<int> plist(pn+1, 0);
    //build plist:
    for (; pn>=0; pn--) {
        plist[pn] = prime[pn];
    }
    return plist;
}

//fill in clist with plist
int cat_prime(int n) {
    int pn = find_pn(n);
    vector<int> plist = build_plist(n, pn);
    vector<int> clist ((pn+1)*pn/2, 0);
    int acc = 0, k;
    
    for(int i = pn; i >= 0; i--){
        plist[i]>10 ? (k=100) : (k=10);
        for (int j = pn; j >= 0; j--) {
            clist[acc+pn-j]=plist[i]+k*plist[j];
        }
        acc = acc + pn + 1;
    }
    
    int count = 0;
    for (int i = (int)pow(pn+1, 2); i>0; i--)
        if (checkPrime(clist[i])) count++;
    
		return count;
}


unsigned long int fib(int s, int l, int num) {
	unsigned long int res;

	unsigned long int x = 23, y = 3719, z = 0;
	for (int i = 0; i < num; i++) {
		res = x;
		z = x + y;
		x = y;
		y = z;
	}

	return res;
}

void filter(vector<string> &prime, int a, int b){
	int i=0, j;
	while(i<=100 && stoi(prime[i])<a)	i++;
	prime.erase(prime.begin(), prime.begin()+i);

	j=prime.size()-1;
	while(j>=0 && stoi(prime[j])>b)	j--;
	prime.erase(prime.begin()+j+1, prime.end());
}

vector<string> findPrime(){
	int n=100;
	vector<string> res;
	
	vector<bool> is_prime(n+1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i * i <= n; i++) {
		if (is_prime[i]) {
				for (int j = i * i; j <= n; j += i)
						is_prime[j] = false;
		}
	}

	for(int i=0; i<n+1; i++){
		if(is_prime[i]==true){
			res.pb(to_string(i));
		}
	}
	return res;
}


int main(){
	hello

	int a,b;	cin>>a>>b;
	// step1:
	vector<string> prime = findPrime();
	filter(prime,a,b);
	pv(prime);

	// step2: making combination 
		//finding smallest 
		int small=0, i=0;
		while(i+1<prime.size()){

			int k = i+1;
			while(k<prime.size()){
				int n = stoi(prime[i]+prime[k]);
				//pxyz(prime[i], prime[k], n);
				if(checkPrime(n)){
					small = n;
					break;
				}
				k--;	
			}
			if(small!=0)
				break;			
			i++;
		}

		//finding largest 
		int large=0, j=prime.size()-1;
		while(j-1>=0){			
			int k = j-1;
			while(k>=0){
				int n = stoi(prime[j]+prime[k]);
				//pxyz(prime[j], prime[k], n);
				if(checkPrime(n)){
					large = n;
					break;
				}
				k--;	
			}
			if(large!=0)
				break;			
			j--;
		}

	int z = cat_prime(prime.size());
	px(z);
	px(fib(small, large, z));

	return 0;
}