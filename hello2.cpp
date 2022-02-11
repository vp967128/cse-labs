#include <iostream> 
using namespace std; 

int main()
{
  string name;  //fname, lname;
  cout << "Please enter your name: " << endl;
  getline (cin, name);   //cin >> fname >> lname;
  cout << "Welcome to CSE30, " << name << "!" << endl;
  //fname << " " << lname
  return 0; 
}