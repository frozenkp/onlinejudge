#include"stdio.h"
#include"iostream"

using namespace std;

int main(){
	int ans[4],gus[4];
	int times;
	int a,b;
	bool check[4],scheck[4];
	while(scanf("%d %d %d %d",&ans[0],&ans[1],&ans[2],&ans[3])!=EOF){
		scanf("%d",&times);
		for(;times>0;times--){
			a=b=0;
			check[0]=check[1]=check[2]=check[3]=true;
			scheck[0]=scheck[1]=scheck[2]=scheck[3]=true;
			scanf("%d %d %d %d",&gus[0],&gus[1],&gus[2],&gus[3]);
			//compute a
			for(int c=0;c<4;c++){
				if(ans[c]==gus[c]){
					a++;
					check[c]=false;
					scheck[c]=false;
				}
			}
			//compute b
			for(int c=0;c<4;c++){
				if(check[c]){
					for(int d=0;d<4;d++){
						if(!scheck[d])continue;
						if(ans[d]==gus[c]){
							b++;
							scheck[d]=false;
							break;
						}
					}
				}
			}
			printf("%dA%dB\n",a,b);
		}
	}
	return 0;
}

