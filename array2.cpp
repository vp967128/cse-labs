#include <iostream> 
#include <string>
using namespace std;

int main()
{
  string reversal;  
  cout << "Enter the string to reverse: " << endl;
  cin >> reversal;
  //string input

  string temp = reversal;
  for (int i=0; i < reversal.length(); i++)
  {
    temp[i]=reversal[reversal.length()-i-1];
  }
  //changing placement outputs using temp for reversal change
  
  cout << "The reverse of the string is: " << temp << endl;
  //string reversal output

  return 0;
}