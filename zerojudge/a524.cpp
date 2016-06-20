#include"iostream"
#include"algorithm"

using namespace std;

int main(){
	int out[8];
	int n;
	while(cin>>n){
		for(int a=0;a<n;a++)out[a]=n-a;
		do{
			for(int a=0;a<n;a++)cout<<out[a];
			cout<<endl;
		}while(prev_permutation(out,out+n));
	}
	return 0;
}
