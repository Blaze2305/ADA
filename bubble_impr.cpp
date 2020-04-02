#include<iostream>
int main(){
	int n,count=0,temp;
	bool swapped = false;
	std::cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		swapped = false;
		for(int j=0;j<n-i-1;j++){
			count+=1;
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=true;
			}
		}
		if(swapped == false){
			break;
		}
	}
	for(int i=0;i<n;i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<"LENGTH OF ARR == "<<n<<std::endl;
	std::cout<<"\nTOTAL COUNT == "<<count<<std::endl;
	return(0);
}
