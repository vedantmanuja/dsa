// method 1 (using temp array)

#include <bits/stdc++.h>
using namespace std;

int main () {
  cout<<"enter size: ";
  int n;
  cin>>n;
  
  cout<<"enter array elements: "<<endl;
  int array[n];
  for (int i=0; i<n; i++) {
    cin>>array[i];
  }
  
  cout<<"enter no. of rotations: ";
  int rotate;
  cin>>rotate;

  int temp[n]; //temporary array to store the elements
  int k=0; //variable to access custom array elements
  
  // storing the n-rotate elements of array in front of temp array
  for (int i=rotate; i<n; i++) {
    temp[k]=array[i];
    k++;
  }
  
  // storing the first rotate elements of array into temp
  for (int i=0; i<rotate; i++) {
    temp[k]=array[i];
    k++;
  }
  
  // getting the final rotated array
  for (int i=0; i<n; i++) {
    array[i]=temp[i];
  }

  // printing the rotated array
  for (int i=0; i<n; i++) {
    cout<<array[i]<<" ";
  }

  return 0;
}


// method 2 (rotate elements one by one)

#include <bits/stdc++.h>
using namespace std;

int main () {
  cout<<"enter size: ";
  int n;
  cin>>n;
  
  cout<<"enter array elements: "<<endl;
  int array[n];
  for (int i=0; i<n; i++) {
    cin>>array[i];
  }
  
  cout<<"enter no. of rotations: ";
  int rotate;
  cin>>rotate;

  for (int i=1; i<=rotate; i++) {
    int last = array[0];
    for (int i=0; i<n-1; i++) {
      array[i] = array[i+1]; // shifting elements one by one to left
    }
    array[n-1]=last;
  }

  for (int i=0; i<n; i++) {
    cout<<array[i]<<" ";
  }

  return 0;
}
