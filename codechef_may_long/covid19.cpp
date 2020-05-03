#include "../../tools/macros.h"

int solve(){
    int n,i,j,len=0, d=2;  cin>>n;
    int* arr = new int[n];
    i=0;
    fo(i,n)
        cin>>arr[i];

    int best = INT_MAX, worst = INT_MIN;

    i=0;
    while(i<n){
        //DBx_line(arr[i])
        if(i+1<n && arr[i]<arr[i+1] && arr[i+1]-arr[i]<=2){
            len=1;
            while(i+1<n && arr[i]<arr[i+1] && arr[i+1]-arr[i]<=2){
                //DBx_line(arr[i+1])
                len++; i++;
            }
        }

        else{
            len=1;
        }
        //DBx(len)
        best = min(len,best);
        worst = max(len,worst);
        //DBxy(best,worst)
        i+=1;
    }
    cout<<best<<" "<<worst;
    nl;
}
/*
1
9
1 2 3 7 8 9 10 15 16
best=2, worst=4

1
5
1 2 5 6 7
best=2, worst=3

*/
int main()
{
    fastio;

    ll t,i;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
