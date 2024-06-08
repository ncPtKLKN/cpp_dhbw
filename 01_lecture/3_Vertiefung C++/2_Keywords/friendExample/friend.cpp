#include <iostream>

class Friensearcher
{
public:
    Friensearcher() : m_mySecretForMyFriends(42)
    {
        std::cout << "I am a friend searcher\n";
    };
    ~Friensearcher()
    {
        std::cout << "I was a friend searcher\n";
    };

    friend class MyFriend;

private:
    int m_mySecretForMyFriends;
};

class MyFriend
{
public:
    MyFriend()
    {
        std::cout << "I will be your friend\n";
    };
    ~MyFriend()
    {
        std::cout << "I was your friend\n";
    };

    void printSecret(Friensearcher &fs)
    {
        std::cout << "--- My friend's secret is: " << fs.m_mySecretForMyFriends << "\n";
    }
};

int main()
{
    Friensearcher fs;
    MyFriend mf;

    mf.printSecret(fs);

    return 0;
}