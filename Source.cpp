#include <string>
#include <sstream>
#include<iostream>

using namespace std;

std::string highestScoringWord(const std::string& str)
{
    int mostScored = 0;
    std::string mostScoredS;

    std::stringstream ss(str);
    std::string curr;
    while (ss >> curr)
    {
        int score = 0;
        for (char c : curr) score += c - 'a' + 1;

        if (score > mostScored)
        {
            mostScored = score;
            mostScoredS = curr;
        }
    }

    return mostScoredS;
}


int main()
{
    string myWord;
    myWord = highestScoringWord("word");

    cout << myWord;

    return 0;
}