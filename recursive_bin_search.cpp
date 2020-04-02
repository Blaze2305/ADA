#include<iostream>
int count=0;
int search(int arr[],int low,int high, int key){
	count+=1;
	if(high>low){
		int mid = ( low + high )/2;
		if(arr[mid]==key){
			return(mid);
		}else if(arr[mid]>key){
			return(search(arr,low,mid-1,key));
		}
		return(search(arr,mid+1,high,key));
	}
	return(-1);
}

int main(){
	int n,key;
	std::cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	std::cin>>key;
	std::cout<<"INDEX == "<<search(arr,0,n-1,key)<<std::endl;
	std::cout<<"TOTAL COUNT === "<<count<<std::endl;
	return(0);
}