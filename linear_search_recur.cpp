#include<iostream>

int count=0;

int lin_search(int arr[],int n,int key){
	count+=1;
	if(n<0){
		return(-1);
	}
	else{
		if(arr[n]==key){
			return(n);
		}
		else{
			return(lin_search(arr,n-1,key));
		}
	}
}

int main(){
	int n,key;
	std::cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	std::cin>>key;
	std::cout<<"LENGTH OF ARR == "<<n<<std::endl;
	std::cout<<"KEY ==== "<<key<<std::endl;
	std::cout<<"INDEX ===="<<lin_search(arr,n,key)<<std::endl;
	std::cout<<"TOTAL COUNT ==== "<<count<<std::endl;
	return(0);
}
