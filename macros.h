#include <bits/stdc++.h>
using namespace std;

//---------------------- common declaration macro ---------------
#define ll long long
#define nl cout<<"\n"
#define np nullptr
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL)

#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)

#define decMatrix(r,c) int **mat;   mat = new int *[r];   for(int i = 0; i <r; i++){ mat[i] = new int[c]; int j=0; fo(j,c) mat[i][j]=0; }

//---------------------- loop shortening macro ------------------
#define ff(i,n) for(i;i<n;i++)
#define fr(i,n) for(i; i>=0;i--)
#define ffr(i,j,n) for(i,j; i<n, j>=0; i++,j--)

//--------------- debugging macro --------------------------
#define DBmsg(x) cout<<">"<< x ;
#define DBerror(x) cout<<"!error"<< "=" << x << endl;
#define DBx(x) cout << #x << "=" << x << endl;
#define DBx_line(x) cout<< x <<" ";
#define DBxy(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define DBxyz(x,y,z)   cout << #x << "=" << x << ",\t" << #y << "=" << y << ",\t" << #z << "=" << z << endl;
#define DBxyzw(x,y,z,w)     cout << #x << "=" << x << ",\t" << #y << "=" << y << ",\t" << #z << "=" << z << ",\t" << #w << "=" << w << endl;

#define DBarr(arr,n) cout<< #arr << "=" ; for(int i=0;i<n;i++) cout<< arr[i] <<" "; cout<< endl;
#define DBarr_rev(arr, n) cout<< #arr << "=" ; for(int i=n-1;i>=0;i--) cout<< arr[i] <<" "; cout<< endl;
#define DBmat(mat,r,c) cout<< #mat << "=" << endl;  for(int i=0; i<r; i++){ for(int j=0; j<c;j++)   cout<<mat[i][j]<<" ";   cout<< endl; } cout<<endl;

#define DBvec(vec) cout<< #vec << "=" ; for(auto ele: vec)  cout<< ele <<" ";  cout<< endl;
#define DBhashmp(map) cout<< #map << "=" ;  for(auto pair: map) cout<< pair.first<< " " << pair.second << "\n";  cout<< endl;

#define DBsep1() cout<<"\n_________________________"<<" \n";
#define DBsep2() cout<<"-------------------------"<<" \n";

//------------------ math macro --------------------------
#define MIN(x, y) (((x) > (y)) ? (y) : (x))
#define ABS(x) ((x) >= 0 ? (x) : (-(x)))
const int mod = 1000000007;

//----------------------- boolean macro -------------------------
#define isKeyExist(hashtbl, key) (hashtbl.find(key)!=hashtbl.end())
#define stlUb(vec, ele) vector<int>::iterator ub;
