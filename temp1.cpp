
#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int u){
    int i=l;
    int j=mid;
    int k=0;
    int temp[u+1];
    while(i<mid && j<=u);
    {
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=u){
        temp[k]=arr[j];
        k++;
        j++;
    }
    k=0;
    for(int m=l;m<=u;m++){
        arr[m]=temp[k];
        k++;
    }
    
    
    
}
void sort(int arr[],int l,int u){
    if(l<u){
        int mid = (l+u)/2;
        sort(arr,l,mid);
        sort(arr,mid+1,u);
        merge(arr,l,mid,u);
    }
}


void mergeSort(int input[], int size){
	// Write your code here
        sort(input,0,size-1);
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
