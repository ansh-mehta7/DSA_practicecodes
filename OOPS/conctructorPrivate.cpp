#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Box
{
    int width;
    Box(int _w) : width(_w) {};

public:
    int getwidth() const
    {
        return width;
    }
    void setwidth(int val)
    {
        this->width = val;
    }
    friend class BoxFactory;
};
class BoxFactory
{

    int count;

public:
    Box getABox(int _w)
    {
        return Box(_w);
    }
};
int main()
{
    // Box b(5);
    // cout<<b.getwidth()<<endl;
    BoxFactory bfact;
    Box b = bfact.getABox(5);
    cout << b.getwidth();
    return 0;
}

// directly us clas s ka iobject to nahi ban paega

// yes constructor can be  made private
//  main me directly box ka koi object nahi ban sakte
// but another class ke throughy usko bna sakte hai


// Compile-Time and Runtime Behavior
// Compilation Stage: When the compiler processes the class definition, it only checks for syntax correctness and accessibility of functions. As long as everything is correctly declared and there's no direct call to the private constructor, no error is raised at this stage. The compiler doesn't immediately check whether you're trying to instantiate objects with a private constructor—it just makes sure the syntax is valid.

// Object Initialization: The error occurs at the point where you attempt to create an object using the private constructor (which happens in the main function). Since the constructor is marked private, direct access to it is restricted. If you try to create an object directly, like Box b(5);, the compiler will raise an error at that point, because the constructor is private and cannot be accessed from main.