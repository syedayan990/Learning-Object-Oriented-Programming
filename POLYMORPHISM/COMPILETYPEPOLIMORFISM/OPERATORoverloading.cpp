////////////////////invelid statement for (+) operator 
// #include<iostream>
// using namespace std;

// class complex{

//     public:
//     int real;
//     int imag;

//     complex()
//     {
//         real=imag=-1;
//     }

//     complex(int r , int i): real (r), imag (i){};

//   void show()
// {
//     cout << "[" << real << " + i" << imag << "]" << endl;
// }
// };

// int main(){

//     complex A(4 , 6);
//     A.show();
//     complex B(7 , 9);
//     B.show();
//     complex C(A+B);
//     //////this will compile bcz (+) operator don't know how to add any complex number
//     C=A+B;


//     return 0;
// }




#include<iostream>
using namespace std;

class complex{

    public:
    int real;
    int imag;

    complex()
    {
        real=imag=-1;
    }

    complex(int r , int i): real (r), imag (i){};

    complex operator+(const complex &B)
    {
    //this->A   instance
    complex temp;
    temp.real = this->real + B.real;
    temp.imag = this->real + B.imag;
    return temp;

}
 //complex(int r , int i): real (r), imag (i){};

    complex operator-(const complex &B)
    {  
    //this->A   instance
    complex temp;
    temp.real = this->real - B.real;
    temp.imag = this->real - B.imag;
    return temp;

}
bool operator==(const complex &B)
    {
        return (this->real==B.real) && (this->imag == B.imag);

    }
    



  void show()
{
   

   // printf("[%d + i%d]\n",real,imag);

    cout << "[" << real << " + i" << imag << "]" << endl;
}
};




int main(){

    complex A(4 , 6);
    A.show();
    complex B(7 , 9);
    B.show();
    //complex C(A+B);
    //////this will compile bcz (+) operator don't know how to add any complex number
   complex C=(A + B);
   //C=A+B;
C.show();
 
complex D=(A - B);
   //C=A+B;
D.show();
bool X = A == B;
cout << X << endl;
    return 0;
}