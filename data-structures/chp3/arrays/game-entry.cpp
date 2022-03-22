#include <iostream>

using namespace std;


class GameEntry {
public:
    GameEntry(const string& n = "", int s = 0);
    int getScore() const;
private:
    string name;
    int score;
};

GameEntry::GameEntry(const string& n, int s)
    : name(n), score(s) {}

int GameEntry::getScore() const { return score; }


