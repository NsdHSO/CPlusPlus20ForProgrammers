#include <iostream>
using std::cout;
using std::cin;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int a{0};
    int b{0};
    int sum{0};
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter b number: :";
    cin >> b;
    sum = a + b;
    cout << "sum = " << sum;


    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}