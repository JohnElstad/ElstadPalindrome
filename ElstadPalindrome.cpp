#include<iostream>
using namespace std;
//John Elstad Palindrome Checking thing. 9/15/16

int main(){
  char input[81];
  cout<<"input a word or sentence to see if it is a palindrome."<<endl;
  cin.getline(input,80);
  cout<<input<<endl;
  int length=0;
  char output[81];
  for(int i=0; i<81; i++){
      input[i]=toupper(input[i]);
      if(input[i]!=' '){
	output[i-length]=input[i];
      }
      else if(input[i]==' '){
	length ++;
      }
  }
  cout<<"output"<<output<<endl;
}

