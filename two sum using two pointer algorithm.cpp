#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++) cin>>arr[i];
	int sum;
	cout<<"Enter sum : ";
	cin>>sum;
	int i= 0;
	int j = n-1;
	sort(arr,arr+n);
	while(i<j){
		if(arr[i]+arr[j]==sum){
			cout<<arr[i]<<" "<<arr[j]<<endl;
			i++;
			j--;
		}
		else if(arr[i]+arr[j]<sum) i++;
		else j--;
	}
	
}

// using vectors
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	vector< vector <int> > v;
//	int arr[n];
//	for(int i = 0; i<n; i++) cin>>arr[i];
//	int sum;
//	cout<<"Enter sum : ";
//	cin>>sum;
//	int i= 0;
//	int j = n-1;
//	sort(arr,arr+n);
//	while(i<j){
//		if(arr[i]+arr[j]==sum){
//			vector<int> temp;
//			temp.push_back(arr[i]);
//			temp.push_back(arr[j]);
//			v.push_back(temp);
//			i++;
//			j--;
//		}
//		else if(arr[i]+arr[j]<sum) i++;
//		else j--;
//	}
//	for(auto i:v){
//		for(auto j:i){
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
//	
//}
