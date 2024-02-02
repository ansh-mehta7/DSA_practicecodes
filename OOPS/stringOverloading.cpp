#include<iostream>
#include<string.h>
using namespace std;
class AddString{

    private:
    string str;
    
    public :
    // getter
    string getString()
    {
    return str;
    }
    // setter
    void setString ( string name ){
        // strcpy(str,name);
        str=name;
    }
    // string overloading 
    AddString operator+( AddString &src){
          AddString s3;
        //   strcat(str,src.str);
        //   strcpy(s3.str,str);
        s3.str=str+src.str;
          return s3;
        
    }

};
int main () {
    AddString s1,s2;
    s1.setString("ansh");
    cout<<s1.getString()<<endl;
    s2.setString("mehta");
    cout<<s2.getString()<<endl;
    AddString s3=s1+s2;
    cout<<s3.getString()<<endl;
  
return 0;
  }

// #include <iostream>
// using namespace std;

// class Complex {
//   private:
//     int real, imag;
//   public:
//     Complex(int r = 0, int i = 0) {
//         real = r;
//         imag = i;
//     }
//     Complex operator + (Complex &c) {
//         Complex temp;
//         temp.real = real + c.real;
//         temp.imag = imag + c.imag;
//         return temp;
//     }
    
//     int getReal(){
//         return real;
//     }
    
//     int getImag(){
//         return imag;
//     }
// };

// int main() {
//     Complex c1(4, 7);
//     Complex c2(3, 5);
//     Complex res;
//     res = c1 + c2;

//     cout << "Result: " << res.getReal() << " + " << res.getImag() << "i" << endl;

//     return 0;
// }

//output Result: 7 + 12i
