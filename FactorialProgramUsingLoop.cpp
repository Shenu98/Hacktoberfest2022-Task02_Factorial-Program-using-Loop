#include <iostream>  
using namespace std;  
int main()  
{  
   int i,fact=1,numbers;      
  cout<<"Enter any Number: ";     
 cin>>numbers;       
  for(i=1;i<=numbers;i++){         
      fact=fact*i;         
  }    
   //display fac numbers 
  cout<<"Factorial of " <<numbers<<" is: "<<fact<<endl;     
  return 0;    
} 
