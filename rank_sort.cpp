#include<iostream>

int main(){
	int n,count=0;
	std::cin>>n;
	int rank[n],arr[n],temp[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
		rank[i]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=i-1;j>=0;j--){
			count+=1;
			if(arr[i]<=arr[j]){
				rank[j]+=1;
			}
			else{
				rank[i]+=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		temp[rank[i]]=arr[i];
	}
	std::cout<<"SORTED ARRAY\n";
	for(int i=0;i<n;i++){
		std::cout<<temp[i]<<" ";
	}
	std::cout<<"\nELEMENT\t\tRANK\n";
	for(int i=0;i<n;i++){
		std::cout<<arr[i]<<"\t\t"<<rank[i]<<std::endl;
	}
	std::cout<<"TOTAL COUNT === "<<count<<std::endl;
	return(0);
}