#include "../../tools/macros.h"

void solve(){
    int n,q,i,c,cnt;
    cin>>n>>q;
    string s;
    cin>>s;

    int td=26;
    vector<int> ascii_arr(td,0);

    i=0;
    ff(i,n)
        ascii_arr[int(s[i])-int('a')]+=1;

    vector<char> ascii_chr(td);

    /*

1
21 3
stayinghomesaveslisfe
1
3
0
*/

    i=0;
    ff(i,n)
        ascii_chr[i] = 'a'+i;
    /*
    i=0;
    ff(i,n)
        DBxy(ascii_chr[i], ascii_arr[i])
    */
    sort(ascii_arr.begin(), ascii_arr.end());

    //DBarr(ascii_arr, td)

    int sa[td]={0};
    sa[td-1] = ascii_arr[td-1];
    i=td-2;
    fr(i,td){
        if(ascii_arr[i]==0)
            break;
        sa[i]=sa[i+1]+ascii_arr[i];
    }

    vector<int>::iterator cursor;
    int ub,ln;

    //DBarr(sa, td)

    while(q--){
        cin>>c;
        cursor = upper_bound(ascii_arr.begin(), ascii_arr.end(), c);
        ub = (cursor-ascii_arr.begin());
        ln = 26-ub;
        if(ub==td)
            cout<<0;
        else
            cout<<sa[ub]-ln*c;
        nl;
    }

}

int main(){

    fastio;

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;

}
