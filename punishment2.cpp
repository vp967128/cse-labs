#include <iostream> 
using namespace std; 

int main()
{
  int amount;  
  cout << "Enter the number of lines for the punishment: " << endl;
  cin >> amount;

  if(amount < 0)
  {
  cout << "You entered an incorrect value for the number of lines!" << endl;
  return 1;
  }
  //created variable for amount and assigned the input value into it, if not valid stops program
  
  int line;  
  cout << "Enter the line for which we want to make a typo: " << endl;
  cin >> line;
  //cout << line;

  if(line > amount || line < 0)
  {
  cout << "You entered an incorrect value for the line typo!" << endl;
  return 1;
  }
  //created variable for line and assigned the input value into it, if not valid stops program

  for(int i=0; i < amount; i++){
    if(i==(line-1))
    {
      cout << "I will always use object oriented programing. ";
      //prints out typo for specific line
    }
    else
    {
      cout << "I will always use object oriented programming. ";
    }
  }

  return 0; 
}