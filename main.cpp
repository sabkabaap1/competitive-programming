#include <bits/stdc++.h>

using namespace std;

#define si(x)								scanf("%d",&x)
#define ss(x)								cin>>x;
#define pi(x)	            	printf("%d\n",x)
#define pul(x)	            printf("%lu\n",x)
#define ps(x)	            	printf("%s\n",x)
#define wltc(tc)            int tc; si(tc); while(tc--)
#define pb									push_back

#define hello               ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define world               int n,i; string a,b;

#define px(x)              	cout << #x << "=" << x << endl
#define pxy(x, y)          	cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pxyz(x,y,z)        	cout << #x << "=" << x << ",\t" << #y << "=" << y << ",\t" << #z << "=" << z << endl
#define pxyzw(x,y,z,w)     	cout << #x << "=" << x << ",\t" << #y << "=" << y << ",\t" << #z << "=" << z << ",\t" << #w << "=" << w << endl
#define pv(vec)          		cout<< #vec << "=" ; for(auto ele: vec)  cout<< ele <<" ";	cout<<"\n"

#define FOR(i,n)						for(i=0; i<n; i++)
#define ul                  unsigned long int
#define isKeyExist(hashtbl, key) (hashtbl.find(key)!=hashtbl.end())

int do_it(string a, string b, int n);  // string , window size

int main()
{
	hello world
	wltc(t){
		si(n);		ss(a);	ss(b);
		do_it(a,b,n);
	}
	return 0;
}

int do_it(string a, string b, int n){
	int i=0, flag=1;

	unordered_map<char, int> pp;

	FOR(i,n){
	    pp[a[i]] = i;
	}

	unordered_map<char, vector<int>> umap;

	// ITERATE OVER A & B ON SAME INDEX
	FOR(i,n){
		if(a[i]==b[i])	continue;
		// IF A[I] IS UNMATCH WITH TARGET B[I] THEN WE PUT A[I] INDEX IN SET
		umap[b[i]].pb(i);

		// NOW FINDING THE TARGET CHAR B[I] INDEX IN A[I] IF NOT PERSENT THEN RES -1
		if(isKeyExist(pp, b[i])){
			umap[b[i]].pb(pp[b[i]]);
		}
		else{
			// TARGET CHAR NOT FIND IN A
			flag=0;
			break;
		}
	}

	if(flag){
		for(auto cV: umap){
			px(cV.second.size());
			pv(cV.second);
		}
	}
	else
		px(-1);

	return 0;
}
