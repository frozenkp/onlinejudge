#include"iostream"
#include"algorithm"

using namespace std;

class num{
	private:
		string ctn;
		int len;
		char sign;
	public:
		friend istream& operator>>(istream &o,num &i){
			o>>i.ctn;
			if(*(i.ctn.begin())=='-'){
				i.sign='-';
				i.ctn.erase(i.ctn.begin());
			}else i.sign='+';
			i.len=i.ctn.length();
			return o;
		}

		friend ostream& operator<<(ostream &o,num &i){
			if(i.sign=='-')o<<"-";
			o<<i.ctn;
			return o;
		}

		friend int operator<(num &a,num &b){  			//-1:a<b 0:a=b 1:a>b
			if(a.sign=='+'&&b.sign=='-')return 1;
			else if(a.sign=='-'&&b.sign=='+')return -1;
			else if(a.sign=='+'){
				if(a.len<b.len)return -1;
				else if(a.len>b.len)return 1;
				else if(a.ctn.compare(b.ctn)==0)return 0;
				else if(a.ctn.compare(b.ctn)<0)return -1;
				else return 1;
			}else{
				if(a.len<b.len)return 1;
				else if(a.len>b.len)return -1;
				else if(a.ctn.compare(b.ctn)==0)return 0;
				else if(a.ctn.compare(b.ctn)<0)return 1;
				else return -1;
			}
		}
};

bool cmp(num a,num b){
	if((a<b)<0)return 1;
	else return 0;
}

int main(){
	int n;
	while(cin>>n){
		num i[n];
		for(int a=0;a<n;a++)cin>>i[a];
		sort(i,i+n,cmp);
		for(int a=0;a<n;a++)cout<<i[a]<<endl;
	}
	return 0;
}
