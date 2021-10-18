
#include<iostream>
#include "MyForm.h"
using namespace std;
using namespace FormularioPrueba;
[STAThreadAttribute]
int main() {
	cout << "ESTO ESTA ANTES DE CREAR EL FORMULARIO" << endl;
	MyForm^ miFormulario = gcnew MyForm();
	Application::Run(miFormulario);
	cout << "ESTO ESTA DESPUES DE CREAR EL FORMULARIO" << endl;
	system("pause>nul");
	return 0;
}