#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int id1 = 1, id2 = 2, id3 = 3;
    string name1 = "Alice", name2 = "Bob", name3 = "Charlie";
    double balance1 = 1000.00, balance2 = 530.25, balance3 = 2040.50;

    // displaying the title for the report and center it using setw()
    cout << setw(30) << "Daily Report" << endl;

    // displaying column headers
    cout << left << setw(10) << "ID" << setw(15) << "Name" << right << setw(10) << "Balance" << endl;
    cout << "--------------------------------------------------" << endl;

    // displaying first row
    cout << setfill('0') << setw(5) << id1 << setfill(' ') << "  ";  // ID formatted as five-digit with leading zeros
    cout << left << setw(15) << name1;  // Left-aligned name
    cout << right << "$" << fixed << setprecision(2) << setw(9) << balance1 << endl;  // Right-aligned balance with two decimal places

    // displayign second row
    cout << setfill('0') << setw(5) << id2 << setfill(' ') << "  ";
    cout << left << setw(15) << name2;
    cout << right << "$" << fixed << setprecision(2) << setw(9) << balance2 << endl;

    // Display third row
    cout << setfill('0') << setw(5) << id3 << setfill(' ') << "  ";
    cout << left << setw(15) << name3;
    cout << right << "$" << fixed << setprecision(2) << setw(9) << balance3 << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.