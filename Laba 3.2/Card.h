#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Card {
private:
    string rank;
    string suit;
    bool faceUp;

public:
    Card(string _rank = "", string _suit = "", bool _faceUp = false) : rank(_rank), suit(_suit), faceUp(_faceUp) {}

    virtual ~Card(void)= default;

    friend ostream &operator<<(ostream &os, const Card &card) {
        os << "rank: " << card.rank << " suit: " << card.suit;
        return os;
    }

    friend istream& operator>>(istream& is, Card& card){
        cout << "Name: ";
        is >> card.rank;
        cout << "Acc#: ";
        is >> card.suit;
        return is;
    }

    operator string() const {
        return (rank + " of " + suit);
    }

    string getRank() const {
        return rank;
    }

    string getSuit() const {
        return suit;
    }

    bool isFaceUp() const {
        return faceUp;
    }

    void setRank(string _rank) {
        rank = _rank;
    }

    void setSuit(string _suit) {
        suit = _suit;
    }

    void setFaceUp(bool _faceUp) {
        faceUp = _faceUp;
    }
};
