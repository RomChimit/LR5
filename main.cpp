#include <iostream>
#include "Laserp.h"

using namespace std;

int main() {
    Laser laser; // Создание объекта
    int choice;
    int deepValue, powerValue;
    string materialValue;

    do {
        cout << "\nМеню:\n";
        cout << "1. Показать состояние Лазерного принтера\n";
        cout << "2. Включить Лазерный принтер\n";
        cout << "3. Выключить Лазерный принтер\n";
        cout << "4. Установить глубину гравировки\n";
        cout << "5. Установить уровень мощности\n";
        cout << "6. Установить материал\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                microwave.displayState();
                break;
            case 2:
                microwave.turnOn();
                break;
            case 3:
                microwave.turnOff();
                break;
            case 4:
                cout << "Введите глубину гравировки в десятых миллиметра: ";
                cin >> deepValue;
                microwave.setDeep(deepValue);
                break;
            case 5:
                cout << "Введите уровень мощности (1-10): ";
                cin >> powerValue;
                microwave.setPowerLevel(powerValue);
                break;
            case 6:
		cout << "Введите материал (например, фанера, латунь): ";
                cin >> materialValue;
                microwave.setMaterial(materialValue);
                break;
            case 0:
                cout << "Выход...\n";
                break;
            default:
                cout << "Некорректный выбор.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
