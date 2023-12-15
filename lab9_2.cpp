#include<iostream>
using namespace std;

int printO(int taew , int lenght){
    
    if(taew > 0 && lenght > 0){
    
	    for(int i = 1 ; i <= taew ; i++){
	    	for(int j = 1 ; j <= lenght ; j++){
	    		cout << 'O';
	    	}
	    	cout << endl;
	    }
	} else{
        cout << "Invalid input";
    }
	return 0;
}


int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
