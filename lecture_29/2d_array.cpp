#include <iostream>
using namespace std;
int main() {

    //intialization of 2d array
   
    int array [][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}
                
                };

                int row=sizeof(array)/sizeof((int)*sizeof(int));
                int col=sizeof(array[0])/sizeof(int);
                cout<<"row"<<row<<endl;
                cout<<"col"<<col<<endl;

            return 0;    
            }