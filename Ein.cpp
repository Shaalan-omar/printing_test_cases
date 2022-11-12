#include <iostream>
using namespace std;



int main()
{
    int index = 0, index2 =0;
    cout<< "Enter below the index you start the memory with: ";
    cin >> index;
    cout<< "Enter below the index you end the memory with: ";
    cin>> index2;
     for(index;index<index2*4;index++)
     {
        //if(index%4 == 0)
           

            cout<<"{" << "mem["<< index+3<<"]+ "<< "mem["<< index+2<<"]+ "<<"mem["<< index+1<<"]+ ""mem["<< index<<"]}"<<"="<<endl;
             index = index+3;
     }
     return 0;
}