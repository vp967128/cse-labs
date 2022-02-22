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

  int v;
  cout << "Enter a number to search for in the array: " << endl;
  cin >> v; 

  int counter = 0;
  int index = 0;  
  bool flag = false; 
  for (int i=0; i < array_size; i++)
  {
    //counter++;
    if(array[i] == v)
    {
      counter = i + 1;
      flag = true;
      index = i;
    }
  }

  if(flag == true)
  {
    cout << "Found value " << v <<" at index " << index << ", which took " << counter << " checks. " << endl;
    if(counter == 1)
    {
      cout << "We ran into the best case scenario!" << endl;
    }
    if(counter == array_size)
    {
      cout << "We ran into the worst case scenario!" << endl;
    }
  }
  else
  {
    cout << "The value " << v << " was not found in the array!" << endl;
  }
  return 0; 
}