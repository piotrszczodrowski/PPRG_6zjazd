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

// void swapVectors(vector<student> &v1, vector<student> &v2) {
//     student temp;
//
// }

int main() {
    //declare students list
    vector <student> students;
    students = {
        {32990, "Milosz", "Banaszewski"},
        {33655, "Jan", "Baranowski"},
        {34423, "Marek", "Dybusc"},
        {32827, "Damian", "Fijalkowski"},
        {32987, "Aleksy", "Greiveldinger"},
        {32933, "Dariusz", "Grubba"},
        {33708, "Joanna", "Jaworska"},
        {32945, "Dawid", "Kubanek"},
        {34551, "Pola", "Kundo"},
        {32720, "Filip", "Miklas-Frankowski"},
        {33081, "Dominik", "Nowakowski"},
        {34101, "Gerald", "Serafin"},
        {34477, "Klara", "Slupska"},
        {32698, "Piotr", "Szczodrowski"},
        {34102, "Katarzyna", "Wirzba"},
        {32717, "Mario", "Zerebiec"}
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
