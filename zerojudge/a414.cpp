#include"cstdio"

using namespace std;

int main(){
	int in;
	while(scanf("%d",&in)!=EOF){
		if(in==0)break;
		for(int a=0;;a++){
			if(in&1)in=in>>1;
			else{
				printf("%d\n",a);
				break;
			}
		}
	}
	return 0;
}
