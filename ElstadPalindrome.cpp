#include<iostream>
using namespace std;
//John Elstad Palindrome Checking thing. 9/15/16

int main(){
  char input[81];
  cout<<"input a word or sentence to see if it is a palindrome."<<endl;
  cin.getline(input,81);
  cout<<input<<endl;
  int length=0;
  char output[81];
  //gets rid of spaces and makes an output char array
  for(int i=0; i<81; i++){
      input[i]=toupper(input[i]);
      if(input[i]!=' '){
	output[i-length]=input[i];
      }
      else if(input[i]==' '){
	length ++;
      }
  }
  int outputLength = 0;
  while(output[outputLength] != '\0'){
    outputLength++;
  }
  cout<<"output size is:"<<outputLength<<endl;
  cout<<output<<endl;
  for(int j; j < outputLength; j++){
    if(output[j]!= output[outputLength-j]){
	cout<<"This is not a Palindrome"<<endl;
    }
      else{
	cout<<"This is a Palindrome"<<endl;
      }
  }
}

