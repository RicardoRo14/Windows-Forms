#pragma once
#include"Circulo.h"
#include"Cuadrado.h"
namespace MoviendoFiguras {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			Random^ r=gcnew Random();
			InitializeComponent();
			this->BackColor = Color::White;
			/*circulo = new Circulo(100, 50, 50);
			cuadrado = new Cuadrado(400,100,200);*/
			circulo = new Circulo * [5];
			cuadrado = new Cuadrado * [5];
			for (int i = 0; i < 5; i++) {
				circulo[i] = new Circulo(r->Next(0,600),r->Next(0,200),r->Next(50,100));
				cuadrado[i] = new Cuadrado(r->Next(0, 600), r->Next(0, 200), r->Next(100, 200));
			}
			g = this->CreateGraphics();
			penBorrar = gcnew Pen(Color::White,2);
			penDibujar = gcnew Pen(Color::Red,2);
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		Cuadrado** cuadrado;
		Circulo** circulo;
		
	private: System::Windows::Forms::Timer^ timer1;
		   Graphics^ g;
		   Pen^ penDibujar;
		   Pen^ penBorrar;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Método necesario para admitir el Diseñador. No se puede modificar
		   /// el contenido de este método con el editor de código.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->SuspendLayout();
			   // 
			   // timer1
			   // 
			   this->timer1->Enabled = true;
			   this->timer1->Interval = 20;
			   this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1006, 636);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < 5; i++) {
			circulo[i]->mover(g,penDibujar,penBorrar);
			cuadrado[i]->mover(g, penDibujar, penBorrar);
		}
	}
	};
}
