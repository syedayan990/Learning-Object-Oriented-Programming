#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

class bird{
  public:
  virtual void eat() = 0;
  virtual void fly() = 0;
  //classes that inherit this class 
  //has implement pure virtual file


};

class sparrow : public bird{
    public:
       void eat(){
        cout<<"sparrow is eating : "<<endl;
       } 
       void fly(){
        cout<<"sparrow is flying : "<<endl;
       }
};

class eagle : public bird{
  public:
  void eat(){
    cout << "eagle is eating : "<<endl;
  }
  void fly(){
    cout << "eagle is flying : "<<endl;
  }
  
};
class pigen : public bird{
  public:
  void eat(){
    cout << "pigen is eating : "<<endl;
  }
  void fly(){
    cout << "pigen is flying : "<<endl;
  }
  
};

#endif // BIRD_H
