#include <iostream>
#include <string>
#include "Anime.h"

using namespace std;

int main()
{
    int dec;
    string name;
    float score;
    string recomendation;
    int loop = 0, pos = 0;

    Anime newAnime[300];

    while(loop == 0)
    {
        cout<<"\nHi Canhassi"<<endl;
        cout<<"1: See all animes"<<endl;
        cout<<"2: Add one more"<<endl;
        cout<<"3: exit"<<endl;
        cin>>dec;

        switch(dec)
        {
            case 1:
            {
                for(int i = 0; i < pos; i++)
                {
                    newAnime[i].printAnime();
                }
                break;
            };
            
            case 2:
            {
                cout<<"\nok, name: "<<endl;
                cin>>name;
                cout<<"score: "<<endl;
                cin>>score;
                cout<<"recomendation: "<<endl;
                cin>>recomendation;
                newAnime[pos] = Anime (name, score, recomendation);
                pos = pos+1;
                cout<<"\nsuccessfully added"<<endl;
                system("pause");
                break;  
            }
            
            case 3:
            {
                cout<<"\nbyee"<<endl;
                system("exit");
                return 0;
                break;
            }
        }    
    }        
            
    

   

    









   return 0;
}