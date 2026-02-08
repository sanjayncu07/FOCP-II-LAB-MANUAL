#include <iostream>
using namespace std;

class Game {
    int s1, s2, s3;
public:
    void inputScores() {
        cout << "Enter the score of player 1:\n";
        cin >> s1;
        cout << "Enter the score of player 2:\n";
        cin >> s2;
        cout << "Enter the score of player 3:\n";
        cin >> s3;
    }
    void displayHighest() {
        if (s1 > s2 && s1 > s3) {
            cout << "Player 1 has high score\n";
        } else if (s2 > s1 && s2 > s3) {
            cout << "Player 2 has high score\n";
        } else {
            cout << "Player 3 has highest score\n";
        }
    }
};

int main() {
    Game g;
    g.inputScores();
    g.displayHighest();
    return 0;
}
