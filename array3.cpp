#include <iostream> 
#include <string>
using namespace std;

int main()
{
  int n;
  cout << "Enter the size of a 2D array: " << endl;
  cin >> n;
  //ask for array size and assign it to varible n

  int dimensions[n][n];
  //declare dimensions variable
  
  int counter = 0;
  //start counter
  if(n < 0)
  {
    cout << "ERROR: you entered an incorrect value for the array size!" << endl;
    //return 1;
    exit(0);
  }
  else if(n > 10)
  {
    cout << "ERROR: your array is too large! Enter 1 to 10." << endl;
    exit(0);
  }
  else
  {
    for (int i=0; i < n; i++)
    {
      cout << "Enter the values in the array for row " << i + 1 << ", separated by a space, and press enter: " << endl;
      for (int j=0; j < n; j++)
      {
        cin >> dimensions[i][j];
        if(dimensions[i][j] < 0)
        {
          counter++;
        }
      }
    }
  }
  //if size inputted is wrong display error, else ask for values of each row and count negative amounts

  if(counter != 0)
  {
    cout << "There are " << counter << " negative values!" << endl;
  }
  else
  {
    cout << "All values are non-negative!" << endl;
  }
  //if counter changes from zero then errors were detected, else there were no negatives detected

  return 0;
}