#include<iostream>
int main(){
	int n,count=0,temp;
	std::cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			count+=1;
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<"LENGTH OF ARR === "<<n<<std::endl;
	std::cout<<"\nTotal count == "<<count<<std::endl;
	return(0);
}
