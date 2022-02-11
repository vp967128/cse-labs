#include <iostream> 
using namespace std; 

int main()
{
  int array_size;  
  cout << "Enter the size of the array: " << endl;
  cin >> array_size;
  //asking for array size and storing variable

  int array[array_size];
  if(array_size < 0)
  {
    cout << "ERROR: you entered an incorrect value for the array size!" << endl;
    //return 1;
    exit(0);
  }
  else
  {
    cout << "Enter the numbers in the array, separated by a space, and press enter: " << endl;
    for (int i=0; i < array_size; i++)
    {
      cin >> array[i];
    }
  }
  //if size entered is wrong send error otherwise ask for numbers for array

  int counter = 0;
  for (int j=0; j < array_size; j++)
  {
    if(array[j] < array[j-1])
    {
      counter++;
    }
  }
  //counter for checking if numbers are not increasing

  if(counter != 0)
  {
    cout << "This is NOT an increasing array!" << endl;
    for (int i=0; i < array_size; i++)
    {
      cout << array[i] << " ";
    }
  }
  else
  {
    cout << "This IS an increasing array!" << endl;
    for (int i=0; i < array_size; i++)
    {
      cout << array[i] << " ";
    }
  }
  // if counter doesnt change then numbers are increasing and vice versa, also prints out numbers after

  return 0;
}
