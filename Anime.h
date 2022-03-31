#ifndef Anime_h
#define Anime_h
#include <string>
using namespace std;

class Anime
{
    private:
        string name;
        float score;
        string recomendation;
          
    public:

        Anime(string name, float score, string recomendation)
        {
            this->name = name;
            this->score = score;
            this->recomendation = recomendation;
        } 

        Anime()
        {

        }

        string getName()
        {
            return this->name;
        }

        float getScore()
        {
            return this->score;
        }
        string getRecomendation()
        {
            return this->recomendation;
        }

        void printAnime()
        {
            cout<<"\n"<<getName()<<endl;
            cout<<getScore()<<endl;
            cout<<getRecomendation()<<"\n"<<endl;
        }
};















#endif