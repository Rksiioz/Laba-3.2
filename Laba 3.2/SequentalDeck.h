#include "DeckOfCard.h"

class SequentialDeck : public DeckOfCards {
public:
    SequentialDeck() {}
    virtual ~SequentialDeck(void)= default;

    Card dealCard() {
        if (cards.empty()) {
            cerr << "Error: No cards left in the deck." << endl;
            exit(1);
        }
        Card topCard = cards.back();
        cards.pop_back();
        return topCard;
    }
};