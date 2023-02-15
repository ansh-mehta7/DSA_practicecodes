 #include <iostream >
 using namespace std ;
  int main (){
     int n ;
      cin >>n ;
      for(int i=1;i<=2*n-1;i++){
        
        int space =i<=n ?n-i:i-n ;
        for ( int k =1 ;k<=space ;k++){
             cout<<" ";
        }
        int noofcols= i<=n?i:2*n-i;
         for ( int j=noofcols;j >=1;j--){
            cout<<j;
         }

         int z= i<=n?z=i:z=2*n-i;
         for (  int k=2;k<=z ;k++){
             cout<<k;

         }
         cout<<"\n";
      }
return 0;
  }  
  #include <iostream>
  using namespace std ;
  int main (){
     int n;
      cin>>n;
      
       for (int i=1;i<=n;i++){
          
         
        for (int j=1;j<=i;j++){
         if(j%2==1){
            cout<<1;
         }
         else {
            cout<<0;
         }
         
         }
       
        cout<<endl;
        
  }
       return 0;
  }
  