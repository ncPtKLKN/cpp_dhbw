#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <vector>

class BankAccount {

public:
    BankAccount();


    bool isOverdrawn() const;
    void in(double amount);
    void out(double amount);
    int getIban() const;
    double getMoneyMoneyCash() const;
    const double getIdleMoneyMakingFactor();
    const int getBlz();

private:
    int IBAN;
    double moneyMoneyCash;
    bool overdrawn;
    const double idleMoneyMakingFactor = 0.01;
    const int BLZ = 12345678;
};


class IBANGen {
public:
    static bool isUsed(int IBAN);
    static void add(int IBAN);
    
    static bool isUsedSTL(int IBAN);
    static void addSTL(int IBAN);

    static std::vector<int> usedVectors;

};



#endif //!BANKACCOUNT_HPP"