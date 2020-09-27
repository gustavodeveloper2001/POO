#include<iostream>
using namespace std;

class Rectangulo {
    private:
        float altura;
        float base;
    public:
        Rectangulo(float, float);
        void AreaRec();
        void PeriRec();
};

Rectangulo::Rectangulo(float _h, float _b){
    altura = _h;
    base = _b;
}

void Rectangulo::AreaRec(){
    int Area;
    Area = base*altura;
    cout << "\nEl area del rectangulo es: " << Area << endl;
}

void Rectangulo::PeriRec(){
    int Perimetro;
    Perimetro = (2*altura) + (2*base);
    cout << "\nEl Perimetro del rectngulo es: " << Perimetro << endl;
}

int main(){
    Rectangulo a1 = Rectangulo(7, 11);
    a1.AreaRec();
    a1.PeriRec();


    system("pause");
    return 0;
}