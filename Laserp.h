#ifndef LASERP_H
#define LASERP_H

#include <iostream>
#include <string>

using namespace std;

class Laser {
private:
    bool isOn;          // Состояние печи (включена/выключена)
    int time;          // Время приготовления в секундах
    int powerLevel;    // Уровень мощности (от 1 до 10)
    string material;   // Тип пищи, которая готовится

public:
    // Конструктор по умолчанию
    Laser() : isOn(false), time(0), powerLevel(1), material("Не выбрано") {}

    // Конструктор с параметрами
    Laser(bool state, int d, int level, string type)
        : isOn(state), time(d), powerLevel(level), material(type) {}

    // Метод для включения 
    void turnOn() {
        isOn = true;
        cout << "Лазерный принтер выключен.\n";
    }

    // Метод для выключения 
    void turnOff() {
        isOn = false;
        cout << "Лазерный принтер включен.\n";
    }
    
    // Метод для установки глубины
    void setTime(int seconds) {
        if (isOn) {
            time = seconds;
            cout << "Глубина гравировки установлена на " << time << " десятых миллиметра.\n";
        } else {
            cout << "Лазерный принтер выключен. Включите его, чтобы установить глубину гравировки.\n";
        }
    }

    // Метод для установки уровня мощности
    void setPowerLevel(int level) {
        if (isOn) {
            if (level >= 1 && level <= 10) {
                powerLevel = level;
                cout << "Уровень мощности установлен на " << powerLevel << ".\n";
            } else {
                cout << "Уровень мощности должен быть от 1 до 10.\n";
            }
        } else {
            cout << "Лазерный принтер выключен. Включите его, чтобы установить уровень мощности.\n";
        }
    }

    // Метод для установки материала
    void setMaterial(string type) {
        if (isOn) {
            material = type;
            cout << "Материал установлен на " << material << ".\n";
        } else {
            cout << "Лазерный принтер выключен. Включите его, чтобы установить материал.\n";
        }
    }

    // Метод для отображения текущего состояния принтера
    void displayState() const {
        cout << "Состояние Лазерного принтера: " << (isOn ? "Включен" : "Выключен")
             << ", Глубина: " << time 
             << " десятых миллиметра, Уровень мощности: " << powerLevel 
             << ", Материал: " << material << "\n";
    }
};

#endif // LASERP_H

