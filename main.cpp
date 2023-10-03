//This is a simple C++ program that will help calculate the sum,
// product , difference and division of two values that the user 
// enters in the program 

#include <iostream>
using namespace std;

int main(){
    float A , B , C , result;

    cout<<"You will be prompted to enter the two values you want to calculate" <<std::endl;
    cout<<"Please enter the first value" <<std::endl;
    cin>>A;
    cout<<"Please enter the second value" <<std::endl;
    cin>>B;
    cout<<"If you want to get the sum of the two values enter 1, difference enter 2 , product enter 3 and for the division enter 4" <<std::endl;
    cin>>C;

    if ( C == 1){
        result = A + B;
        cout<<"The sum of the values entered is " <<result ;
    }else if(C == 2){
         result = A - B;
        cout<<"The difference of the values entered is " <<result ;   
    }else if( C == 3){
         result = A * B;
        cout<<"The product of the values entered is " <<result ;
    }else if( C == 4 ){
         result = A / B;
        cout<<"The division of the values entered is " <<result ;
    }else{
        cout<<"You entered the wrong value";
    }

    return 0;


}