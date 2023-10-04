#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v;
	int x;
	cin>>x;
	for(int i=0;i<x;i++){
	
       int y;
       cin>>y;
       v.push_back(y);
       
	}
	cout<<v.size()<<endl;
	for(int i=0;i<x;i++){
		
		cout<<v[i]<<" ";
		
	}
	cout<<endl;
	v.pop_back();
	cout<<v.size()<<endl;
}
