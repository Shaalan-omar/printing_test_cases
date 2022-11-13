#include <iostream>
using namespace std;



int main()
{
    int index = 0, instructionCount =0;
    cout<< "Enter below the index you start the memory with: ";
    cin >> index;
    cout<< "Enter below the number of instructions you want to have";
    cin>> instructionCount;
     for(index;index<instructionCount*4;index++)
     {
        //if(index%4 == 0)
           

            cout<<"{" << "mem["<< index+3<<"], "<< "mem["<< index+2<<"], "<<"mem["<< index+1<<"], ""mem["<< index<<"]}"<<"="<<endl;
             index = index+3;
     }
     return 0;
}

#include <iostream>
using namespace std;

int main() {
  long int index = 0, instructionCount = 0;
  cout << "Enter below the index you start the memory with: ";
  cin >> index;
  cout << "Enter below the number of instructions you want to have";
  cin >> instructionCount;
  int count = index;
  for (index; index < count + (instructionCount * 4); index++) {

    cout << "{"
         << "mem[" << index + 3 << "], "
         << "mem[" << index + 2 << "], "
         << "mem[" << index + 1
         << "], mem["
         << index << "]}"
         << "=" << endl;
    index = index + 3;
  }
  return 0;
}
