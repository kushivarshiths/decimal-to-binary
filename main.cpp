#include <iostream>

using namespace std;

int main() {
  // Initialize variables
  int decimal = 10, 
  int binary = 0;
int i = 0;
while(decimal != 0){
    int temp = decimal%2;
    for(int j = 0;j<i;j++){
       temp = temp*10;
    }
    binary = binary + temp;
    i++;
    decimal = decimal/2;
}
cout <<"binary ="<<binary;
  return 0;
}
