#include<iostream>
int count=0;

void solve(int n,char A,char B,char C){
	count+=1;
	if(n==1){
		std::cout<<"MOVE DISK 1 FROM "<<A<<" TO "<<C<<std::endl;
		return;
	}
	solve(n-1,A,C,B);
	solve(1,A,B,C);
	solve(n-1,B,A,C);
}

int main(){
	int n;
	std::cin>>n;
	solve(n,'A','B','C');
	std::cout<<"\nTOTAL COUNT == "<<count<<std::endl;
	return(0);
}