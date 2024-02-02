#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Human
{
    private:

    int height=9;
public:
    int weight;

private:
    int age;

public:
    void setWeight(int weight)
    {

        this->weight = weight;
    }
 

    int getAge()
    {
        return this->age;
    }

    int getWeight()
    {
        return this->weight;
    }
};
class Male :public  Human{

    public :
    string color ;

    void sleep(){
cout<<"male sleeping";

    }
    int getHeight(){
        height++;
        return this->height;
    }
};


int main()
{
Male m1;

cout<<m1.getHeight();


    return 0;
}