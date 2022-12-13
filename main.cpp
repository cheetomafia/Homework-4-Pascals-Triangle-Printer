#include <iostream>
#include <math.h>
using namespace std;

void printPascalTriangle(const int levels);

int main()
{
    int levels;
    cin >> levels;
    if( levels < 10 ) {
        printPascalTriangle(levels);
    }else{
        cout << "Levels must be < 10\n";
    }
    return 0;
}

void printPascalTriangle(const int levels){

int r, c; //r is rows, c is columns

for (r = 0; r<levels; r++){
  for(c = 1; c<levels-r; c++)
    cout << "..";

  int x;
  for(c = 0; c <= r; c++){
    if(c == 0 || r == 0)
      x = 1;
    else
      x = x*(r-c+1)/c;

    if(c == 0)
      cout << x;
    else if (c == r)
      cout << "..." << x;
    else if(x >= 10)
      cout << ".." << x;
    else
      cout << "..." << x;
  }
  cout << endl;
}
  
}
