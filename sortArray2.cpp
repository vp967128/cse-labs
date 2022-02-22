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

  int counter = 0;
  for(int i = array_size-1; i > 0; i--)
  {
    int temp_min = array[i];
    int min_index = i;
    for(int j=0; j < i; j++)
    {
      if(array[j] < array[min_index])
      {
        temp_min = array[j];
        min_index = j;
      }
    }
    if(min_index != i)
      {
        int temp_min = array[i];
        array[i] = array[min_index];
        array[min_index] = temp_min;
        counter++;
      }
  }

  cout << "This is the sorted array in an descending order: " << endl; 
  for (int i=0; i < array_size; i++)
  {
    cout << array[i] << " ";
  }

  cout << endl;

  cout << "The algorithm selected the maximum for the traverse of the array." << endl;

  cout << "It took " << counter << " swaps to sort the array..." << endl;

  return 0;
}