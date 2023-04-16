
#include<bits/stdc++.h>
using namespace std;
class Car {
    public:
        string make;
        string model;
        int year;
        int speedx;
        int speedy;
        int x;
        int y;
        void accelerate(){
          int inc1;int inc2;
            cout<<"Enter increase in speed in x and y direction\n";
            cin>>inc1>>inc2;
            speedx+=inc1;speedy+=inc2;
            cout<<"New speed is "<<speedx<<" "<<speedy<<"\n";
        }
        void brake(){
          int dec1;int dec2;
            cout<<"Enter decrease in speed in x and y direction\n";
            cin>>dec1>>dec2;
            speedx-=dec1;speedy-=dec2;
            cout<<"New speed is "<<speedx<<" "<<speedy<<"\n";
        }
        void move(){
            int t;
        cout<<"Enter time for which car moves\n";cin>>t;
        x+=speedx*t;y+=speedy*t;
        cout<<"New position is "<<x<<" "<<y<<"\n";
        }
        int detect_collision(Car car2){
            if((x-car2.x)*(speedy-car2.speedy)==(y-car2.y)*(speedx-car2.speedx)){cout<<"True\n";return 1;}
        else {cout<<"False\n";return 0;}
        } 
        void time_to_collision(Car car2){
            if((x-car2.x)*(speedy-car2.speedy)==(y-car2.y)*(speedx-car2.speedx)){cout<<"Time to collision is "<<(x-car2.x)/(car2.speedx-speedx)<<"\n";}
        else {cout<<"No collision\n";}
        }
};

int main(){
Car car1;
cout<<"Enter make\n";
cin>>car1.make;
cout<<"Enter model\n";
cin>>car1.model;
cout<<"Enter year\n";
cin>>car1.year;
cout<<"Enter speed in x direction\n";
cin>>car1.speedx;
cout<<"Enter speed in y direction\n";
cin>>car1.speedy;
cout<<"Enter x coordinate\n";
cin>>car1.x;
cout<<"Enter y coordinate\n";
cin>>car1.y;
cout<<"Command key:\nexit:0\naccelerate:1\nbrake:2\nmove:3\ndetect collision:4\ntime to collision:5\n";
int task;
A:cout<<"Enter command\n";cin>>task;
while(task){
    switch(task){
        case 1:car1.accelerate();goto A;
        case 2:car1.brake();goto A;
        case 3:car1.move();goto A;
        case 4:{Car car2;
            cout<<"For car2\nEnter make\n";
cin>>car2.make;
cout<<"Enter model\n";
cin>>car2.model;
cout<<"Enter year\n";
cin>>car2.year;
cout<<"Enter speed in x direction\n";
cin>>car2.speedx;
cout<<"Enter speed in y direction\n";
cin>>car2.speedy;
cout<<"Enter x coordinate\n";
cin>>car2.x;
cout<<"Enter y coordinate\n";
cin>>car2.y;

        car1.detect_collision(car2);goto A;}
        case 5:{Car car2;
            cout<<"For car2\nEnter make\n";
cin>>car2.make;
cout<<"Enter model\n";
cin>>car2.model;
cout<<"Enter year\n";
cin>>car2.year;
cout<<"Enter speed in x direction\n";
cin>>car2.speedx;
cout<<"Enter speed in y direction\n";
cin>>car2.speedy;
cout<<"Enter x coordinate\n";
cin>>car2.x;
cout<<"Enter y coordinate\n";
cin>>car2.y;

        car1.time_to_collision(car2);goto A;}
    }
}
return 0;
}
