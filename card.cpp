#include "card.h"

Card::Card(char rank,char suit) {m_rank = rank;m_suit = suit;}
std::string Card::to_string() {return std::string("") + m_rank + ":" + m_suit;}
