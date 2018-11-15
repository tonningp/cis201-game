#ifndef CARD_H
#define CARD_H

#include<string>

class Card
{
    char m_rank; // A-10 J Q K j
    char m_suit; // C:clubs D:diamonds H:hearts S:spades 
public:
    Card(char rank,char suit);
    std::string to_string();
};

#endif
