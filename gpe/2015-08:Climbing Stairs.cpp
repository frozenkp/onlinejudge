/*
 * =====================================================================================
 *
 *       Filename:  gg.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  西元2016年06月18日 22時41分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;


class bignum{
	public:
		int num[100];
		bignum(){
			for(int a=0;a<100;a++)num[a]=0;
		}

		bignum add(bignum i){
			bignum out;
			for(int a=0;a<100;a++){
				out.num[a]+=num[a]+i.num[a];
				if(out.num[a]>9){
					out.num[a+1]+=1;
					out.num[a]%=10;
				}
			}
			return out;
		}
		
		friend ostream& operator<<(ostream &o,bignum i){
			int check=1;
			for(int a=99;a>=0;a--){
				if(check&&i.num[a]==0)continue;
				check=0;
				o<<i.num[a];
			}
			return o;
		}
};

bignum com(int end,bignum pre,bignum pre2,int now);

int main(){
	int in;
	cin>>in;
	if(in==1){
		cout<<1<<endl;
		return 0;
	}
	bignum out,pre;
	pre.num[0]=1;
	out=com(in,pre,pre,2);
	cout<<out<<endl;
	return 0;
}

bignum com(int end,bignum pre,bignum pre2,int now){
	if(end==now)return pre.add(pre2);
	else return com(end,pre.add(pre2),pre,now+1);
}

