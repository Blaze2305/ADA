#include<iostream>
int main(){
	int n,count=0,j,key;
    std::cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
    for (int i=1;i<n;i++){  
        key=arr[i];  
        j=i-1;
		count+=1;  
        while(j>=0 && arr[j]>key){  
			count+=1;
            arr[j+1]=arr[j];  
            j=j-1;  
        }  
        arr[j+1]=key;  
    }  
	for(int i=0;i<n;i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<"\nTOTAL COUNT == "<<count<<std::endl;
	return(0);
}

