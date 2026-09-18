/// 1--->FINAL keyword prevent class inheritance 
////2--->FINAL keyword prevrnt virtual funcyion ovverding
#include<iostream>
#include<string>

using namespace std;

class shape /*final*/{
    public:
    virtual void draw() /////when vertual call ---------------------
    {
        cout<<"generic shape : "<<endl;

    }
};

class circle : public shape {
    public:
    void draw() override
    {
     cout<<" draw the chape of circle : "<<endl;
    }
};

class rectangle : public shape {
    public:
    void draw() override
    {
     cout<<" draw the chape of rectangle : "<<endl;
    }
};

class triangle : public shape {
    public:
    void draw() override
    {
     cout<<" draw the chape of triangle : "<<endl;
    }
};

class parallelogram : public shape {
    public:
    void draw() override
    {
     cout<<" draw the chape of parallelogram : "<<endl;
    }
};

class rhombus  : public shape {
    public:
    void draw() override
    {
     cout<<" draw the chape of rhombus  : "<<endl;
    }
};


void shapeDrawing(shape *s){
    s->draw();
    
}




int main(){


   circle c;
  shapeDrawing(&c);



   rectangle *r = new rectangle();
   shapeDrawing(r);



   triangle t;
   shapeDrawing(&t);



   parallelogram *p = new parallelogram();
   shapeDrawing(&(*p));




   rhombus *R = new rhombus();
   shapeDrawing(*&R);








    return 0;
}

