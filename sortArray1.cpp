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

  //int temp_max = array[0];
  //int temp_max = 0;
  //int max_index = 0;
  for(int i = array_size-1; i > 0; i--)
  {
    int temp_max = array[i];
    int max_index = i;
    for(int j=0; j < i; j++)
    {
      if(array[j] > array[max_index])
      {
        temp_max = array[j];
        max_index = j;
      }
    }
    if(max_index != i)
      {
        int temp_max = array[i];
        array[i] = array[max_index];
        array[max_index] = temp_max;
      }
  }

  cout << "This is the sorted array in an ascending order: " << endl; 
  for (int i=0; i < array_size; i++)
  {
    cout << array[i] << " ";
  }

  cout << endl;

  cout << "The algorithm selected the minimum for the traverse of the array." << endl;

  return 0;
}