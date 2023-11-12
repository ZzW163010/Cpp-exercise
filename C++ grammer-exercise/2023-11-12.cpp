#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4;

    cin >> a >> b;
    cout << a + b << endl;

    return 0;
}

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << "DIFERENCA = " << (A * B - C * D) << endl;

    return 0;
}


int main()
{
    double R;

    scanf("%lf", &R);
    printf("A=%.4lf", R * R * 3.14159);

    return 0;
}

int main() {
    int m[7] = { 100 , 50, 20, 10, 5, 2, 1 };
    int s, i = 0, j = 0;
    cin >> s;
    cout << s << endl;

    for (int i = 0; i < 7; i++) {
        cout << s / m[i] << " " << "nota(s) de R$ " << m[i] << ",00" << endl;
        s %= m[i];
    }
}

int main() {
    int s;
    cin >> s;

    cout << s / 3600 << ":" << (s % 3600) / 60 << ":" << s % 60 << endl;

    return 0;
}

int main() {
    int L = 0;
    scanf("%d", &L);

    printf("%d minutos", 2 * L);

}

int main() {

    double p = 0.0;
    scanf("%lf", &p);
    int ex = (int)(p * 100);

    int m[12] = { 10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1 };
    int i = 0;

    printf("NOTAS:\n");
    for (i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %.2lf\n", ex / m[i], m[i] / 100.0);
        ex = ex % m[i];
    }
    printf("MOEDAS:\n");
    for (i = 6; i < 12; i++) {
        printf("%d moeda(s) de R$ %.2lf\n", ex / m[i], m[i] / 100.0);
        ex = ex % m[i];
    }
}

int main() {
    int d;
    cin >> d;
    cout << d / 365 << " " << "ano(s)" << "\n" << d % 365 / 30 << " " 
        << "mes(es)" << "\n" << d % 365 % 30 << " " << "dia(s)" << endl;

    return 0;
}