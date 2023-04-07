#include <iostream>
using namespace std;

void selectionSort(int arr[], int length){
  int temp;
  int loc_min;

  for(int i = 0; i < length; i++){
    loc_min = i;
    for (int j = i; j < length; j++){
      if (arr[j] < arr[loc_min]){
       loc_min = j;
     }
   }
   temp = arr[i];
   arr[i] = arr[loc_min];
   arr[loc_min] = temp;
  } 
}
void printArray(int arr[],int length){
  for (int i= 0; i < length; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int angka[100] = {wn,win};
  cout << "sebelum sort : ";
  printArray(angka,100);
  selectionSort(angka,100;
  cout << "sesudah sort : ";
  printArray(angka,100);

  return 0;
}