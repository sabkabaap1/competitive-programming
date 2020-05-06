#include "my_macros.h"

int solve(int arr[], int n){
    int lmax=INT_MIN, rmax=INT_MIN, i=0, j=n-1, l=0,r=0, lno=1, rno=1;

    if(arr[i]==arr[j]){
        return arr[i]*n;
    }
    else{
        l=i; r=j;
        lmax = arr[l]; rmax=arr[r];
        lno=1;

        while(i<j){
            // fitting arr[i]
            DBxyz("before",i,j)

            if(i+1<j && abs(arr[l]-arr[i+1])<=abs(arr[i+1]-arr[r]))
            {
                if( (abs(arr[l]-arr[i+1])==abs(arr[i+1]-arr[r])) && abs(l-i)>abs(i-r) ){
                    rmax = max(rmax, arr[i-1]);
                    j--;
                    rno++;
                }
                else{
                    lmax = max(lmax, arr[i]);
                    i++;
                    lno++;
                }
            }
            else if(j-1>i){
                rmax = max(rmax, arr[i-1]);
                j--;
                rno++;
            }
            else break;

            if(i<j){
                if(j-1>i && abs(arr[l]-arr[j-1])>=abs(arr[j-1]-arr[r])){
                    if( (abs(arr[l]-arr[j-1])==abs(arr[j-1]-arr[r])) && abs(l-j)<abs(j-r) ){
                        lmax = max(lmax, arr[j-1]);
                        i++;
                        lno++;
                    }
                    else{
                        rmax = max(rmax, arr[j-1]);
                        j--;
                        rno++;
                    }
                }
                else if(j-1>i){
                    lmax = max(lmax, arr[j-1]);
                    i++;
                    lno++;
                }
                else break;
            }
            else    break;
            DBxyz("after",i,j)
        }

        DBxyz("final",lno,rno)
        DBxy(i,j)
        return lmax*(i+1)+rmax*(n-j);

    }
}

int main(){

    fastio;

    //int arr[]  ={3,1,4};
    //int arr[] = {5,3,2,4};
    //int arr[] = {5,3,5,2,1};
    //int arr[] =  {9,5,3,1};
    //int arr[] = {1,3,5,9};
    //int arr[] = {1,1,7,6,6,6};
    //int arr[] = {6,6,6,7,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    DBarr(arr,n)

    DBx(solve(arr, n))

    return 0;

}
