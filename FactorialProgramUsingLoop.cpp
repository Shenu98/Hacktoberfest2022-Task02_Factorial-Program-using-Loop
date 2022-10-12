#include <iostream>  
using namespace std;  
int main()  
{  
   int i,fact=1,number;      
   
  cout<<"Enter any Number for factorial: ";     
 cin>>number;   
   
  for(w=1;w<=number;w++){         
      fact=fact*w;         
  }    
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;     
  return 0;    
}  
