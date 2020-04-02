#include<iostream>
int count = 0;

int factorial(int n){
	count+=1;
	if(n==0){
		return(1);
	}
	else{
		return(n*factorial(n-1));
	}
}


int main(){
	int n;
	std::cin>>n;
	std::cout<<n<<"! == "<<factorial(n)<<std::endl;
	std::cout<<"TOTAL NUMBER OF FUNCTION CALLS == "<<count<<std::endl;
	return(0);
}