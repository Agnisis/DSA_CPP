#include <iostream>
using namespace std;

int main()
{   
    // gen form of data representation is  2^->         7 6 5 4 3 2 1 0          128 64 32 16    8 4 2 0  make active bits 1
    int data1 = 100; // 64+32+4= 0110 0100 
    int data2 = 50;// 32+16+2= 0011 0010

    int dataOr = data1 | data2;      
    cout << dataOr<<endl;            
    // 0110 0100
    // 0011 0010                         
// or  -----------                             
//     0111  0110  64+32+16+4+2 =118

    int dataAnd=data1 & data2;
    cout<<dataAnd<<endl;


 //     0110 0100
  //    0011 0010
// And -----------
//    0010  0000   = 32

    int dataXor=data1^ data2;
    cout<<dataXor<<endl;


     // 0110 0100
     // 0011 0010
//   ^ -----------
     // 0101 0110   64+16+4+2= 86



     int data3=1;               //0000 0001 =~(0000 0001)=1111 1110 => -(2's complement) =>(1's complement +1)= 1111 1110+1 = 0000 0010 
     int data4=~data3;
     cout<<data4<<endl;   


    return 0;
}