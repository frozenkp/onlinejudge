#include"iostream"
#include"iomanip"

using namespace std;

struct out{
	int n;
	int o[100][100];
};

void com(struct out *op,int row,int col,char dir,int now){
	op->o[row][col]=now;
	switch(dir){
		case'r':
			if(col+1<op->n&&op->o[row][col+1]==0)com(op,row,col+1,'r',now+1);
			else if(row+1<op->n&&op->o[row+1][col]==0)com(op,row+1,col,'d',now+1);
			else return;
			break;
		case'd':
			if(row+1<op->n&&op->o[row+1][col]==0)com(op,row+1,col,'d',now+1);
			else if(col-1>=0&&op->o[row][col-1]==0)com(op,row,col-1,'l',now+1);
			else return;
			break;
		case'l':
			if(col-1>=0&&op->o[row][col-1]==0)com(op,row,col-1,'l',now+1);
			else if(row-1>=0&&op->o[row-1][col]==0)com(op,row-1,col,'u',now+1);
			else return;
			break;
		case'u':
			if(row-1>=0&&op->o[row-1][col]==0)com(op,row-1,col,'u',now+1);
			else if(col+1<op->n&&op->o[row][col+1]==0)com(op,row,col+1,'r',now+1);
			else return;
			break;
	}
}

int main(){
	int times,m,n;
	struct out op;
	cin>>times;
	for(;times>0;times--){
		cin>>n>>m;
		op.n=n;
		for(int a=0;a<100;a++){
			for(int b=0;b<100;b++){
				op.o[a][b]=0;
			}
		}
		com(&op,0,0,'r',1);
		for(int a=0;a<n;a++){
			for(int b=0;b<n;b++){
				if(m==1)cout<<setw(5)<<op.o[a][b];
				else cout<<setw(5)<<op.o[b][a];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
