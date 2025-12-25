#include <iostream>
#include "StaffReader.h"

int main() {
    try {
        StaffReader chiefLibrarian(
            "Anna Petrova",
            12345,
            "Chief Librarian"
        );

        chiefLibrarian.printInfo();

        // Дополнительная демонстрация
        std::cout << "\n--- Additional demonstration ---\n";

        Reader reader("Ivan Ivanov", 56789);
        reader.printInfo();

        Librarian librarian("Petr Sidorov", "Cataloguer");
        librarian.printInfo();
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}