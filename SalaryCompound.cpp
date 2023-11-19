#include <iostream>
using namespace std;

int main() {
    int salary, yearAmount, percentCompound, savingMoney = 0;
    cout << "Input Salary: "; cin >> salary;
    cout << "Input Years: "; cin >> yearAmount;
    cout << "Input Percent: "; cin >> percentCompound;
    
    cout << "---------------------------" << endl;
    cout << "Year\tSalary\tSavingMoney" << endl;

    for (int i = 1; i <= yearAmount; i++) {
        savingMoney += 12 * salary;
        cout << i << "\t" << salary << "\t" << savingMoney << endl;
        salary += (salary * percentCompound / 100);
    }

    return 0;
}
