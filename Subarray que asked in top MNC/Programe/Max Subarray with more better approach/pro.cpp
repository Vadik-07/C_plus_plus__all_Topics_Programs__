# include<iostream>
# include<climits>
using namespace std;
int main(){

int n;
cout<<"Enter Your number of Elements : ";
cin>>n;

cout<<"Enter your Array : ";
int arr[n];
for(int i=0; i<n; i++){
  cin>>arr[i];
}

int currentsum = 0;
int maxsum = INT_MIN;
for(int i=0; i<n; i++){
  currentsum = currentsum + arr[i];
  if(currentsum < 0){
    currentsum = 0;
}

  maxsum = max(maxsum, currentsum);
}
cout<<maxsum<<endl;

return 0;
}