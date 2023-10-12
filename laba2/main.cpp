#include <iostream>
#include <string>
#include <vector>

class Applicant {
public:
    // Публічні поля
    std::string name;
    int age;
    float entranceExamScore;

    // Конструктор
    Applicant(const std::string& n, int a, float score) : name(n), age(a), entranceExamScore(score) {}

    // Методи
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Entrance Exam Score: " << entranceExamScore << std::endl;
    }

    // Метод, що використовується для отримання значення приватного поля
    float getEntranceExamScore() const {
        return entranceExamScore;
    }

    // Метод, що використовується для встановлення значення приватного поля
    void setEntranceExamScore(float score) {
        entranceExamScore = score;
    }

    // Перевантажений метод для зручності виведення в потік
    friend std::ostream& operator<<(std::ostream& os, const Applicant& applicant) {
        os << "Name: " << applicant.name << ", Age: " << applicant.age << ", Entrance Exam Score: " << applicant.entranceExamScore;
        return os;
    }

    // Перевантажений оператор порівняння для порівняння за важливістю
    bool operator>(const Applicant& other) const {
        return entranceExamScore > other.entranceExamScore;
    }

private:
    // Приватні поля
    std::string address;
    int phoneNumber;
    bool hasRecommendationLetter;
    std::string previousSchool;
    bool isInternationalStudent;
};

class Faculty {
public:
    // Публічні поля
    std::string name;
    int capacity;

    // Конструктор
    Faculty(const std::string& n, int cap) : name(n), capacity(cap) {}

    // Метод для прийому студента
    void admitStudent(const Applicant& applicant) {
        if (students.size() < capacity) {
            students.push_back(applicant);
            std::cout << applicant.name << " admitted to " << name << std::endl;
        }
    }

    // Перевантажений метод для зручності виведення в потік
    friend std::ostream& operator<<(std::ostream& os, const Faculty& faculty) {
        os << "Faculty: " << faculty.name << ", Capacity: " << faculty.capacity;
        return os;
    }

private:
    // Приватні поля
    std::string deanName;
    int foundationYear;
    bool isPublic;
    float budget;
    bool hasAccreditation;
    std::vector<Applicant> students;
};