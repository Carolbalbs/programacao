#include <iostream>

using namespace std;

#include <iostream>
using namespace std;
int main (){
int i;
  int testScore[3];
  for ( i = 0; i < 3; i++)
  {
     cout << "Enter test score #" << i + 1 << ": ";
     cin >> testScore[i];
  }
  for ( i = 0; i < 3; i++)
  {
cout << "Test score #" << i + 1 << ": " << testScore[i] << endl;
}
  return 0;
}
}