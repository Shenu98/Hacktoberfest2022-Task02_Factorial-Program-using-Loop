#include <iostream>  
using namespace std;  
int main()  
{  
   int x,factorial=1,number;      
  cout<<"Enter any Number: ";     
cin>>number;       
  for(x=1;x<=number;x++){         
      factorial=factorial*x;         
  }    
  cout<<"Factorial of " <<number<<" is: "<<factorial<<endl;     
  return 0;    
}  
