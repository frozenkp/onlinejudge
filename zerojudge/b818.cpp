#include"cstdio"
#include"list"

using namespace std;

int main(){
	int o=0,x=0;
	int *now;
	int n,tmp;
	list<int> k;
	scanf("%d",&n);
	for(;n>0;n--){
		scanf("%d",&tmp);
		k.push_back(tmp);
	}
	now=&o;
	while(!k.empty()){
		if((k.front())>=(k.back())){
			*now+=(k.front());
			k.pop_front();
		}else{
			*now+=(k.back());
			k.pop_back();
		}
		if(now==&o)now=&x;
		else now=&o;
	}

	if(o>x)printf("O\n");
	else printf("X\n");
	printf("%d %d\n",o,x);
	return 0;
}
