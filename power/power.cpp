#include<iostream>
using namespace std;
double power(int x,int y){
	if(x==0)
		return 0;
	else{
		if(y==0)
			return 1;
		if(y==1)
			return x;
		else
		return x*power(x,y-1);
	}
}




int main(){
	int m,n;
	cin>>m>>n;
	cout<<power(m,n);
	return 0;
}

