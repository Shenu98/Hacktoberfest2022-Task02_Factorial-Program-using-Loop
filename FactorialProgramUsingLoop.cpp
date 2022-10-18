#include <iostream>  
using namespace std;  
int main()  
{  
   int j,fact=1,number;    
  cout<<"Enter any Number: ";    
cin>>number;    
  for(j=1;j<=number;j++){    
      fact=fact*j;    
  }    
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
  return 0;  
}  
