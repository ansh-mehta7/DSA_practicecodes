// function ko call hi na kro  inline bna do taaki styack me jaae hi na vo function
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// jab bhi compiler compile krega 
inline void numShow(int num)
{
    cout << num << endl;
}
int main()
{
    // cout << num << endl;  inline se function is replaced 
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    return 0;
}
// 1. An inline function is a regular function that is defined by the inline keyword.
// 2. The code for an inline function is inserted directly into the code of the calling function by
// compiler while compiling, which can result
// faster execution and less overhead
// compared
// to regular function calls.
// 3. Instead of calling function the statements of functions are pasted in calling function.
// 4. Used with small sized functions. So that executables are small (handled automatically by
// compiler optimisation levels).