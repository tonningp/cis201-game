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

void fill(std::vector<Card> &deck)
{
    char suit[] = {'C','D','H','S'};
    char rank[] = {'2','3','4','5','6','7','8','9','T','J','Q','K','A'};

    for(int i = 0;i < 4;i++)
        for(int j=0;j < 13;j++)
            deck.push_back(Card(rank[j],suit[i]));
}


void print(std::vector<Card> &c)
{
    for(int i=0;i<c.size();i++)
    {
        if(i && i%13 == 0)
            std::cout << std::endl;
        std::cout << c[i].to_string() << ' ';
   }
   std::cout << std::endl;
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

