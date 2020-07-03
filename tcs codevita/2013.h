/*
https://www.programminggeek.in/2016/07/TCS-CodeVita-Previous-years-questions.html#.Xv1d4OfhXIV
*/
#include "../macro.h"


// LONGEST PROGRESSIVE SEQUENCE 
/*
[1,2,2,1,4,5] => 
o/p1: 1,2,2,4,5 {dp : longest incresing subsequence}
o/p2: 1,2,2 {two pointer tech : longest progressive sequence}
*/
class LONGEST_INCREASING_SUBSEQUENCE{
	/*
		0-1 knapsack type
		int arr[] = {50, 3, 10, 7, 40, 80};
		int n = 6;
		o/p = 4 {3, 10, 40, 80}
	*/
	public:
	int memo[100][100];
	int t[100][100];
	
	// similar to rod cutting problem
	// choice diagram / decision tree at(19:00) : https://www.youtube.com/watch?v=ekKYRYFEm9w
	int usingRecursion(int arr[],	int prev, int i, int n){
		if (i == n)
      return 0;

		int include = 0;
		if (arr[i] > prev) {
				include = 1 + usingRecursion(arr, arr[i], i + 1, n);
		}
		int exclude = usingRecursion(arr, prev, i + 1, n);
		return max(include, exclude);
	}

	int usingRecursionWithMemo(int arr[], int n){
		memset(memo, -1, sizeof(memo));
		return usingRecursionWithMemo(arr, 0, 0, n);
	}
	int usingRecursionWithMemo(int arr[], int prev, int i, int n){
		if (i == n)
      return 0;

		if(memo[i][prev]!=-1)
			return memo[i][prev];

		int include = 0;
		if (arr[i] > prev) {
				include = 1 + usingRecursion(arr, arr[i], i + 1, n);
		}
		int exclude = usingRecursion(arr, prev, i + 1, n);
		memo[i][prev] = max(include, exclude);
		return memo[i][prev];
	}
	int usingDp(int arr[], int n){
		t[0][0] = 0;
		for(int i=0,j=0; i<=n,j<=n; i++,j++){
			t[i][0] = 0;
			t[0][j] = 1;
		}
		t[0][0] = 0;

		// i-> prev; j->  currele
		for(int i=1; i<=n; i++){
			int prev = arr[i-1];
			for(int j=1; j<=n; j++){
				if(j>i){
					if(prev<arr[j-1])
						t[i][j] = 1+t[i-1][j-1];
					else
						t[i][j] = max(t[i-1][j], t[i][j-1]);
				}
				else 	
					t[i][j] = t[i-1][j];
			}
		}

		paMat(t, n+1, n+1);
		return t[n][n];
	}

};


// ZOMBIE WORLD : greedy minization
// ZUMBLE WITH NUMBER : implementation, n^2
// GAME OF PRIME : implementation

// Isotope Fusion : dp mcm 
int usingRecursion(int arr[], int i, int j){
		// base case 
			if(i>=j)
				return 0;

		// recursive case
			int mn = INT_MAX; 
			for(int k=i; k<=j-1; k++){
				cout<<"\n("<<i<<","<<k<<") ("<<k+1<<","<<j<<")";
				int temp = usingRecursion(arr, i, k) + usingRecursion(arr, k+1, j);
				if(temp<mn)
					mn = temp;
			}
		return mn;
	}

