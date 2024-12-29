#include <iostream>
#include <string>

using namespace std;
//declare subjects
string subjects[4] = { "informatyki", "matematyki", "chemii", "jezyka polskiego" };
//declare student struct
struct student {
    string name;
    int marks[4];
};

int main() {
    //declare student-marks array
    student students_marks[6];
    //students-marks input
    for (int i = 0; i < 6; i++) {
        cout << "Podaj imie ucznia nr " << i+1 << ": ";
        cin >> students_marks[i].name;
        for (int j = 0; j < 4; j++) {
            do {
                cout << "Podaj ocene z " << subjects[j] << ": ";
                cin >> students_marks[i].marks[j];
                if ((students_marks[i].marks[j] < 1) || (students_marks[i].marks[j] > 6)) {
                    cout << "Wprowadzono nieprawidlowa wartosc! Ocena musi miescic sie w skali 1-6!\n";
                }
            }
            while ((students_marks[i].marks[j] < 1) || (students_marks[i].marks[j] > 6));
        }
    }
    // declare student-subject indexes
    int student_number;
    int subject_number;
    // students-marks output
    do {
        cout << "Podaj numer ucznia [1..6] lub 0 aby zakonczyc: ";
        cin >> student_number;
        while ((student_number < 0) || (student_number > 6)) {
            "Wprowadzono nieprawidlowa wartosc!\n";
            continue;
        }
        if (student_number == 0) {
            break;
        }
        cout << "Podaj numer przedmiotu [1..4]: ";
        cin >> subject_number;
        while ((subject_number < 1) || (subject_number > 4)) {
            cout << "Wprowadzono nieprawidlowa wartosc!\n";
            cout << "Podaj numer przedmiotu [1..4]: ";
            cin >> subject_number;
        }
        cout << "Uczen: " << students_marks[student_number].name << ", ocena z " << subjects[subject_number - 1] << ": " << students_marks[student_number].marks[subject_number - 1] << endl;

    } while (student_number != 0);



    return 0;
}