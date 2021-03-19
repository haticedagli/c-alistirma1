#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


int main(int argc, char** argv) {
	
	int matrixbirsutun;
	int matrixbirsatir;
	int matrixikisutun;
	int matrixikisatir;
	
	cout<<"Matris birin satir sayisini giriniz. \n";
	cin>>matrixbirsatir;
	cout<<"Matris birin sutun sayisini giriniz. \n";
	cin>>matrixbirsutun;
	cout<<"Matris ikinin satir sayisini giriniz. \n";
	cin>>matrixikisatir;
	cout<<"Matris ikinin sutun sayisini giriniz. \n";
	cin>>matrixikisutun;
	
	
	int matrixbir [matrixbirsatir][matrixbirsutun];
	int matrixiki [matrixikisatir][matrixikisutun];
	
	cout<<"Matris birin elemanlarini giriniz. \n";
	
	for(int i = 0; i<matrixbirsatir; i++){
		for(int j = 0 ; j<matrixbirsutun; j++){
			cout<<"Satir "<<i + 1<<" Sutun "<<j + 1<<endl;
			cin>>matrixbir[i][j];
		}
	}
	
	cout<<"Matris ikinin elemanlarini giriniz. \n";
	
	for(int i = 0; i<matrixikisatir; i++){
		for(int j = 0 ; j<matrixikisutun; j++){
			cout<<"Satir "<<i + 1<<" Sutun "<<j + 1<<endl;
			cin>>matrixiki[i][j];
		}
	}
	
	int sonucmatrix[matrixbirsatir][matrixikisutun];
	
	for(int i = 0; i < matrixbirsatir; ++i){
		for(int j = 0; j < matrixikisutun; ++j){
			sonucmatrix[i][j] = 0;
		}  
	}
	
	for(int i = 0; i < matrixbirsatir; ++i){
		for(int j = 0; j < matrixikisutun; ++j){
			for(int k = 0; k < matrixbirsutun; ++k)
            {
                sonucmatrix[i][j] += matrixbir[i][k] * matrixiki[k][j];
            }
		}  
	}
        
    cout << endl << "Sonuc matrisi : " << endl;
    for(int i = 0; i < matrixbirsatir; ++i){
    	for(int j = 0; j < matrixikisutun; ++j){
        	cout << " " << sonucmatrix[i][j];
        	if(j == matrixikisutun-1)
            	cout << endl;
    	}
	}
    
	
	return 0;
}
