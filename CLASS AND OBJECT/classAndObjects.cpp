#include<iostream>
using namespace std;

class student{
    public:
        //properties add kr sakte h or data type

        /*this-> use kiya h humne isko define krne ke liye   jab bhi hum khi thi-> uze krege
        inko point kr rhe h*/
        int age;
        int weight;
        int height;
        string name;

        //constructor
        student(){
             cout<<" i am inside  no  param constructor : "<<endl;
            this-> age = 23;
            this-> weight = 70;
            this-> height = 189;
             this-> name = "syed ayan";
           }

           //parametrise constructor--------
           student(int myAge, int myWeight , int myHeight , string myName ){
            cout<<"i am inside  param constructor : "<<endl;
            this-> age = myAge;
            this-> height = myHeight;
            this-> weight = myWeight;
            this-> name = myName;

           }


        //------------------------------------OR-------------------------------------------
        // student(int myAge, int myWeight , int myHeight , string myName ): age(myAge),
        //    weight(myWeight),height(myHeight),name(myName){
        //     cout<<"i am inside  param constructor : "<<endl;
        //    }





        //copy constructor--------
        //    student(const student &srcobj){
        //     cout<<"i am inside  copy constructor : "<<endl;
        //     this-> age = srcobj.age;
        //     this-> height = srcobj.height;
        //     this-> weight = srcobj.weight;
        //     this-> name = srcobj.name;

        //    }



        // behaviour or data function bhi add kr sakte h 
        void running(){
            cout<<"i am running : "<<endl;
        }
        void studying(){
            cout<< "i am studying : "<<name<<endl;
        }
        ~student(){
            cout <<"I Am The Destructor : "<<endl;
        }

};

int main()
{
     //cout<< sizeof(student)<<endl;



    //////OBJECT CREATION--------------------------------
    //THERE ARE TWO WAY TO CREATE OBJECT 
    //------->   1 = STATIC WAY
   // student S1;
    // S1.age=50;
    // S1.weight=60;
    // S1.height=176;
    // S1.name="syedayan";


   // S1.running();
    //S1.studying();




    // //------->   2 = DYNAMIC WAY
    //  student* S= new student();
    //  //(*S).age = 25;  or
    //  S->age = 25;
    // // (*S).height = 176; or
    // S->height=176;
    //  // (*S).weight = 67; or
    //   S->weight = 67; 
    // // (*S).name = "syedayan";or
    // S->name = "syedayan";



     //(*S).studying(); or 
     //S->studying();

      //(*S).running();  or 
     // S->running();



     //static way mai------------
    //  student a;

    //  ///dynamic way mai---------
    //  student* alpha = new student();
    //  student* beta = new student;





    //// for statically param const--------------------------------
    // student x;  //// for no parameterise constructor
    // student y(22,70,189,"syedayan");



    ///////for dynamically param const-----------
    student* alpha = new student();
    student* beta = new student(22,70,189,"syed ayan");
    // student* Gama = alpha;
 
    
    ///////////////////////printing Age , Weight , Height , Name --------------

    cout <<"My Age Is : "<< beta->age<<endl;
    cout << "My Weight Is : "<< beta->weight<<endl;
    cout << "My Height Is : "<< beta->height<<endl;
    cout << "My Name Is : "<< beta->name<<endl;

    delete beta;
    delete alpha;



    return 0;
}