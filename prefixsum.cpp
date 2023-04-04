#include <iostream>
using namespace std;
#include <vector>
void processingfunc(vector<int> &v)
{
  vector<int> prefsum(v.size());
  prefsum[0] = v[0];

  for (int i = 1; i < v.size(); i++)
  {

    prefsum[i] = v[i] + prefsum[i - 1];
  }
  for (int i = 0; i < prefsum.size(); i++)
  {

    cout << prefsum[i] << "\t";
  }
}
int main()
{

  int n;
  cin >> n;
  vector<int> takeinput(n);
  for (int i = 0; i < takeinput.size(); i++)
  {
    cin >> takeinput[i];
  }
  processingfunc(takeinput);
}
// without creating another vector 

#include <iostream>
using namespace std;
#include <vector>
void processingfunc(vector<int> &v)
{

  for (int i = 1; i < v.size(); i++)
  {

    v[i] = v[i] + v[i - 1];
  }
  for (int i = 0; i < v.size(); i++)
  {

    cout << v[i] << "\t";
  }
}
int main()
{

  int n;
  cin >> n;
  vector<int> takeinput(n);
  for (int i = 0; i < takeinput.size(); i++)
  {
    cin >> takeinput[i];
  }
  processingfunc(takeinput);
}


#include <iostream>
using namespace std;
#include<vector>
bool prefequalsuffix(vector<int>&v){
 int sum=0;
for (int i=0;i<v.size();i++){
   sum=sum+v[i];

}

   int prefsum=0;

  for (int i = 1; i < v.size(); i++)
  {
int sufsum=0;
    prefsum = v[i] + prefsum;
  sufsum=sum-prefsum[i];
if(sufsum==prefsum[i]){
  return true;
}
  }

return false ;
}

int main () {
  int n;
   cin>>n ;
    vector<int> input(n);
    for (int i=0;i<input.size();i++){
      cin>>input[i];
    }
    int x=prefequalsuffix(input);
    if (x==1){
cout<<"true\n";

    }
    else {
      cout<<"false ";
    }
return 0;
  }
  
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
cout<< " is "<<sum<<endl;

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
 // by prefix sum approach 