#include"iostream"
#include"string"
#include"vector"

using namespace std;

int main(){
	string stu;
	cin>>stu;
	vector<int> g;
	int great=0;
	g.push_back(great);
	for(int a=0;a<stu.length();a++){
		if(*(stu.begin()+a)==*(stu.begin()+a+1)){
			great++;
			g.push_back(great);
		}else g.push_back(great);
	}
	int times,r,l;
	scanf("%d",&times);
	for(;times>0;times--){
		great=0;
		scanf("%d%d",&l,&r);
		printf("%d\n",g[r-1]-g[l-1]);
	}
	return 0;
}
