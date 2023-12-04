/*Даны целые положительные числа M, N и набор из N чисел.
 Сформировать матрицу размера M × N, у которой в каждой строке содержатся все
 числа из исходного набора (в том же порядке),каждая следующая строка умноженные на d.
 статический*/
#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int N, M;
    int d;
    const size_t MAX_N = 10;
    const size_t MAX_M = 10;
    int array[MAX_M][MAX_N];

    cout << "Введите d: ";
    cin >> d;

    cout << "Введите размер матрицы M*N:\n";
    cin >> M;
    if (M == 0 || M > MAX_M) {
        cerr << "Ошибка: количество должно находиться в диапазоне [1;" << MAX_M << " ]" << endl;
        return 1;
    }

    cin >> N;
    if (N == 0 || N > MAX_N) {
        cerr << "Ошибка: количество должно находиться в диапазоне [1;" << MAX_N << " ]" << endl;
        return 1;
    }

    cout << "Введите набор из " << N << " чисел: ";
    for (int i = 0; i < N; i++)
        cin >> array[0][i];
    for (int j = 1; j < M; j++)
        for (int i = 0; i < N; i++)
            array[j][i] = array[j - 1][i]*d;
    for (int j = 0; j < M; j++)
    {
        for (int i = 0; i < N; i++)
            cout << array[j][i] << " ";
        cout << "\n";


    }


}


