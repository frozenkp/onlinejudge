#include"cstdio"
#include"iostream"

using namespace std;

int main(){
	float a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	if(b*d-a*e==0){
		if(c*d-a*f==0&&b*f-c*e==0)cout<<"Too many"<<endl;
		else cout<<"No answer"<<endl;
	}else{
		printf("x=%.2f\n",(b*f-c*e)/(b*d-a*e));
		printf("y=%.2f\n",(c*d-a*f)/(b*d-a*e));
	}
	return 0;
}
