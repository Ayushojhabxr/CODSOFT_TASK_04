#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Unable to open file. Please check the file name and try again.";
        return 1;
    }

    string word;
    int count = 0;
    while (file >> word) {
        count++;
    }

    cout << "Total word count in the file: " << count << endl;

    file.close();
    return 0;
}