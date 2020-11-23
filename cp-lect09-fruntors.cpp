#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Car
{
    int id;
    int x;
    int y;
public:
    Car(int id, int x, int y)
    {
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int dist()
    {
        return x * x + y * y;
    }
    void show() {
        // cout<<"id:" << id << ", x:" << x << ", y:" << y << endl ;
        cout << "(" << x << ", " << y << ")" << endl;
    }
};


/*
class CarCompare{
    public:
    void operator()(){
        cout<< "This is overloaded() with no parameter " << endl;
    }
    void operator()(int a, int b){
        cout<< "Addition : "<< (a+b)<< endl;
    }
};
*/


class CarCompare {
public:
    bool operator()(Car a, Car b) {
        return a.dist() > b.dist();
    }
};

int main()
{

    /*
    CarCompare cc;
    cc();
    cc(4, 5);
    */



    // minHeap using user defined comparator called functors
    priority_queue < Car, vector<Car>, CarCompare> mpq; // minHeap Priority Queue
    // priority_queue <Car> mpq;
    int x[] = {5, 6, 2, 8, 9, 1, 10};
    int y[] = {0, 2, 3, 6, 8, 6, 3};


    int size = sizeof(x) / sizeof(x[0]);

    for (int i = 0; i < size; i++)
    {
        Car c(i, x[i], y[i]);
        mpq.push(c);
    }

    // for(int i=0; i<size; i++)
    // {
    //     mpq[i].show();
    // }

    int firsts = 3;
    while (mpq.empty() == 0 && firsts--)
    {
        Car toq = mpq.top();
        mpq.pop();
        toq.show();
    }




}