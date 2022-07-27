#include<bits/stdc++.h>
using namespace std;
//XOR of same element gives zero as output for example 2^2 = 0, 3^3=0.......
// if array contains duplicates those will be canceled and unique element will be returned
// for example [1,1,2,2,3,3,4] in this array 1^1 = 0 2^2 = 0 3^3 = 0 and ther left only one element that is 4 therefore answer is 4
//             [ -0- -0- -0- 4]
//			   [   -0-   -4-  ] : 0^0 = 0 and 0^any_number  = any_number;
//             [      -4-     ]
int uniqueElement(int a[],int n){
	int ans = 0;
	for(int i = 0;i<n;i++){
		ans = ans^a[i];
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++) cin>>arr[i];
	int unique = uniqueElement(arr,n);
	cout<<unique<<endl;
}
