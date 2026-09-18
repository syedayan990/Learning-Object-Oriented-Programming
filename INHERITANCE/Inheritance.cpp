// #include<iostream>
// #include<string>

// using namespace std;


// class vehicle{

//     public:
//     string name;
//     string model;
//     int NoOfTire;


//     vehicle(string _name , string _model , int _NoOfTire)
//     {
//         cout<<"i am inside vehicle : "<<endl;
//         this->name=_name;
//         this->model=_model;
//         this->NoOfTire=_NoOfTire;

//     }

//     public:
//     void start_engine()
//     {
//         cout<<"engine is starting : "<<name<<endl;
//     }
//     void stop_engine()
//     {
//         cout << " engine is stoping : "<<name<<endl;
//     }
    
// };


// class car : public vehicle
// {
//     public:
//    int NumberOfDoor;
//    string TransmissionType;

//    car(string _name , string _model , int _NoOfTire , int _NumberOfDoor, string _TransmissionType):vehicle(_name ,_model,_NoOfTire) 
//    {
//     cout<<" i am inside car : "<<endl;
//     this->NumberOfDoor=_NumberOfDoor;
//     this->TransmissionType=_TransmissionType;

//    }


//    public:
//    void AConAndOf()
//    {
//      cout<<" AConAndOf function : "<<name<<endl;
//    }



// };




// int main(){

//    car Alpha("Kia seltos" , " X-line varient" , 4 , 4 , "AMT(Automated Manual Transmission)");
//     Alpha.start_engine();
//     Alpha.AConAndOf();
//     Alpha.stop_engine();
//     cout<<Alpha.name<<endl;
//     cout<<Alpha.model<<endl;
//     cout<<Alpha.NoOfTire<<endl;
//     cout<<Alpha.NumberOfDoor<<endl;
//     cout<<Alpha.TransmissionType<<endl;





//     return 0;
// }




////////////////////////for private entity access-----------------------
// #include<iostream>
// #include<string>

// using namespace std;


// class vehicle{

//     private:
//     string name;
//     public:
//     string model;
//     int NoOfTire;

//     string getname() {
//      return this->name;
//     }


//     vehicle(string _name , string _model , int _NoOfTire)
//     {
//         cout<<"i am inside vehicle : "<<endl;
//         this->name=_name;
//         this->model=_model;
//         this->NoOfTire=_NoOfTire;

//     }

//     public:
//     void start_engine()
//     {
//         cout<<"engine is starting : "<<name<<endl;
//     }
//     void stop_engine()
//     {
//         cout << " engine is stoping : "<<name<<endl;
//     }
    
// };


// class car : public vehicle
// {
//     public:
//    int NumberOfDoor;
//    string TransmissionType;

//    car(string _name , string _model , int _NoOfTire , int _NumberOfDoor, string _TransmissionType):vehicle(_name ,_model,_NoOfTire) 
//    {
//     cout<<" i am inside car : "<<endl;
//     this->NumberOfDoor=_NumberOfDoor;
//     this->TransmissionType=_TransmissionType;

//    }


//    public:
//    void AConAndOf()
//    {
//      cout<<" AConAndOf function : "<<getname()<<endl;
//    }



// };




// int main(){

//    car Alpha("Kia seltos" , " X-line varient" , 4 , 4 , "AMT(Automated Manual Transmission)");
//     Alpha.start_engine();
//     Alpha.AConAndOf();
//     Alpha.stop_engine();
//     //Alpha.getname();
//     cout<<Alpha.getname()<<endl;
//     cout<<Alpha.model<<endl;
//     cout<<Alpha.NoOfTire<<endl;
//     cout<<Alpha.NumberOfDoor<<endl;
//     cout<<Alpha.TransmissionType<<endl;





//     return 0;
// }







////////////////////////for protected entity access-----------------------
// #include<iostream>
// #include<string>

// using namespace std;


// class vehicle{

//     protected:
//     string name;
//     public:
//     string model;
//     int NoOfTire;

//     string getname() {
//      return this->name;
//     }


//     vehicle(string _name , string _model , int _NoOfTire)
//     {
//         cout<<"i am inside vehicle : "<<endl;
//         this->name=_name;
//         this->model=_model;
//         this->NoOfTire=_NoOfTire;

//     }

//     public:
//     void start_engine()
//     {
//         cout<<"engine is starting : "<<name<<endl;
//     }
//     void stop_engine()
//     {
//         cout << " engine is stoping : "<<name<<endl;
//     }
    
// };


// class car : public vehicle
// {
//     public:
//    int NumberOfDoor;
//    string TransmissionType;

//    car(string _name , string _model , int _NoOfTire , int _NumberOfDoor, string _TransmissionType):vehicle(_name ,_model,_NoOfTire) 
//    {
//     cout<<" i am inside car : "<<endl;
//     this->NumberOfDoor=_NumberOfDoor;
//     this->TransmissionType=_TransmissionType;

//    }


//    public:
//    void AConAndOf()
//    {
//      //cout<<" AConAndOf function : "<<getname()<<endl;
//      cout<<" AConAndOf function : "<<name<<endl;
//    }



// };




// int main(){

//    car Alpha("Kia seltos" , " X-line varient" , 4 , 4 , "AMT(Automated Manual Transmission)");
//     Alpha.start_engine();
//     Alpha.AConAndOf();
//     Alpha.stop_engine();
//     //Alpha.getname();
//     cout<<Alpha.getname()<<endl;
//     //cout<<Alpha.name<<endl;-----------not accesseble in main function bcz protected inherit(public) only for chinld class not for main function
//     cout<<Alpha.model<<endl;
//     cout<<Alpha.NoOfTire<<endl;
//     cout<<Alpha.NumberOfDoor<<endl;
//     cout<<Alpha.TransmissionType<<endl;





//     return 0;
// }










//////////////////if vehicle ko car class mai private krde to sab priavte ho jaoge public ke baad bhi or main mai access nii ho paigi
// #include<iostream>
// #include<string>

// using namespace std;


// class vehicle{

//     protected:
//     string name;
//     public:
//     string model;
//     int NoOfTire;

//     string getname() {
//      return this->name;
//     }


//     vehicle(string _name , string _model , int _NoOfTire)
//     {
//         cout<<"i am inside vehicle : "<<endl;
//         this->name=_name;
//         this->model=_model;
//         this->NoOfTire=_NoOfTire;

//     }

//     public:
//     void start_engine()
//     {
//         cout<<"engine is starting : "<<name<<endl;
//     }
//     void stop_engine()
//     {
//         cout << " engine is stoping : "<<name<<endl;
//     }
    
// };


// class car : private vehicle
// {
//     public:
//    int NumberOfDoor;
//    string TransmissionType;

//    car(string _name , string _model , int _NoOfTire , int _NumberOfDoor, string _TransmissionType):vehicle(_name ,_model,_NoOfTire) 
//    {
//     cout<<" i am inside car : "<<endl;
//     this->NumberOfDoor=_NumberOfDoor;
//     this->TransmissionType=_TransmissionType;

//    }


//    public:
//    void AConAndOf()
//    {
//      //cout<<" AConAndOf function : "<<getname()<<endl;
//      cout<<" AConAndOf function : "<<name<<endl;
//    }



// };




// int main(){

//    car Alpha("Kia seltos" , " X-line varient" , 4 , 4 , "AMT(Automated Manual Transmission)");
//    // Alpha.start_engine();-------------not accessble---------->
//     Alpha.AConAndOf();
//    // Alpha.stop_engine();-------------not accessble---------->
//     //Alpha.getname();
//     //cout<<Alpha.getname()<<endl;-------------not accessble---------->
//     //cout<<Alpha.name<<endl;-----------not accesseble in main function bcz protected inherit(public) only for chinld class not for main function
//    // cout<<Alpha.model<<endl;-------------not accessble---------->
//    // cout<<Alpha.NoOfTire<<endl;
//     cout<<Alpha.NumberOfDoor<<endl;
//     cout<<Alpha.TransmissionType<<endl;





//     return 0;
// }










#include<iostream>
#include<string>

using namespace std;


class vehicle{

    public:
    string name;
    string model;
    int NoOfTire;


    vehicle(string _name , string _model , int _NoOfTire)
    {
        cout<<"i am inside vehicle : "<<endl;
        this->name=_name;
        this->model=_model;
        this->NoOfTire=_NoOfTire;

    }

    public:
    void start_engine()
    {
        cout<<"engine is starting : "<<name<<endl;
    }
    void stop_engine()
    {
        cout << "engine is stoping : "<<name<<endl;
    }
    
    ~vehicle(){
        cout<<"i am the distructor of veehicle : "<<endl;

    }
    
};


class car : public vehicle
{
    public:
   int NumberOfDoor;
   string TransmissionType;

   car(string _name , string _model , int _NoOfTire , int _NumberOfDoor, string _TransmissionType):vehicle(_name ,_model,_NoOfTire) 
   {
    cout<<"i am inside car : "<<endl;
    this->NumberOfDoor=_NumberOfDoor;
    this->TransmissionType=_TransmissionType;

   }


   public:
   void AConAndOf()
   {
     cout<<"AConAndOf function : "<<name<<endl;
   }

~car(){
        cout<<"i am the distructor of car : "<<endl;

    }

};


class motercycle : public vehicle{
    public:
    string handlebarstyle;
    string suspensiontype;

   motercycle (string _name , string _model , int _NoOfTire ,  string _handlebarstyle , string _suspensiontype):vehicle(_name ,_model,_NoOfTire) 
   {
          cout<<"i am on the bike : "<<endl;
          this->handlebarstyle=_handlebarstyle;
          this->suspensiontype=_suspensiontype;
    }

    void welly(){
        cout<<"bike se kr raha h : "<<endl;
        
    }


    ~motercycle(){
        cout<<"i am the distructor of motercycle : "<<endl;

    }
};


int main(){

   car Alpha("Kia seltos" , " X-line varient" , 4 , 4 , "AMT(Automated Manual Transmission)");
    Alpha.start_engine();
    Alpha.AConAndOf();
    Alpha.stop_engine();
    
    cout<<endl;
    cout<<endl;
    cout<<"\n===== CAR DETAILS =====\n";
     cout<<endl;

cout<<"Name             : "<<Alpha.name<<endl;
cout<<"Model            : "<<Alpha.model<<endl;
cout<<"No Of Tires      : "<<Alpha.NoOfTire<<endl;
cout<<"No Of Doors      : "<<Alpha.NumberOfDoor<<endl;
cout<<"Transmission     : "<<Alpha.TransmissionType<<endl;


cout<<endl;
cout<<endl;
cout<<endl;


    motercycle beta("NINJA" , "H2R" , 2 , "barstyle" , "telescopic front forks");
beta.start_engine();
beta.welly();
beta.stop_engine();

cout<<endl;
cout<<endl;
  cout<<"\n===== BIKE DETAILS =====\n";
     cout<<endl;

cout<<"Name             : "<<beta.name<<endl;
cout<<"Model            : "<<beta.model<<endl;
cout<<"No Of Tires      : "<<beta.NoOfTire<<endl;
cout<<"Handlebar Style  : "<<beta.handlebarstyle<<endl;
cout<<"Suspension Type  : "<<beta.suspensiontype<<endl;
cout<<endl;





    return 0;
}

