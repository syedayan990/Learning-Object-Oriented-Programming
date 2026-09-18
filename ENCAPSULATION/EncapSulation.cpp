#include<iostream>
using namespace std;


   class student
   {
 private:
    int Age;
    int ID;
    string Name;
    int NOS;
    
 private:
    float *gpa;
    string gf;

    public:
   
    //layer of authentification
   void setgpa(float A)
   {
     *this->gpa = A;
   }

   float getgpa() const
   {
       return *this->gpa;
   }

     int getAge() const
   {
       return this->Age;
   }
    string getName() const
   {
       return this->Name;
   }

    public:
   //default constructor----------
    student(){

        cout<<"student default constructorcalled : "<<endl;
    }




    //parametrise constructor------------------------
    student( int ID , int Age , string Name , int NOS , float gpa , string gf){
        cout<<"parametrise constructor called : "<<endl;
        this->ID=ID;
        this->Age=Age;
        this->Name=Name;
        this->NOS=NOS;
        this->gpa = new float(gpa);
        this->gf = gf;
    }

    //copy constructor----------------
 
           student(const student &srcobj){
            cout<<"i am inside  copy constructor : "<<endl;
            this-> Age = srcobj.Age;
            this-> ID = srcobj.ID;
            this-> Name = srcobj.Name;
            this-> NOS = srcobj.NOS;
            this->gpa = new float(*srcobj.gpa);

           }

           //behaviour
           void study()
           {
               cout <<this->Name<<"studying : "<<endl;
           }
           void sleep()
           {
              cout <<this->Name<<" sleeping : "<<endl;
           }
           void bunk()
           {
               cout <<this->Name<<"bunking : "<<endl;
           }


           //distructor
          ~student()
       {
         delete gpa;
         cout<<"student default destructor called"<<endl;
     }

 private:

    void gfChatting(){
        cout <<this->Name<<" chatting with gf : "<<endl;
    }

   };

int main()
{

    // student *A = new student(3 , 23 , "syed ayan" , 6 , 7.5);
    // cout<<A->Name<<endl;
    // cout<<A->Age<<endl;
    // A->study();
    // delete A;
    student A(1 , 23, "Syed Ayan" , 6 ,7.4 , "rushu" );
    //cout<<A.Name<<endl;
    //cout<<A.gf<<endl;---------> ye bhi nhi chlega ye bhi private entity h 

    //A.gfChatting(); ----> ye nhi chlega kuoki ye private entity h
    A.sleep();
   // delete A;
   cout<<A.getgpa()<<endl;
   A.setgpa(6.4);
   cout<<A.getgpa()<<endl;
    cout<<A.getAge()<<endl;
      cout<<A.getName()<<endl;





     return 0;

}