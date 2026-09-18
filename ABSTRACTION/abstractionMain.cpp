#include<iostream>
#include "bird.h"
using namespace std;

void birdDoesSomething(bird *&bird){
      bird->eat();
      bird->fly();
}
void birdDoesSomething2(bird *&bird2){
      bird2->eat();
      bird2->fly();
}
void birdDoesSomething3(bird *&bird3){
      bird3->eat();
      bird3->fly();
}

int main(){

     bird *b1 = new sparrow();
     birdDoesSomething(b1);


    bird *b2 = new eagle();
    birdDoesSomething2(b2);


    bird *b3 = new pigen();
    birdDoesSomething3(b3);



    return 0;
}