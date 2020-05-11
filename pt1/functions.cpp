#include <iostream>
using namespace std;

void myFunction();
void myLittleLeagueTeam(string fname, int age);

 
int main() {
  myFunction(); // call the function

  myLittleLeagueTeam("Liam", 3);
  myLittleLeagueTeam("Jenny", 14);
  myLittleLeagueTeam("Anja", 30);


  return 0;
}





// Create a function
void myFunction() {
  cout << "I just got executed!";
}

void myLittleLeagueTeam(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}
