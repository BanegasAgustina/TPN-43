#include <iostream>
using namespace std;
int ObtenesDDD(int codigo_area);
int main() {
    int cod;
    cout << "Ingrese el número de código de área: ";
    cin >> cod;
    cout<<ObtenesDDD(cod);
    return 0;
}
int ObtenesDDD(int codigo_area){
    

    

    if (codigo_area == 61) {
        cout << "Destino: Brasilia" << endl;
    } 
    
    else if (codigo_area == 71) {
    cout << "Destino: Salvador" << endl;
    }
    
     else if (codigo_area == 11) {
        cout << "Destino: Sao Paulo" << endl;
    }
    
     else if (codigo_area == 21) {
        cout << "Destino: Rio de Janeiro" << endl;
    }
   
      else if (codigo_area == 32) {
        cout << "Destino: Juiz de Fora" << endl;
    }
   
      else if (codigo_area == 19) {
    cout << "Destino: Campinas" << endl;
    }
  
       else if (codigo_area == 27) {
        cout << "Destino: Vitoria" << endl;
    }
  
       else if (codigo_area == 31) {
        std::cout << "Destino: Belo Horizonte" << endl;
    } 
 
        else {
        cout << "DDD no encontrado" <<endl;
    }
    return codigo_area;

}