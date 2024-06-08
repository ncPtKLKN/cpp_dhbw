#include <iostream>
#include <cstdint>

int main()
{
    // CONST
    const std::uint32_t AnswerToAllQuestionsConst = 42U; // const: Wert kann nicht geändert werden, read-only
    // AnswerToAllQuestionsConst = 43;              // error: assignment of read-only variable 'AnswerToEverything'
    std::cout << "AnswerToAllQuestionsConst = " << AnswerToAllQuestionsConst << std::endl; // "AnswerToEverything = 42"
    // Funktionsvariable soll ein Fixer Wert sein (BERECHNUNGEN ZUR LAUFZEIT)
    // Kann nicht mehr verändert werden und somit lediglich noch ausgelesen
    // Compiler kann entsprechend optimieren
    // Compiletime: const Variablen liegen noch nicht mit dem Wert im Programmteil vor
    // Runtime: const Variablen müssen erstellt werden

    // CONSTEXPR
    constexpr std::uint32_t ATOALLQ = 42U; // constexpr: Wert muss zur Compilezeit bekannt sein
    // ATOALLQ = 43;              // error: assignment of read-only variable 'AnswerToEverything'
    std::cout << "ATOALLQ = " << ATOALLQ << std::endl; // "AnswerToEverything = 42"
    // globale Fixwerte in C++ (BERECHNUNGEN ZUR COMPILEZEIT, FALLS ALLES PASST)
	// Empfehlung: Fixwerte in Großbuchstaben
	// Compiletime: constexpr Variablen liegen mit dem Wert im Programmteil vor
	// Runtime: constexpr Variablen liegen also schon vor

    // CONSTEXPR STATIC
    constexpr static std::uint32_t ATOALLQSTATIC = 42U; // constexpr static: Wert muss zur Compilezeit bekannt sein
    // ATOALLQSTATIC = 43;              // error: assignment of read-only variable 'AnswerToEverything'
    std::cout << "ATOALLQSTATIC = " << ATOALLQSTATIC << std::endl; // "AnswerToEverything = 42"
    // STATIC (zusätzlich zu constexpr) (BERECHNUNGEN ZUR COMPILEZEIT)
	// -> Speicherbereiche: Staticspeicherbereich wird zur Compiletime angelegt
	// -> erst durch dieses Keyword kann garantiert werden, dass zur Compilezeit reserviert und adressiert wird

    return 0;
}