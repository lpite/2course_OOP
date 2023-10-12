#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std;

class Applicant {
public:

    std::string name;
    int age;
    float entranceExamScore;
		Applicant(){
		}
    Applicant(const std::string& n, int a, float score) : name(n), age(a), entranceExamScore(score) {}

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << ", Entrance Exam Score: " << entranceExamScore << std::endl;
    }

    float getEntranceExamScore()  {
        return entranceExamScore;
    }
    double getEntranceExamScore(double mult){
			return entranceExamScore*mult;
    }

    void setEntranceExamScore(float score) {
        entranceExamScore = score;
    }
    void setEntranceExamScore(double score) {
        entranceExamScore = score;
    }

    Applicant getMe(){
			return *this;
    }

    void setName(Applicant cl){
			this->name = cl.name;
    }


		void saveToFIle(std::string fileName){
			ofstream file(fileName);
			file << this->name;
			file.close();
		}

		void readFromFile(std::string fileName){
		ifstream file(fileName);
		file >> this->name;
		file.close();

		}

private:
    std::string address;
    int phoneNumber;
    bool hasRecommendationLetter;
    std::string previousSchool;
    bool isInternationalStudent;
};

class Faculty {
public:

    std::string name;
    int capacity;
		Faculty(){}
    Faculty(const std::string& n, int cap) : name(n), capacity(cap) {}

    void admitStudent(Applicant& applicant) {
        if (students.size() < capacity) {
            students.push_back(applicant);
            std::cout << applicant.name << " admitted to " << name << std::endl;
        }
    }

		void setCapacity(int capacity){
			this->capacity;
		}

		void setCapacity(double capacity){
			this->capacity = capacity;
		}

		void setBudget(double b){
			this->budget = b;
		}

		void setBudget(float b){
			this->budget = b;
		}

		Faculty getMe(){
			return *this;
		}

		void setName(Faculty cls){
			this->name = cls.name;
		}

		void saveToFIle(std::string fileName){
			ofstream file(fileName);
			file << this->name;
			file.close();
		}

		void readFromFile(std::string fileName){
		ifstream file(fileName);
		file >> this->name;
		file.close();

		}

		void GEN(){
			int ran = rand()%10;
			int *arr = new int(ran);

			for(int i = 0;i<ran;i++){
				Applicant *app = new Applicant("",rand()%100,5.5);
				arr[i] = app->age;
				cout << arr[i] << endl;
			}

			int i, j;
			bool swapped;
			for (i = 0; i < ran - 1; i++) {
        swapped = false;
        for (j = 0; j < ran - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;

    }
cout << "________________\n\n";

	for(int i = 0;i<ran;i++){
			cout << arr[i] << endl;
		}
		}
private:
    std::string deanName;
    int foundationYear;
    bool isPublic;
    float budget;
    bool hasAccreditation;
    std::vector<Applicant> students;
};

int main(){
	srand(time(nullptr));

	Applicant ap1 = Applicant();
	Applicant ap2 = Applicant();
	Applicant ap3 = Applicant();
	Applicant ap4 = Applicant();
	Applicant ap5 = Applicant();

	Applicant arr1[5] = {ap1,ap2,ap3,ap4,ap5};

	Faculty *ap6 = new Faculty();
	auto ap7 = new Faculty();
	auto ap8 = new Faculty();
	auto ap9 = new Faculty();
	auto ap0 = new Faculty();

	ap6->admitStudent(ap1);

	Faculty *arr2[5] = {ap6,ap7,ap8,ap9,ap0};

	arr2[0]->GEN();




	return 0;
}
