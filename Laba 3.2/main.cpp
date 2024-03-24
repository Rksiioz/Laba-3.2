#include "RandomDeck.h"

int main() {
    SequentialDeck sequentialDeck;
    RandomDeck randomDeck;

    cout << "Sequential Deck:" << endl;
    sequentialDeck.displayDeck();
    cout << endl
         << "Random Deck:" << endl;
    randomDeck.displayDeck();
    cout << endl;

    int menu;
    do{
        cout << "[1] - Dealing a card from the sequential deck" << endl;
        cout << "[2] - Dealing a card from the random deck" << endl;
        cout << "[0] - Exit the program" << endl;
        cout << endl << endl << endl;
        cin >> menu;

        switch (menu) {
            case 1:
                cout << static_cast<string>(sequentialDeck.dealCard()) << endl << endl;
                break;
            case 2:
                cout << static_cast<string>(randomDeck.dealRandomCard()) << endl << endl;
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (menu != 0);

    return 0;
}