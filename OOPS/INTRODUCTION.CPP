 #include <iostream>
 #include <algorithm>
 #include <vector>
 #include <string>
 using namespace std;
 class Student {
 private:
     string gf;

// contructor cant be private 

    //   Student(){
    //    cout<<" constructor is called "<<endl;
    // }

 public:
    int id ;
    int age ;
    string name ;
    bool present ;
    int nos;


 // this variable will have size of the class 


// padding is added by the compiler and given to the variable 
// padding is decide according to the largest variable in the 

    void study ()
    {
     int a;  // this will not affect the size of the class because it will occupy the memory 
     // when this memeber function will be called 
    cout<<"studying "<<endl;
    }
    void sleep(){
     cout<<" sleeping";
    }
    void bunk(){
       cout<<" bunk mar lia "<<endl;
    }

    void gfchatting()
    {
        cout<<"meri gf meri marzi"<<endl;
    }

    // getter seter
  void setgfname (string gf ){
    this->gf=gf;
  }
    string getgfname() {
         return gf;
    }
       
    
// default constructor
     Student(){
       cout<<"default constructor is called "<<endl;
    }

    // this is a pointer that points at current object  privately 
// parameterized constructor 
    Student(int id ,int age, string name ,int nos ,bool present ,string gf){
        this->age=age;
        this->id=id;
        this->name=name;
        this->nos=nos;
        this->present=present;
        this->gf=gf;
     cout<<"parameterized constructor is called "<<endl;

    }
   // copy ctor by default compiler make copy contructor 
   // but it is good practice to declare copy ctor 

Student (const Student &srcObj){
    // const because now the values cant be changed 
    this->name=srcObj.name;
     this->age=srcObj.age;
     this->gf=srcObj.gf;
     this->nos=srcObj.nos;
     this->present=srcObj.present;
     this->id=srcObj.id;
      cout<<"copy constructor is called "<<endl;

}
~Student(){
    cout<<"destructor is called "<<endl;

}
   
 };
 int main () {

    // when no constructor is declared compiler automatically assings the constructor 


//  cout<<sizeof(Student)<<endl; // empty class will have size as 1 only variables occcupy the memory not the functions
// cout<<sizeof(string)<<endl;
    // Student s1;
    // Student s2(1,12,"ansh",5,1);
    // Student *s3= new Student(2,13,"mitali",11,17);
     //heap memory allocation 


//     cout<< (*s3).name<<endl;
//     cout<<s3->name<<endl;

//  delete s3; // no leak 
// copy ctor 

//    s1.name="ansh";
//    s1.age=12;
//    s1.id=1;
//    s1.nos=5;
//    s1.present=1;
//   cout<<s1.age; // by default constructor garbage valiue assign kar deta h object ko


//  Student s5(4,56,"naman",1,"rohini");

// Student s6=s5 ; // in this step copy ctor will not be called becuase only the values are
// being copied 

//  Student s6(s5); // same 

//  cout<<s5.name<<endl;
//  cout<<s6.name<<endl;
  // in this case also default conct will be called 
  // because top to bottom read karega to 97 line ke baad ka uska malum nhi 
{
 Student s5(4,56,"naman",1,1,"rohini");
cout<<s5.name<<endl;
cout<<s5.getgfname()<<endl; 
s5.setgfname("indumati");
cout<<s5.getgfname()<<endl; 
// to accesss private memeber 
}
Student s7;
/* 
parameterized constructor is called 
naman
destructor is called
default constructor is called
destructor is called
*/



 return 0;
   }