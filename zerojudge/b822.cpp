#include"iostream"

using namespace std;

int main(){
	int n,in;
	int max=0,min=0;
	cin>>n;
	for(int a=0;a<n;a++){
		cin>>in;
		if(in==1)min=a;
		else if(in==n)max=a;

		if(max!=0&&min!=0)break;
	}
	if(min<max)cout<<(n-1-min>max?n-1-min:max)<<endl;
	else cout<<(n-1-max>min?n-1-max:min)<<endl;

	return 0;
}
