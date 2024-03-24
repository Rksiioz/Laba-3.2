#include <ostream>
#include "Card.h"

class DeckOfCards{
protected:
    vector<Card> cards;
public:
    virtual ~DeckOfCards()= default;

    DeckOfCards() {
        string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
        string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
        for (const string &suit : suits) {
            for (const string &rank : ranks) {
                cards.push_back(Card(rank, suit));
            }
        }
    }

    operator string (){ displayDeck();}

    void displayDeck() const {
        for (const Card &card : cards) {
            cout << static_cast<string>(card) << endl;
        }
    }

    int getNumberOfCards() const {
        return cards.size();
    }
};