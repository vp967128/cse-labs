#include <iostream> 
using namespace std; 

int main()
{
  int amount;  
  cout << "Enter the number of lines for the punishment: " << endl;
  cin >> amount;
  //created variable for amount and assigned the input value into it

  for(int i=0; i < amount; i++){
    cout << "I will always use object oriented programming. ";
    //prints out sentences
  }
  
  if(amount < 0)
  {
  cout << "You entered an incorrect value for the number of lines!" << endl; //stops program if amount is not valid
  }

  return 0; 
}