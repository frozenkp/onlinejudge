#include"iostream"

using namespace std;

void cp_pr(int n,int sum,int now,int num){
	if(now==n){
		cout<<num/17<<" "<<sum+num/17<<endl;
		return;
	}else cp_pr(n,sum+num/17,now+1,(num%17)*10);
}

int main(){
	int n;
	int times;
	cin>>times;
	for(;times>0;times--){
		cin>>n;
		cp_pr(n,0,0,1);
	}
	return 0;
}
