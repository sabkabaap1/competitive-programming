#include "../my_macros.h"

void getSetBitPos(vector<int> &set_bit_pos, ll temp){
    ll i=0;
        while(temp){
            if(temp & (1))
                set_bit_pos.pb(i);
            i++;
            temp>>=1;
        }
}

int main(){
    ll x, y, l, r, res, mx, val, temp, i;

    whltc(t){
        mx = INT_MIN;
        sl(x); sl(y); sl(l); sl(r);
        DBxyzw(x,y,l,r)

        vector<int> set_bit_pos;

        //checking setbit pos in x
        getSetBitPos(set_bit_pos, x);
        //checking setbit pos in y
        getSetBitPos(set_bit_pos, y);

        sort(set_bit_pos.begin(), set_bit_pos.end(), greater<int>);

        DBvec(set_bit_pos)


        while(r>=l){
            val = (x&r)*(y&r);
            if(val>mx){
                mx = val;
                res = r;
            }
            r--;
        }
        pl(res);
    }

    return 0;
}
