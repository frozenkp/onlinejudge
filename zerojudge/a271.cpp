#include <iostream>
#include"sstream"
#include"string"

using namespace std;

int main(){
	int x,y,z,w,n,m;
	int times,status,poison,live;
	stringstream ss;
	string s;

	cin>>times;
	for(;times>0;times--){
		poison=0;
		live=1;

		cin>>x>>y>>z>>w>>n>>m;
		getchar();
		getline(cin,s);
		ss.str("");
		ss.clear();
		ss<<s;

		while(ss>>status&&live){
			m-=n*poison;
			if(m<=0)live=0;
			switch(status){
				case 1:
					m+=x;
					break;
				case 2:
					m+=y;
					break;
				case 3:
					m-=z;
					break;
				case 4:
					m-=w;
					poison++;
					break;
				default:
					break;
			}
			if(m<=0)live=0;
			//cout<<m<<endl;
		}

		if(live)cout<<m<<"g"<<endl;
		else cout<<"bye~Rabbit"<<endl;
	}
	return 0;
}
