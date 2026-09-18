// // ///////////////////////no virtual calls && for early binding------------
// #include<iostream>
// #include<string>

// using namespace std;

// class shape{
//     public:
//     void draw() /////when no vertual call ---------------------
//     {
//         cout<<"generic shape : "<<endl;

//     }
// };

// class circle : public shape {
//     public:
//     void draw(){
//      cout<<" draw the chape of circle : "<<endl;
//     }
// };

// class rectangle : public shape {
//     public:
//     void draw(){
//      cout<<" draw the chape of rectangle : "<<endl;
//     }
// };

// class triangle : public shape {
//     public:
//     void draw(){
//      cout<<" draw the chape of triangle : "<<endl;
//     }
// };

// class parallelogram : public shape {
//     public:
//     void draw(){
//      cout<<" draw the chape of parallelogram : "<<endl;
//     }
// };

// class rhombus  : public shape {
//     public:
//     void draw(){
//      cout<<" draw the chape of rhombus  : "<<endl;
//     }
// };

// /// here if we want to draw all shape the code is become overy lengthy
// void shapeDrawing(shape *s){
//     s->draw();
    
// }
// // void shapeDrawing(circle *c){
// //     c->draw();
    
// // }
// // void shapeDrawing(rectangle *r){
// //     r->draw();
    
// // }
// // void shapeDrawing(triangle *t){
// //     t->draw();
    
// // }
// // void shapeDrawing(parallelogram *p){
// //     p->draw();
    
// // }
// // void shapeDrawing(rhombus *R){
// //     R->draw();
    
// // }




// int main(){


//    circle c;
//   shapeDrawing(&c);



//    rectangle *r = new rectangle();
//    shapeDrawing(r);



//    triangle t;
//    shapeDrawing(&t);



//    parallelogram *p = new parallelogram();
//    shapeDrawing(&(*p));




//    rhombus *R = new rhombus();
//    shapeDrawing(*&R);




//     return 0;
// }








///////////////////////whenn   virtual  calls && for late binding--------------------

// #include<iostream>
// #include<string>

// using namespace std;

// class shape{
//     public:
//     virtual void draw() /////when vertual call ---------------------
//     {
//         cout<<"generic shape : "<<endl;

//     }
// };

// class circle : public shape {
//     public:
//     void draw() override
//     {
//      cout<<" draw the chape of circle : "<<endl;
//     }
// };

// class rectangle : public shape {
//     public:
//     void draw() override
//     {
//      cout<<" draw the chape of rectangle : "<<endl;
//     }
// };

// class triangle : public shape {
//     public:
//     void draw() override
//     {
//      cout<<" draw the chape of triangle : "<<endl;
//     }
// };

// class parallelogram : public shape {
//     public:
//     void draw() override
//     {
//      cout<<" draw the chape of parallelogram : "<<endl;
//     }
// };

// class rhombus  : public shape {
//     public:
//     void draw() override
//     {
//      cout<<" draw the chape of rhombus  : "<<endl;
//     }
// };


// void shapeDrawing(shape *s){
//     s->draw();
    
// }




// int main(){


//    circle c;
//   shapeDrawing(&c);



//    rectangle *r = new rectangle();
//    shapeDrawing(r);



//    triangle t;
//    shapeDrawing(&t);



//    parallelogram *p = new parallelogram();
//    shapeDrawing(&(*p));




//    rhombus *R = new rhombus();
//    shapeDrawing(*&R);








//     return 0;
// }







#include<iostream>
#include<string>

using namespace std;

class shape{
    public:
    // void draw() /////when no vertual call ---------------------
    virtual void draw() /////when  vertual call ---------------------
    {
        cout<<"generic shape : "<<endl;

    }
};

class circle : public shape {
    public:
    void draw() 
    {
     cout<<"draw the chape of circle : "<<endl;
    }
};

class rectangle : public shape {
    public:
    void draw()
    {
     cout<<"draw the chape of rectangle : "<<endl;
    }
};

class triangle : public shape {
    public:
    void draw()
    {
     cout<<"draw the chape of triangle : "<<endl;
    }
};

class parallelogram : public shape {
    public:
    void draw() 
    {
     cout<<"draw the chape of parallelogram : "<<endl;
    }
};

class rhombus  : public shape {
    public:
    void draw() 
    {
     cout<<"draw the chape of rhombus  : "<<endl;
    }
};


void shapeDrawing(shape *s){
    s->draw();
    
}




int main(){





// when no virtual keyword

    /////UPCASTING-----------------------
     shape *s = new shape();
     s->draw();

     shape *s1 = new circle();
     s1->draw();

      //////DOWNCASTING---------------------
     shape *s2 = new shape();
     circle *c1 = (circle*)s2;
     c1->draw();
     
    //-----------------------------------------------
     circle *c = new circle();
     c->draw();
     
     shape *s3 = new shape();
     rectangle *r2 = (rectangle*)s3;
     r2->draw();

     //--------------------------------------
     rectangle *r = new rectangle();
     r->draw();

     shape *s4= new shape();
     triangle *t2 = (triangle*)s4;
     t2->draw();


     //------------------------------------------
     triangle *t = new triangle();
     t->draw();

     shape *s5 = new shape();
     parallelogram *p2 = (parallelogram*)s5;
     p2->draw();

     parallelogram *p = new parallelogram();
     p->draw();

     ///--------------------------------

      shape *s6 = new shape();
     rhombus *R2 = (rhombus*)s6;
     R2->draw();

     rhombus *R = new rhombus();
     R->draw();


    return 0;
}