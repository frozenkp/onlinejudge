#include"cstdio"
#include"vector"

using namespace std;

int main(){
	int n;
	scanf("%d",&n);

	vector<int> j;
	vector<int> i;
	//vector<int> k;
	int max,min,tmp;

	scanf("%d",&tmp);
	min=tmp;
	j.push_back(tmp);
	i.push_back(0);

	for(int a=1;a<n;a++){
		scanf("%d",&tmp);
		j.push_back(tmp);
		if(tmp>=min)i.push_back(tmp-min);
		else{
			i.push_back(0);
			min=tmp;
		}
	}

	max=j[n-1];
	int out=0;

	for(int a=n-2;a>=0;a--){
		if(j[a]<max){
			tmp=(max-j[a])*i[a];
			if(tmp>out)out=tmp;
		}else max=j[a];
	}

	printf("%d\n",out);
	return 0;
}
