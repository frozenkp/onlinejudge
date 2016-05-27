/*
 * =====================================================================================
 *
 *       Filename:  10046.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  西元2016年05月27日 21時49分13秒
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Yi-Hsien Chen
 *   Organization:  NCTU
 *
 * =====================================================================================
 */
#include <iostream>
#include<math.h>

using namespace std;

//long long int N[10100]={0};
/*
long long int f(long long int n){
	if(n<10100){
		if(N[n]!=0)return N[n];
		else{
			N[n]=(2*f(n-1)+1)%100000007;
			return N[n];
		}
	}else return (2*f(n-1)+1)%100000007;
}
*/

long long int k(long long int n){
	if(n==0)return 1;
	else {
		long long int a = k(n/2)%100000007;
		if(n%2==1)return a*a*2;
		else return a*a;
	}
}

int main(){
	long long int t;
	//N[0]=1;
	while(~scanf("%lld",&t))printf("%lld\n",(k(t)-1)%100000007);
	return 0;
}

