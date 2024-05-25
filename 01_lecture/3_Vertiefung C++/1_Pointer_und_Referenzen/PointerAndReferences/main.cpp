#include <iostream>

void modifyWithPointer(int* ptr) {
    if (ptr) {
        *ptr = 10; // Dereferenzieren des Pointers, um den Wert zu ändern
    }
}

void modifyWithReference(int& ref) {
    ref = 20; // Direkte Änderung des Werts über die Referenz
}

int main() {
    int a = 5;
    int b = 5;

    // Zeiger auf 'a'
    int* ptr = &a;

    // Referenz auf 'b'
    int& ref = b;

    std::cout << "Initial values:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";
    std::cout << "a = " << ptr << ", b = " << ref << "\n";

    // Modifikation durch Zeiger
    modifyWithPointer(ptr);
    std::cout << "After modifyWithPointer(ptr):\n";
    std::cout << "a = " << a << ", b = " << b << "\n";

    // Modifikation durch Referenz
    modifyWithReference(ref);
    std::cout << "After modifyWithReference(ref):\n";
    std::cout << "a = " << a << ", b = " << b << "\n";

    // Zeiger neu zuweisen
    int c = 15;
    ptr = &c; // Zeiger kann neu zugewiesen werden
    std::cout << "After reassigning ptr to c:\n";
    std::cout << "*ptr = " << *ptr << "\n";

    // Referenz neu zuweisen (nicht erlaubt)
    int& ref2 = c; // Referenz muss bei der Initialisierung gesetzt werden und kann nicht neu zugewiesen werden
    ref = c; // Dies ändert den Wert von b, nicht die Referenz selbst
    std::cout << "ref = " << ref << "\n";
    std::cout << "b = " << b << "\n";


    return 0;
}
