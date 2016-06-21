#include"iostream"
#include"cstdio"

using namespace std;

int main(){
	float fine=0,hit=0,sent=0,bag=0;
	int tmp;
	while(cin>>tmp){
		hit++;
		switch(tmp){
			case -1:
				sent++;
				break;
			case 0:
				break;
			case 1:
				fine++;
				bag++;
				break;
			case 2:
				fine++;
				bag+=2;
				break;
			case 3:
				fine++;
				bag+=3;
				break;
			case 4:
				fine++;
				bag+=4;
				break;
		}
	}

	float a,b,c;
	if(fine==0)a=0;
	else a=fine/(hit-sent);
	if(fine+sent==0)b=0;
	else b=(fine+sent)/hit;
	if(bag==0)c=0;
	else c=bag/(hit-sent);

	printf("%.2f %.2f %.2f\n",a,b,c);

	return 0;
}
