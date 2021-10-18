#pragma once

#include"Controller.h"

namespace FormularioPrueba {

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
			InitializeComponent();

			//instanciando objetos
			controller = new Controller();
			pizarra->BackColor = Color::LightSkyBlue;
			g = pizarra->CreateGraphics();
			pen = gcnew Pen(Color::Red, 5);
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
			delete controller;
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ botonDibujar;
	protected:

	private: System::Windows::Forms::ComboBox^ eleccionFiguras;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ grupoPosicion;
	private: System::Windows::Forms::GroupBox^ grupoElipse;
	private: System::Windows::Forms::GroupBox^ grupoRectangulo;
	private: System::Windows::Forms::Panel^ pizarra;
	private: System::Windows::Forms::TextBox^ posYFigura;
	private: System::Windows::Forms::TextBox^ posXFigura;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ radioMayorElipse;

	private: System::Windows::Forms::Label^ areaElipse;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ lado2Rectangulo;
	private: System::Windows::Forms::TextBox^ lado1Rectangulo;
	private: System::Windows::Forms::Label^ areaRectangulo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ radioMenorElipse;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ posY2Linea;

	private: System::Windows::Forms::TextBox^ posX2Linea;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->botonDibujar = (gcnew System::Windows::Forms::Button());
			this->eleccionFiguras = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->grupoPosicion = (gcnew System::Windows::Forms::GroupBox());
			this->posY2Linea = (gcnew System::Windows::Forms::TextBox());
			this->posX2Linea = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->posYFigura = (gcnew System::Windows::Forms::TextBox());
			this->posXFigura = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->grupoElipse = (gcnew System::Windows::Forms::GroupBox());
			this->radioMenorElipse = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioMayorElipse = (gcnew System::Windows::Forms::TextBox());
			this->areaElipse = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->grupoRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->lado2Rectangulo = (gcnew System::Windows::Forms::TextBox());
			this->lado1Rectangulo = (gcnew System::Windows::Forms::TextBox());
			this->areaRectangulo = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pizarra = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->grupoPosicion->SuspendLayout();
			this->grupoElipse->SuspendLayout();
			this->grupoRectangulo->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->botonDibujar);
			this->groupBox1->Controls->Add(this->eleccionFiguras);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(29, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(845, 58);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// botonDibujar
			// 
			this->botonDibujar->Enabled = false;
			this->botonDibujar->Location = System::Drawing::Point(312, 22);
			this->botonDibujar->Name = L"botonDibujar";
			this->botonDibujar->Size = System::Drawing::Size(458, 23);
			this->botonDibujar->TabIndex = 2;
			this->botonDibujar->Text = L"Dibujar";
			this->botonDibujar->UseVisualStyleBackColor = true;
			this->botonDibujar->Click += gcnew System::EventHandler(this, &MyForm::botonDibujar_Click);
			// 
			// eleccionFiguras
			// 
			this->eleccionFiguras->AllowDrop = true;
			this->eleccionFiguras->FormattingEnabled = true;
			this->eleccionFiguras->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Circulo", L"Rectangulo", L"Elipse", L"Linea",
					L"Cuadrado"
			});
			this->eleccionFiguras->Location = System::Drawing::Point(117, 22);
			this->eleccionFiguras->Name = L"eleccionFiguras";
			this->eleccionFiguras->Size = System::Drawing::Size(149, 21);
			this->eleccionFiguras->TabIndex = 1;
			this->eleccionFiguras->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::eleccionFiguras_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Elegir Figura";
			// 
			// grupoPosicion
			// 
			this->grupoPosicion->Controls->Add(this->posY2Linea);
			this->grupoPosicion->Controls->Add(this->posX2Linea);
			this->grupoPosicion->Controls->Add(this->label11);
			this->grupoPosicion->Controls->Add(this->label10);
			this->grupoPosicion->Controls->Add(this->posYFigura);
			this->grupoPosicion->Controls->Add(this->posXFigura);
			this->grupoPosicion->Controls->Add(this->label3);
			this->grupoPosicion->Controls->Add(this->label2);
			this->grupoPosicion->Enabled = false;
			this->grupoPosicion->Location = System::Drawing::Point(29, 96);
			this->grupoPosicion->Name = L"grupoPosicion";
			this->grupoPosicion->Size = System::Drawing::Size(266, 156);
			this->grupoPosicion->TabIndex = 1;
			this->grupoPosicion->TabStop = false;
			this->grupoPosicion->Text = L"Posicion Inicial";
			// 
			// posY2Linea
			// 
			this->posY2Linea->Location = System::Drawing::Point(117, 124);
			this->posY2Linea->Name = L"posY2Linea";
			this->posY2Linea->Size = System::Drawing::Size(100, 20);
			this->posY2Linea->TabIndex = 7;
			// 
			// posX2Linea
			// 
			this->posX2Linea->Location = System::Drawing::Point(117, 92);
			this->posX2Linea->Name = L"posX2Linea";
			this->posX2Linea->Size = System::Drawing::Size(100, 20);
			this->posX2Linea->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(24, 131);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 13);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Posicion en Y2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(24, 99);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(78, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Posicion en X2";
			// 
			// posYFigura
			// 
			this->posYFigura->Location = System::Drawing::Point(117, 58);
			this->posYFigura->Name = L"posYFigura";
			this->posYFigura->Size = System::Drawing::Size(100, 20);
			this->posYFigura->TabIndex = 3;
			// 
			// posXFigura
			// 
			this->posXFigura->Location = System::Drawing::Point(117, 23);
			this->posXFigura->Name = L"posXFigura";
			this->posXFigura->Size = System::Drawing::Size(100, 20);
			this->posXFigura->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Posicion en Y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Posicion en X";
			// 
			// grupoElipse
			// 
			this->grupoElipse->Controls->Add(this->radioMenorElipse);
			this->grupoElipse->Controls->Add(this->label6);
			this->grupoElipse->Controls->Add(this->radioMayorElipse);
			this->grupoElipse->Controls->Add(this->areaElipse);
			this->grupoElipse->Controls->Add(this->label5);
			this->grupoElipse->Controls->Add(this->label4);
			this->grupoElipse->Enabled = false;
			this->grupoElipse->Location = System::Drawing::Point(317, 96);
			this->grupoElipse->Name = L"grupoElipse";
			this->grupoElipse->Size = System::Drawing::Size(266, 156);
			this->grupoElipse->TabIndex = 2;
			this->grupoElipse->TabStop = false;
			this->grupoElipse->Text = L"Elipse";
			// 
			// radioMenorElipse
			// 
			this->radioMenorElipse->Location = System::Drawing::Point(135, 73);
			this->radioMenorElipse->Name = L"radioMenorElipse";
			this->radioMenorElipse->Size = System::Drawing::Size(97, 20);
			this->radioMenorElipse->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(45, 76);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Radio Menor";
			// 
			// radioMayorElipse
			// 
			this->radioMayorElipse->Location = System::Drawing::Point(135, 37);
			this->radioMayorElipse->Name = L"radioMayorElipse";
			this->radioMayorElipse->Size = System::Drawing::Size(97, 20);
			this->radioMayorElipse->TabIndex = 4;
			// 
			// areaElipse
			// 
			this->areaElipse->AutoSize = true;
			this->areaElipse->Location = System::Drawing::Point(132, 120);
			this->areaElipse->Name = L"areaElipse";
			this->areaElipse->Size = System::Drawing::Size(100, 13);
			this->areaElipse->TabIndex = 3;
			this->areaElipse->Text = L"Mostrar el area aqui";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Area";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Radio Mayor";
			// 
			// grupoRectangulo
			// 
			this->grupoRectangulo->Controls->Add(this->lado2Rectangulo);
			this->grupoRectangulo->Controls->Add(this->lado1Rectangulo);
			this->grupoRectangulo->Controls->Add(this->areaRectangulo);
			this->grupoRectangulo->Controls->Add(this->label9);
			this->grupoRectangulo->Controls->Add(this->label8);
			this->grupoRectangulo->Controls->Add(this->label7);
			this->grupoRectangulo->Enabled = false;
			this->grupoRectangulo->Location = System::Drawing::Point(608, 96);
			this->grupoRectangulo->Name = L"grupoRectangulo";
			this->grupoRectangulo->Size = System::Drawing::Size(266, 156);
			this->grupoRectangulo->TabIndex = 3;
			this->grupoRectangulo->TabStop = false;
			this->grupoRectangulo->Text = L"Rectangulo";
			// 
			// lado2Rectangulo
			// 
			this->lado2Rectangulo->Location = System::Drawing::Point(114, 76);
			this->lado2Rectangulo->Name = L"lado2Rectangulo";
			this->lado2Rectangulo->Size = System::Drawing::Size(97, 20);
			this->lado2Rectangulo->TabIndex = 6;
			// 
			// lado1Rectangulo
			// 
			this->lado1Rectangulo->Location = System::Drawing::Point(114, 37);
			this->lado1Rectangulo->Name = L"lado1Rectangulo";
			this->lado1Rectangulo->Size = System::Drawing::Size(97, 20);
			this->lado1Rectangulo->TabIndex = 5;
			// 
			// areaRectangulo
			// 
			this->areaRectangulo->AutoSize = true;
			this->areaRectangulo->Location = System::Drawing::Point(111, 120);
			this->areaRectangulo->Name = L"areaRectangulo";
			this->areaRectangulo->Size = System::Drawing::Size(100, 13);
			this->areaRectangulo->TabIndex = 4;
			this->areaRectangulo->Text = L"Mostrar el area aqui";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(30, 120);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Area";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(30, 76);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Lado 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(30, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Lado 1";
			// 
			// pizarra
			// 
			this->pizarra->AllowDrop = true;
			this->pizarra->Location = System::Drawing::Point(29, 258);
			this->pizarra->Name = L"pizarra";
			this->pizarra->Size = System::Drawing::Size(845, 322);
			this->pizarra->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(886, 592);
			this->Controls->Add(this->pizarra);
			this->Controls->Add(this->grupoRectangulo);
			this->Controls->Add(this->grupoElipse);
			this->Controls->Add(this->grupoPosicion);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->grupoPosicion->ResumeLayout(false);
			this->grupoPosicion->PerformLayout();
			this->grupoElipse->ResumeLayout(false);
			this->grupoElipse->PerformLayout();
			this->grupoRectangulo->ResumeLayout(false);
			this->grupoRectangulo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



		//variables de MyForm
	private:
		Controller* controller;
		Graphics^ g;
		Pen^ pen;

		//metodos

	private: System::Void eleccionFiguras_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (eleccionFiguras->Text != "") {
			botonDibujar->Enabled = true;
			grupoPosicion->Enabled = true;
		}
		if (eleccionFiguras->Text == "Circulo" || eleccionFiguras->Text == "Elipse") {
			grupoElipse->Enabled = true;
			if (eleccionFiguras->Text == "Circulo") {
				radioMenorElipse->Enabled = false;
			}
			else {
				radioMenorElipse->Enabled = true;
			}
		}
		else {
			grupoElipse->Enabled = false;
		}
		if (eleccionFiguras->Text == "Rectangulo" || eleccionFiguras->Text == "Cuadrado") {
			grupoRectangulo->Enabled = true;
			if (eleccionFiguras->Text == "Cuadrado") {
				lado2Rectangulo->Enabled = false;
			}
			else {
				lado2Rectangulo->Enabled = true;
			}
		}
		else {
			grupoRectangulo->Enabled = false;
		}
		if (eleccionFiguras->Text == "Linea") {
			posX2Linea->Enabled = true;
			posY2Linea->Enabled = true;
		}
		else {
			posX2Linea->Enabled = false;
			posY2Linea->Enabled = false;
		}


	}
	private: System::Void botonDibujar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (eleccionFiguras->Text == "Circulo" || eleccionFiguras->Text == "Elipse") {
			if (eleccionFiguras->Text == "Elipse") {
				controller->agregarElipse(Convert::ToInt32(posXFigura->Text),
					Convert::ToInt32(posYFigura->Text),
					Convert::ToInt32(radioMayorElipse->Text),
					Convert::ToInt32(radioMenorElipse->Text));
			}
			else {
				controller->agregarElipse(Convert::ToInt32(posXFigura->Text),
					Convert::ToInt32(posYFigura->Text),
					Convert::ToInt32(radioMayorElipse->Text),
					Convert::ToInt32(radioMayorElipse->Text));
			}
			Elipse* aux = controller->getElipse(controller->getCantidadElipses() - 1);
			areaElipse->Text = Convert::ToString(aux->getArea());
			aux->dibujarElipse(pen, g);
		}
		if (eleccionFiguras->Text == "Rectangulo" || eleccionFiguras->Text == "Cuadrado") {
			if (eleccionFiguras->Text == "Rectangulo") {
				controller->agregarRectangulo(Convert::ToInt32(posXFigura->Text),
					Convert::ToInt32(posYFigura->Text),
					Convert::ToInt32(lado1Rectangulo->Text),
					Convert::ToInt32(lado2Rectangulo->Text));
			}
			else {
				controller->agregarRectangulo(Convert::ToInt32(posXFigura->Text),
					Convert::ToInt32(posYFigura->Text),
					Convert::ToInt32(lado1Rectangulo->Text),
					Convert::ToInt32(lado1Rectangulo->Text));
			}
			Rectangulo* aux = controller->getRectangulo(controller->getCantidadRectangulos() - 1);
			areaRectangulo->Text = Convert::ToString(aux->getArea());
			aux->dibujarRectangulo(pen, g);
		}
		if (eleccionFiguras->Text == "Linea") {
			controller->agregarLinea(
				Convert::ToInt32(posXFigura->Text),
				Convert::ToInt32(posYFigura->Text),
				Convert::ToInt32(posX2Linea->Text),
				Convert::ToInt32(posY2Linea->Text)
			);
			Linea* aux = controller->getLinea(controller->getCantidadLineas() - 1);
			aux->dibujarLinea(pen,g);
		}
	}

	};
}
