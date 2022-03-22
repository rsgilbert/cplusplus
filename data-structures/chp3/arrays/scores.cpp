#include <iostream>
#include "game-entry.cpp"

using namespace std;

class Scores
{
public:
    Scores(int maxEnt = 10);
    ~Scores();
    void add(const GameEntry& e);
    GameEntry remove(int i) throw(IndexOutOfBounds);
private:
    int maxEntries;
    int numEntries;
    GameEntry *entries; // array of game entries
}

int main()
{
    
}