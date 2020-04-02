#include<iostream>
int count=0;
// https://stackoverflow.com/questions/7985470/printing-fibonacci-number-series-without-using-loops

// The Fibonacci sequence is still an iterative sequence and does not need to call itself twice. 
// You just need to include some more information when you do call yourself. 
// ComputeF(d, n1, n2) => d == 0 ? n1 : ComputeF(d - 1, n2, n2 + n1). 
// Then start it with ComputeF(n, 0, 1) – 
// 											Brian Reichle Nov 3 '11 at 8:25

void fibonacci(int d,int a,int b){
	count+=1;
	if(d==0){
		return;
	}
	else{
		std::cout<<a<<" ";
		fibonacci(d-1,b,a+b);
	}
}

int main(){
	int n;
	std::cin>>n;
	fibonacci(n,0,1);
	std::cout<<"\nTOTAL FUNCTION CALLS == "<<count<<std::endl;
	return(0);
}