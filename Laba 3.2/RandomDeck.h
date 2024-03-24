#include "SequentalDeck.h"

class RandomDeck : public DeckOfCards {
public:
    virtual ~RandomDeck(void)= default;
    RandomDeck() {
        shuffleDeck();
    }

    void shuffleDeck() {
        srand(time(nullptr));
        for (int i = 0; i < cards.size(); ++i) {
            int randomIndex = rand() % cards.size();
            swap(cards[i], cards[randomIndex]);
        }
    }

    Card dealRandomCard() {
        if (cards.empty()) {
            cerr << "Error: No cards left in the deck." << endl;
            exit(1);
        }
        int randomIndex = rand() % cards.size();
        Card randomCard = cards[randomIndex];
        cards.erase(cards.begin() + randomIndex);
        return randomCard;
    }
};