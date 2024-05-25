#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Initiale Größe des Arrays
    unsigned int initial_size = 3;
    unsigned int new_size;

    // Speicher für das initiale Array reservieren
    char **arr = (char **)malloc(initial_size * sizeof(char *));
    if (arr == NULL) {
        fprintf(stderr, "Speicherzuweisung fehlgeschlagen\n");
        return 1;
    }

    // Initiale Werte zuweisen
    arr[0] = strdup("Hello ");
    arr[1] = strdup("World");
    arr[2] = strdup("!!");

    // Neue Größe des Arrays festlegen
    printf("Geben Sie die neue Größe des Arrays ein: ");
    scanf("%u", &new_size);

    // Speichergröße des Arrays ändern
    char **new_arr = (char **)realloc(arr, new_size * sizeof(char *));
    if (new_arr == NULL) {
        fprintf(stderr, "Speichererweiterung fehlgeschlagen\n");
        for (unsigned int i = 0; i < initial_size; i++) {
            free(arr[i]);
        }
        free(arr);
        return 1;
    }
    arr = new_arr;

    // Zusätzliche Speicherplätze initialisieren, falls das Array vergrößert wurde
    for (unsigned int i = initial_size; i < new_size; i++) {
        arr[i] = NULL; // oder eine andere Initialisierung
    }

    // Array-Inhalte ausgeben
    for (unsigned int i = 0; i < new_size; i++) {
        if (arr[i] != NULL) {
            printf("%s", arr[i]);
        } else {
            printf("(leer) ");
        }
    }
    printf("\n");

    // Speicher freigeben
    for (unsigned int i = 0; i < new_size; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
