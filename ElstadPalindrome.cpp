#include<iostream>
#include<cstring>
using namespace std;
//John Elstad Palindrome Checking thing. 9/15/16

int main(){
  char input[81];
  cout<<"input a word or sentence to see if it is a palindrome."<<endl;
  cin.getline(input,81);
  cout<<input<<endl;
  int length=0;
  char output[81];
  //gets rid of spaces/punctuation and makes an output char array
  for(int i=0; i<81; i++){

    if(input[i]=='\0'){
      i=85;
      output[length]='\0';
    }
    if(isalpha(input[i])){
      output[length]=input[i];
      length++;
    }
  }
  cout<<"length is"<<length<<endl;
  int outputLength = 0;
  //random thing that gets the input length
  while(output[outputLength] != '\0'){
    outputLength++;
  }
  //creates a backwards string
  char backwards[81];
  cout<<"output size is:"<<outputLength<<endl;
  cout<<output<<endl;
  for(int j; j < outputLength; j++){
    backwards[j]=output[outputLength-1-j];
    cout<<"this is backwards"<<backwards<<endl;
  }
  
  //if the string is not the same it says its not a palindrome
  if(strcmp(output,backwards)){
    cout<<"this is not a pali"<<endl;
  }
  //if the string is the same it says it is a palindrome
  else{
    cout<<"This is a palindrome"<<endl;
  }
    
  cout<<output<<"-"<<backwards<<endl;
}

