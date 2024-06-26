//
// Created by andre on 06.06.2024.
//

#include "BankAccount.h"
#include <random>
#include <iostream>

#include <algorithm>


//TODO Ausgabe, Zinsenberechnen
BankAccount::BankAccount() {
    int newIBAN = 0;
    do {
        std::random_device device;
        std::mt19937 generator(device());
        std::uniform_int_distribution<int> dist(100000, 999999);
        newIBAN = dist(generator);
    } while (IBANGen::isUsed(newIBAN) && newIBAN > 100000 && newIBAN < 999999);
    // } while (IBANGen::isUsedSTL(newIBAN) && newIBAN > 100000 && newIBAN < 999999);

    this->IBAN = newIBAN;
    IBANGen::add(newIBAN);
    // IBANGen::addSTL(newIBAN);
}

bool BankAccount::isOverdrawn() const {
    return overdrawn;
}

void BankAccount::in(double amount) {
    this->moneyMoneyCash += abs(amount);
}

void BankAccount::out(double amount) {
    amount = abs(amount);
    if (amount > moneyMoneyCash)this->overdrawn = true;
    this->moneyMoneyCash -= amount;
}

int BankAccount::getIban() const {
    return IBAN;
}

double BankAccount::getMoneyMoneyCash() const {
    return moneyMoneyCash;
}

const double BankAccount::getIdleMoneyMakingFactor() {
    return idleMoneyMakingFactor;
}

const int BankAccount::getBlz() {
    return BLZ;
}





std::vector<int> IBANGen::usedVectors = std::vector<int>();

//search for used IBAN using binary search
bool IBANGen::isUsed(int IBAN) {
    int low = 0, high = (int) IBANGen::usedVectors.size();
    int mid = (low + high) / 2;
    while (low <= high && !IBANGen::usedVectors.empty()) {
        if (IBAN < usedVectors[mid]) {
            high = --mid;
        } else if (IBAN > usedVectors[mid]) {
            low = ++mid;
        } else if (IBAN == usedVectors[mid]) {
            return true;
        }
        mid = (low + high) / 2;
    }
    return false;
}
void bubbleSort(std::vector<int> &v, int start, int end) {
    bool swapped = true;
    for (int i = start; i < end && swapped; ++i) {
        swapped = false;
        for (int j = start; j < end-1-i; ++j) {
            if (v[j+1] < v[j]) {
                std::swap(v[j],v[j+1]);
                swapped = true;
            }
        }
    }
}

//add iban to used vectors and sort it
void IBANGen::add(int IBAN) {
    IBANGen::usedVectors.push_back(IBAN);
    bubbleSort(IBANGen::usedVectors, 0, IBANGen::usedVectors.size());
}

//search for IBAN using STL
bool IBANGen::isUsedSTL(int IBAN) {
    //find searches for the element in the vector and returns an iterator to the element if it is found
    return std::find(IBANGen::usedVectors.begin(), IBANGen::usedVectors.end(), IBAN) != IBANGen::usedVectors.end();

}
//add iban to used vectors and sort it with STL
void IBANGen::addSTL(int IBAN) {
    IBANGen::usedVectors.push_back(IBAN);
    std::sort(IBANGen::usedVectors.begin(), IBANGen::usedVectors.end());
}



int main() {
    BankAccount account1;
    BankAccount account2;
    BankAccount account3;

    for (int & iban : IBANGen::usedVectors) {
        std::cout << "Iban: " << iban << std::endl;
    }

    return 0;
}

