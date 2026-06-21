// some basic of the recursion 

#include <iostream>
using namespace std;

void print(int i, int n)
{
    if ( i == 11){
        return;
    }
    
    cout << i *n << " " << endl;
    
    print(i+1, n);
}



int main()
{
    int i = 1;
    print(i, 2);
}


#include <iostream>
using namespace std;

void print(int i, int n)
{
    if ( i == 5){
        return;
    }
    
    cout << i;
    
    print(i+1, n);
}



int main()
{
    int i = 1;
    print(i, 4);
}
