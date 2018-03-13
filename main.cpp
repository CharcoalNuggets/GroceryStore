//Author: Daniel Gin
#include<iostream>
#include<vector>
using namespace std;


int main()
{
        string something;
        vector<string> list; 
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

                if (input == 'A' || input == 'a')
                {
                   
                  
                        cout<<"What is the item?\n";
                        cin>> something;
                        list.push_back(something);
                        numItems++;                                          
                }
        }while (!(input == 'Q' || input == 'q'));

     if (!(numItems == 0))
     {
      cout<< "==ITEMS TO BUY==\n";

      for (int i=0; i < list.size(); i++)
      {
         cout<< i+1 << " " << list[i] <<endl;
      }
     }
     else
      {
       cout<< "No items to buy!\n";
      }
        return 0;
}
