#include<iostream>
int count=0;
void simpleMerge(int arr[],int low, int mid, int high){
	count+=1;
	int i=low,j=mid+1,k=low;
	int temp[high+1];
	while(i<=mid && j<=high){
		if(arr[i]<=arr[j]){
			temp[k]=arr[i];
			k+=1;
			i+=1;
		}
		else{
			temp[k]=arr[j];
			k+=1;
			j+=1;
		}
	}
	while(i<=mid){
		temp[k]=arr[i];
		k+=1;
		i+=1;
	}
	while(j<=high){
		temp[k]=arr[j];
		j+=1;
		k+=1;
	}
	for(int i=low;i<=high;i++){
		arr[i]=temp[i];
	}
}

void Mergesort(int arr[],int low,int high){
	count+=1;
	if(low>=high){
		return;
	}
	int mid = (low+high)/2;
	Mergesort(arr,low,mid);
	Mergesort(arr,mid+1,high);
	simpleMerge(arr,low,mid,high);
}


int main(){
	int n;
	std::cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	Mergesort(arr,0,n-1);
	std::cout<<"SORTED ARRAY\n";
	for(int i=0;i<n;i++){
		std::cout<<arr[i]<<' ';
	}
	std::cout<<"\nTOTAL COUNT ==== "<<count<<std::endl;
	return(0);
}