#include<iostream>
#include<vector>
#include<iomanip>

std::vector<std::vector<int> >Board;
int tile=1;

void TileBoard(int Trow,int Tcol,int Drow,int Dcol,int size){
	if(size==1){
		return;
	}else{
		int tile_to_use=tile++;
		int qsize=size/2;
		if(Drow < Trow + qsize && Dcol < Tcol + qsize){
			TileBoard(Trow,Tcol,Drow,Dcol,qsize);
		}else{
			Board[Trow + qsize -1][Tcol + qsize -1]=tile_to_use;
			TileBoard(Trow,Tcol,Trow + qsize -1 ,Tcol + qsize -1,qsize);
		}


		if(Drow < Trow + qsize && Dcol >= Tcol + qsize){
			TileBoard(Trow,Tcol+qsize,Drow,Dcol,qsize);
		}else{
			Board[Trow + qsize -1][Tcol + qsize]=tile_to_use;
			TileBoard(Trow,Tcol+qsize,Trow + qsize -1 ,Tcol + qsize,qsize);
		}


		if(Drow >= Trow + qsize && Dcol < Tcol + qsize){
			TileBoard(Trow+qsize,Tcol,Drow,Dcol,qsize);
		}else{
			Board[Trow + qsize][Tcol + qsize -1]=tile_to_use;
			TileBoard(Trow+qsize,Tcol,Trow + qsize ,Tcol + qsize -1,qsize);
		}


		if(Drow >= Trow + qsize && Dcol >= Tcol + qsize){
			TileBoard(Trow+qsize,Tcol+qsize,Drow,Dcol,qsize);
		}else{
			Board[Trow + qsize][Tcol + qsize ]=tile_to_use;
			TileBoard(Trow+qsize,Tcol+qsize,Trow + qsize  ,Tcol + qsize ,qsize);
		}
	}
}

int main(){
	int n,dx,dy;
	std::cin>>n;
	Board.resize(n,std::vector<int>(n));
	std::cin>>dx>>dy;
	TileBoard(0,0,dx,dy,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			std::cout<<std::setw(2)<<std::setfill('0')<<Board[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
	return(0);
}