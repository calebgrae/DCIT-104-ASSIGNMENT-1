#include <iostream>

using namespace std;
void prime(int z);

int main()
{
  int number = 0;
  cout<< "Enter a number:" << endl ;
  cin>> number ;
  prime(number) ;

}

void prime(int z)
{
    int sum = 0 ;
   for(int n = z; n>0 ; n--){
      bool not_prime = false ;
      for (int b = 2 ; b<n ; b++){
          if (n%b == 0){
            not_prime = true ;
            b = n ;
          }
      }
      if (not_prime == false){
            sum = sum + n ;
      }
   }
   cout<< "The sum of all prime less than a given number is: " << sum ;
}
