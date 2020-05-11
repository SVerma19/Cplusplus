#include <iostream>
using namespace std;

int main() {

	//initialization methods:
	
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	
	
	int arr2[] = {10, 20, 30, 40, 50};
	
	
	
	//iterate over array using while:
	
   int n=0;
  
   while(n<=4){
      cout<<arr[n]<<endl;
      n++;
   }
   
}