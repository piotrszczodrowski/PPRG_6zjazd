#include <iostream>
#include <string>
#include <vector>

using namespace std;

//declare student-struct
struct student {
    int index;
    string firstName;
    string lastName;
};

int main() {
    //declare students list
    vector <student> students;
    students = {
        {32990, "Samuel L.", "Jackson"},
        {33655, "Christopher", "Waltz"},
        {34423, "Alan", "Rickman"},
        {32827, "Pierce", "Brosnan"},
        {32987, "Sean", "Connery"},
        {32933, "Roger", "Moore"},
        {33708, "Timoty", "Dalton"},
        {32945, "Bernard", "Lee"},
        {34551, "Sean", "Bean"},
        {32720, "Nicolas", "Cage"},
        {33081, "Robbie", "Coltrane"},
        {34101, "Ed", "Harris"},
        {34477, "Harrison", "Ford"},
        {32698, "Marlon", "Brando"},
        {34102, "Al", "Pacino"},
        {32717, "Keanu", "Reeves"}
        };

    // print unsorted students vector
    cout << "Wektor przed sortowaniem:" << endl << endl;
    for (int i = 0; i < students.size(); ++i) {
        cout << students[i].index << " " << students[i].firstName << " " << students[i].lastName << endl;
    }

    // sorting students vector
    for (int i = 1; i < students.size(); ++i) {
        for (int j = 0; j < students.size(); ++j) {
            if (students[j-1].index > students[j].index) {
                swap(students[j-1], students[j]);
            }
        }
    }
    cout << endl << endl;

    // print sorted students vector
    cout << "Wektor po sortowaniu:" << endl << endl;
    for (int i = 0; i < students.size(); ++i) {
        cout << students[i].index << " " << students[i].firstName << " " << students[i].lastName << endl;
    }
    return 0;

    };
