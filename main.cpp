#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

#define si(x)								scanf("%d",&x)
#define pi(x)	            	printf("%d\n",x)
#define ps(x)	            	printf("%s\n",x)
#define wltc(tc)            int tc; si(tc); while(tc--)

#define hello               ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define world               int n,m,k,res;

#define pa(x)               cout << #x << "=" << x << endl
#define pab(x, y)           cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pabc(x,y,z)         cout << #x << "=" << x << ",\t" << #y << "=" << y << ",\t" << #z << "=" << z << endl
#define pabcd(x,y,z,w)      cout << #x << "=" << x << ",\t" << #y << "=" << y << ",\t" << #z << "=" << z << ",\t" << #w << "=" << w << endl

#define pv(vec)          		cout<< #vec << "=" ; for(auto ele: vec)  cout<< ele <<" ";

int do_it(int,int,int);

int main()
{
	hello world
	wltc(t){	
		si(n); si(m); si(k);
		res = do_it(n,m,k);
		pi(res);
	}	
	return 0;
}

int do_it(int n, int m, int k){
	int res;
	// CASE 1 : m==0
	if(m==0){
		res=0;
	}
	// CASE 2: N/K>=M 
	else if(m<=n/k){
		res=m;
	}
	// CASE 3: n/k<m 
	else{
		int r1 = n/k;
		m-=r1;
		int r2 = ceil((m-n/k)/(k-1));
		if(r2<=1)	res = r1-1;
		else
		res = r1-r2;
	}
	return res;
}