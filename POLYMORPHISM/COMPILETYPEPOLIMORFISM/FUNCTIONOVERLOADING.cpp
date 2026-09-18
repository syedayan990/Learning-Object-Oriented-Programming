#include<iostream>
#include<string>

using namespace std;


class Add{
    public:
      int sum(int x , int y){
        return x+y;
      }
      int sum(int x , int y , int z){
        return x+y+z;
      }
      double sum(double x , double y){
        return x+y;
      }
};

int main(){

     int x=4;
     int y=7;
     int z=8;

     Add add;
     cout<<add.sum(x , y)<<endl;
     cout<<add.sum(4 , y , 8)<<endl;
     cout<<add.sum(4.3 , 7.3)<<endl;



    return 0;
}
