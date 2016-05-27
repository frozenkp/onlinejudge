/*
 * =====================================================================================
 *
 *       Filename:  10045.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  西元2016年05月27日 21時06分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yi-Hsien Chen
 *   Organization:  NCTU
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;

int N[1000]={0};

int f(int n){
	if(n<1000){
		if(N[n]!=0)return N[n];
		else{
			N[n]=f(f(n * 3) + 1);
			return N[n];
		}
	}else return n-10;
}

int main(){
	int t,n;
	cin>>t;
	for(;t>0;t--){
		cin>>n;
		cout<<f(n)<<endl;
	}
	return 0;
}

