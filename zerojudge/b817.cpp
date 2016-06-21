#include"list"
#include"cstdio"

using namespace std;

int main(){
	int tmp,n;
	list<int> k1;
	list<int> k2;
	scanf("%d",&tmp);
	scanf("%d",&n);
	for(;n>0;n--){
		scanf("%d",&tmp);
		k1.push_back(tmp);
	}
	scanf("%d",&n);
	for(;n>0;n--){
		scanf("%d",&tmp);
		k2.push_back(tmp);
	}

	int round=0;

	while(!k1.empty()&&!k2.empty()){
		if(*(k1.begin())>*(k2.begin())){
			k1.push_back(*(k2.begin()));
			k1.push_back(*(k1.begin()));
			k1.pop_front();
			k2.pop_front();
		}else{
			k2.push_back(*(k1.begin()));
			k2.push_back(*(k2.begin()));
			k1.pop_front();
			k2.pop_front();
		}
		round++;
	}
	printf("%d %d\n",round,(k1.empty()?2:1));
	return 0;
}
