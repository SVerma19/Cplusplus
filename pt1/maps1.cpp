#include <iostream>
#include <iterator> 
#include <map>
using namespace std;


int main() {
    
    //declare a map
    map<int, string> map1;
    
    //add elements to a map
    map1[0] = "sam";
    map1[1] = "pam";
    map1[2] = "will";
    map1[3] = "jill";
    

	//get elements from a map
	cout << "KEY\tELEMENT" << endl; 

    for(int i = 0; i < map1.size(); i++ ){ 
        cout << i << " \t" << map1[i] << endl; 
    }


	//using an interator..		
	map<int, string>::iterator cursor;
    cout << "KEY\tELEMENT" << endl; 
    for(cursor = map1.begin(); cursor!=map1.end(); cursor++){ 
        cout<<cursor->first;
        cout<< '\t'<<cursor->second<<'\n'<<endl; 
    }
    
   
    

   
}