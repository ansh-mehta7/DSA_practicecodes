 #include <iostream>
  
  using namespace std;
  #include<vector>
    void answerqueries(vector<int>&v){
   int l ;
   int r;
    cin>>l>>r;
    int sum=0;
    // 2 4 4 5 6 
    // l=2 r=5 
    for (int i=l-1;i<r;i++){
sum=sum+v[i];

    }
cout<<sum<< " is "<<endl;

    }
  int main () {
     int n ;
      cin>>n ;
       vector<int> sample(n);
       for (int i=0;i<sample.size();i++){
         cin>>sample[i];
       }
        cout<<"enter the no of queries \n";
        int q;
        cin>>q;
while(q--)
{
 answerqueries(sample);
}
  return 0;
    }
