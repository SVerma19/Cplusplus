#include <iostream>
using namespace std;

/*  Terminal commands to run file: 
    g++ file1.cpp file2.cpp -o newfile.exe
    ./newfile.exe
     
    g++ *.cpp (all .cpp files in directory) -o newfile.exe
    ./newfile.exe

    ls *.cpp — lists all .cpp files in a directory

    Have to recompile code/file in order for terminal to pick up change
*/

class HelloWorld{
public:
  //Constructor
  HelloWorld(){
    cout<<"Constructor is called"<<endl;
  }
  //Destructor
  ~HelloWorld(){
    cout<<"Destructor is called"<<endl;
   }
   //Member function
   void display(){
     cout<<"Hello World!"<<endl;
   }
};

int main(){
   //Object created
   HelloWorld obj;
   //Member function called
   obj.display();
   return 0;
}