#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	
	int value[size];
	for(int i=0; i<size; i++){
		cout<<"Enter value "<<i+1<<" : ";
		cin>>value[i];
	}
	
	for(int i=0; i<size-1; i++){
		for(int j=i+1; j<size; j++){
		if(value[j] < value[i]){
		int temp = value[j];
		value[j] = value[i];
		value[i] = temp;
		}	
		}	
	}
	cout<<endl;
	cout<<"Sorted values"<<endl;
	for(int i=0; i<size; i++){
		cout<<value[i]<<" , ";
	}
}
