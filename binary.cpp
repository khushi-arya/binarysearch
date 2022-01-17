#include<iostream>
using namespace std;
int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = (low + high) / 2;

    if (array[mid] == x)
      cout<<"u r entered key is found at index: \n"<<mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}
int main(){ 
   int n,i;
   cout<<"enter the size of array: \n";
   cin>>n;
   int arr[n];
   cout<<"enter the elements of array: \n";
   for(i=0;i<=n;i++){
       cin>>arr[i];
   }
   cout<<"u have entered: \n";
   for(i=0;i<=n;i++){
       cout<<"arr["<<i<<" "<<"] = ";
       cout<<arr[i]<<"  \n";
   }
   //binary search
   int key;
   cout<<"enter a key to find index: \n";
   cin>>key;
  int index=binarySearch( arr, key, arr[0], arr[n-1]);
   return 0;
}