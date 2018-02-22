//Author: Daniel Gin
#include<iostream>
#include<string>
using namespace std;


int main()
{
  string something;
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  do 
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  
  if (numItems > 4)
  {
  cout<<"You'll need a bigger list!\n";
  }

  else if (input == 'A' || input == 'a')
  {
  cout<<"What is the item?\n";
  cin>> something;
  list[numItems] = something;
  numItems++;
  }

 }while (!(input == 'Q' || input == 'q'));
  
  return 0;
}
