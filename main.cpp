#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>

#include "card.h"
#include "deck.h"


void shuffle(std::vector<Card> &deck)
{
    int endpos = deck.size() - 1;
    for(int i=0;i<deck.size();i++)
    {
        int bpos = random() % endpos;
        if(bpos != i)
            std::swap(deck[i],deck[bpos]);
    }
}


void fill(std::vector<int> &v,int amount)
{
    for(int i=0;i<amount;i++)
        v.push_back(i);
}

void fill(std::vector<Card> &deck)
{
    char suit[] = {'C','D','H','S'};
    char rank[] = {'A','2','3','4','5','6','7','8','9','0','J','Q','K'};

    for(int i = 0;i < 4;i++)
        for(int j=0;j < 13;j++)
            deck.push_back(Card(rank[j],suit[i]));
}

void print(std::vector<int> &v)
{
    for(int i=0;i<v.size();i++)
        std::cout << v[i] << ' ';
    std::cout << std::endl;
}

void print(std::vector<Card> &c)
{
    for(int i=0;i<c.size();i++)
    {
        std::cout << c[i].to_string() << ' ';
        if(i && i%10 == 0)
            std::cout << std::endl;
   }
    std::cout << std::endl;
}

int main()
{
    srand(time(0));
    std::vector<Card> deck;
    fill(deck);
    print(deck);
    shuffle(deck);
    print(deck);
    return 0;
}

