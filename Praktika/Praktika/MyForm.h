#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <vector>
#include <DLLPrac.h>
#include <string>
#include <string.h>
#include "MyForm1.h"
#include "MyForm2.h"
#include <stdexcept>
//#include <thread>
//#include "Vector.h"
using namespace std;

template <typename T>
class Vector
{
public:
	class Iterator
	{
	public:
		Iterator(const Vector<T>* vector, int nIndex);
		const T& operator*() const;
		Iterator& operator++();
		bool operator!=(const Iterator& other) const;

	private:
		const Vector<T>* m_pVector;
		int m_nIndex = -1;
	};

public:
	Vector() = default;
	explicit Vector(int nSize);

	~Vector();

	void insert(const T& value);

	int size() const;
	const T& operator[](int nIndex) const;

	Iterator begin() const;
	Iterator end() const;

private:
	T* m_pData = nullptr;
	int m_nSize = 0;
	int m_nCapacity = 0;
};

namespace Praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//vector<char> VecSort(vector<char> &Vec);
	void VecFill(string str, vector<char>& Vec);
	void BigVecFill(string str2, vector<char>& Vec2);

	string path = "File.txt";
	fstream fs;
	fstream fs2;
	fstream fs3;
	fstream fs4;
	fstream fs5;

	vector<char> vec[10];
	vector<char> Bigvec;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn20;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn27;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn28;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn30;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;




	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		[STAThread]
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(938, 613);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Панков Данила";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 613);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Дата и время запуска: ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 45);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Сделать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(179, 521);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"  ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(420, 566);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 57);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Почтовый ящик";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10
			});
			this->dataGridView2->Location = System::Drawing::Point(432, 12);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(293, 331);
			this->dataGridView2->TabIndex = 9;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 25;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 25;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 25;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 25;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 25;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 25;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 25;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 25;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 25;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 25;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn11,
					this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15,
					this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19,
					this->dataGridViewTextBoxColumn20
			});
			this->dataGridView1->Location = System::Drawing::Point(133, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(293, 331);
			this->dataGridView1->TabIndex = 10;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 25;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Width = 25;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			this->dataGridViewTextBoxColumn13->Width = 25;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			this->dataGridViewTextBoxColumn14->Width = 25;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			this->dataGridViewTextBoxColumn15->Width = 25;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->ReadOnly = true;
			this->dataGridViewTextBoxColumn16->Width = 25;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->ReadOnly = true;
			this->dataGridViewTextBoxColumn17->Width = 25;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->ReadOnly = true;
			this->dataGridViewTextBoxColumn18->Width = 25;
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"";
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			this->dataGridViewTextBoxColumn19->ReadOnly = true;
			this->dataGridViewTextBoxColumn19->Width = 25;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"";
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->ReadOnly = true;
			this->dataGridViewTextBoxColumn20->Width = 25;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn21,
					this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24, this->dataGridViewTextBoxColumn25,
					this->dataGridViewTextBoxColumn26, this->dataGridViewTextBoxColumn27, this->dataGridViewTextBoxColumn28, this->dataGridViewTextBoxColumn29,
					this->dataGridViewTextBoxColumn30
			});
			this->dataGridView3->Location = System::Drawing::Point(731, 12);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(293, 331);
			this->dataGridView3->TabIndex = 11;
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"";
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			this->dataGridViewTextBoxColumn21->ReadOnly = true;
			this->dataGridViewTextBoxColumn21->Width = 25;
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->HeaderText = L"";
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			this->dataGridViewTextBoxColumn22->ReadOnly = true;
			this->dataGridViewTextBoxColumn22->Width = 25;
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->HeaderText = L"";
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			this->dataGridViewTextBoxColumn23->ReadOnly = true;
			this->dataGridViewTextBoxColumn23->Width = 25;
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"";
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			this->dataGridViewTextBoxColumn24->ReadOnly = true;
			this->dataGridViewTextBoxColumn24->Width = 25;
			// 
			// dataGridViewTextBoxColumn25
			// 
			this->dataGridViewTextBoxColumn25->HeaderText = L"";
			this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
			this->dataGridViewTextBoxColumn25->ReadOnly = true;
			this->dataGridViewTextBoxColumn25->Width = 25;
			// 
			// dataGridViewTextBoxColumn26
			// 
			this->dataGridViewTextBoxColumn26->HeaderText = L"";
			this->dataGridViewTextBoxColumn26->Name = L"dataGridViewTextBoxColumn26";
			this->dataGridViewTextBoxColumn26->ReadOnly = true;
			this->dataGridViewTextBoxColumn26->Width = 25;
			// 
			// dataGridViewTextBoxColumn27
			// 
			this->dataGridViewTextBoxColumn27->HeaderText = L"";
			this->dataGridViewTextBoxColumn27->Name = L"dataGridViewTextBoxColumn27";
			this->dataGridViewTextBoxColumn27->ReadOnly = true;
			this->dataGridViewTextBoxColumn27->Width = 25;
			// 
			// dataGridViewTextBoxColumn28
			// 
			this->dataGridViewTextBoxColumn28->HeaderText = L"";
			this->dataGridViewTextBoxColumn28->Name = L"dataGridViewTextBoxColumn28";
			this->dataGridViewTextBoxColumn28->ReadOnly = true;
			this->dataGridViewTextBoxColumn28->Width = 25;
			// 
			// dataGridViewTextBoxColumn29
			// 
			this->dataGridViewTextBoxColumn29->HeaderText = L"";
			this->dataGridViewTextBoxColumn29->Name = L"dataGridViewTextBoxColumn29";
			this->dataGridViewTextBoxColumn29->ReadOnly = true;
			this->dataGridViewTextBoxColumn29->Width = 25;
			// 
			// dataGridViewTextBoxColumn30
			// 
			this->dataGridViewTextBoxColumn30->HeaderText = L"";
			this->dataGridViewTextBoxColumn30->Name = L"dataGridViewTextBoxColumn30";
			this->dataGridViewTextBoxColumn30->ReadOnly = true;
			this->dataGridViewTextBoxColumn30->Width = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(130, 346);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Неотсортированные векторы";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(429, 346);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(225, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Индивидуально отсортированные векторы";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(728, 346);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Отсортированная матрица";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1036, 635);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		struct tm* date;
		char Current_date[100];
		const time_t timer = time(NULL);
		date = localtime(&timer);
		strftime(Current_date, 100, "%d.%m.%Y %H:%M:%S", date);
		System::String^ strCLR = gcnew System::String(Current_date);
		label2->Text += strCLR;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();

		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();

		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();


		char c;
		string FileText = "";
		string s, s2;
		s2.reserve(100);

		int symC = 0;
		int i = 0;
		int Vi = 0;



		////////////////////////////////////////////////////////////////////////// Считываем данные из файла
		fs.open(path, fstream::in | fstream::out | fstream::app);

		while (fs.get(c))
		{
			symC++;
			FileText.insert(FileText.size(), s = { c });
			if (symC % 10 == 0)
			{
				FileText.insert(FileText.size(), "\r\n");
			}
		}
		fs.close();


		////////////////////////////////////////////////////////////////////////// Разносим строку на строки по 10 символов
		ofstream ofs;
		ofs.open(path, ios::trunc | ios::binary);
		ofs.write(FileText.c_str(), FileText.size());
		ofs.clear();
		ofs.close();

		s = "";
		s2 = " ";

		fs2.open(path, fstream::in | fstream::out);



		////////////////////////////////////////////////////////////////////////// Заносим строки в векторы
		Vi = 0;
		while (getline(fs2, s))
		{
			VecFill(s, vec[Vi]);
			Vi++;
		}
		fs2.close();

		////////////////////////////////////////////////////////////////////////// Выводим векторы в матрицу
		for (int i = 9; i >= 0; i--)
		{
			for (int j = 9; j >= 0; j--)
			{
				dataGridView1->Rows[i]->Cells[j]->Value = vec[i].back();
			switch (vec[i].back())
			{
			case 97:
				dataGridView1->Rows[i]->Cells[j]->Value = "a";
				break;
			case 98:
				dataGridView1->Rows[i]->Cells[j]->Value = "b";
				break;
			case 99:
				dataGridView1->Rows[i]->Cells[j]->Value = "c";
				break;
			case 100:
				dataGridView1->Rows[i]->Cells[j]->Value = "d";
				break;
			case 101:
				dataGridView1->Rows[i]->Cells[j]->Value = "e";
				break;
			case 102:
				dataGridView1->Rows[i]->Cells[j]->Value = "f";
				break;
			case 103:
				dataGridView1->Rows[i]->Cells[j]->Value = "g";
				break;
			case 104:
				dataGridView1->Rows[i]->Cells[j]->Value = "h";
				break;
			case 105:
				dataGridView1->Rows[i]->Cells[j]->Value = "i";
				break;
			case 106:
				dataGridView1->Rows[i]->Cells[j]->Value = "j";
				break;
			case 107:
				dataGridView1->Rows[i]->Cells[j]->Value = "k";
				break;
			case 108:
				dataGridView1->Rows[i]->Cells[j]->Value = "l";
				break;
			case 109:
				dataGridView1->Rows[i]->Cells[j]->Value = "m";
				break;
			case 110:
				dataGridView1->Rows[i]->Cells[j]->Value = "n";
				break;
			case 111:
				dataGridView1->Rows[i]->Cells[j]->Value = "o";
				break;
			case 112:
				dataGridView1->Rows[i]->Cells[j]->Value = "p";
				break;
			case 113:
				dataGridView1->Rows[i]->Cells[j]->Value = "q";
				break;
			case 114:
				dataGridView1->Rows[i]->Cells[j]->Value = "r";
				break;
			case 115:
				dataGridView1->Rows[i]->Cells[j]->Value = "s";
				break;
			case 116:
				dataGridView1->Rows[i]->Cells[j]->Value = "t";
				break;
			case 117:
				dataGridView1->Rows[i]->Cells[j]->Value = "u";
				break;
			case 118:
				dataGridView1->Rows[i]->Cells[j]->Value = "v";
				break;
			case 119:
				dataGridView1->Rows[i]->Cells[j]->Value = "w";
				break;
			case 120:
				dataGridView1->Rows[i]->Cells[j]->Value = "x";
				break;
			case 121:
				dataGridView1->Rows[i]->Cells[j]->Value = "y";
				break;
			case 122:
				dataGridView1->Rows[i]->Cells[j]->Value = "z";
				break;

			}
				vec[i].pop_back();
			}
		}

		fs4.open(path, fstream::in | fstream::out);

		////////////////////////////////////////////////////////////////////////// Заносим строки в векторы
		Vi = 0;
		while (getline(fs4, s))
		{
			VecFill(s, vec[Vi]);
			Vi++;
		}
		fs4.close();

		////////////////////////////////////////////////////////////////////////// Сортируем векторы (выполняется через dll)
		for (int i = 0; i < 10; i++)
		{
			VecSort(vec[i]);
		}


		//fs3.open(path, fstream::in | fstream::out | fstream::app);
		//s = "";

		//while (getline(fs3, s))
		//{
		//	FileText.insert(FileText.size(), s);
		//	FileText.insert(FileText.size(), "\r\n");
		//}
		//fs.close();

		////////////////////////////////////////////////////////////////////////// Заносим отсортированные векторы в специальную переменную и выводим в файл
		FileText += "\r\n";
		for (int i = 0; i < 10; i++)
		{
			for (vector<char>::iterator it = vec[i].begin(); it != vec[i].end(); it++)
			{
				FileText += *it;
			}
			FileText += "\r\n";
		}


		ofstream ofs2;
		ofs2.open(path, ios::trunc | ios::binary);
		ofs2.write(FileText.c_str(), FileText.size());
		ofs2.clear();
		ofs2.close();


		////////////////////////////////////////////////////////////////////////// Проверка отображения векторов
		//for (int i = 0; i < 10; i++)
		//{
			//for (vector<char>::iterator it = vec[5].begin(); it != vec[5].end(); it++)
			//{
			//	label3->Text += *it;
			//	label3->Text += " ";
			//}
			//cout << endl;
		//}


		//for (int p = 0; p < 10; p++)
		//{
		//	for (vector<char>::iterator i = vec[p].begin(); i != vec[p].end(); i++)
		//	{
		//		label3->Text += *i;
		//	}
		//}
					
		
		////////////////////////////////////////////////////////////////////////// Выводим отсортированные векторы в матрицу
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				dataGridView2->Rows[i]->Cells[j]->Value = vec[i].back();
				switch (vec[i].back())
				{
				case 97:
					dataGridView2->Rows[i]->Cells[j]->Value = "a";
					break;
				case 98:
					dataGridView2->Rows[i]->Cells[j]->Value = "b";
					break;
				case 99:
					dataGridView2->Rows[i]->Cells[j]->Value = "c";
					break;
				case 100:
					dataGridView2->Rows[i]->Cells[j]->Value = "d";
					break;
				case 101:
					dataGridView2->Rows[i]->Cells[j]->Value = "e";
					break;
				case 102:
					dataGridView2->Rows[i]->Cells[j]->Value = "f";
					break;
				case 103:
					dataGridView2->Rows[i]->Cells[j]->Value = "g";
					break;
				case 104:
					dataGridView2->Rows[i]->Cells[j]->Value = "h";
					break;
				case 105:
					dataGridView2->Rows[i]->Cells[j]->Value = "i";
					break;
				case 106:
					dataGridView2->Rows[i]->Cells[j]->Value = "j";
					break;
				case 107:
					dataGridView2->Rows[i]->Cells[j]->Value = "k";
					break;
				case 108:
					dataGridView2->Rows[i]->Cells[j]->Value = "l";
					break;
				case 109:
					dataGridView2->Rows[i]->Cells[j]->Value = "m";
					break;
				case 110:
					dataGridView2->Rows[i]->Cells[j]->Value = "n";
					break;
				case 111:
					dataGridView2->Rows[i]->Cells[j]->Value = "o";
					break;
				case 112:
					dataGridView2->Rows[i]->Cells[j]->Value = "p";
					break;
				case 113:
					dataGridView2->Rows[i]->Cells[j]->Value = "q";
					break;
				case 114:
					dataGridView2->Rows[i]->Cells[j]->Value = "r";
					break;
				case 115:
					dataGridView2->Rows[i]->Cells[j]->Value = "s";
					break;
				case 116:
					dataGridView2->Rows[i]->Cells[j]->Value = "t";
					break;
				case 117:
					dataGridView2->Rows[i]->Cells[j]->Value = "u";
					break;
				case 118:
					dataGridView2->Rows[i]->Cells[j]->Value = "v";
					break;
				case 119:
					dataGridView2->Rows[i]->Cells[j]->Value = "w";
					break;
				case 120:
					dataGridView2->Rows[i]->Cells[j]->Value = "x";
					break;
				case 121:
					dataGridView2->Rows[i]->Cells[j]->Value = "y";
					break;
				case 122:
					dataGridView2->Rows[i]->Cells[j]->Value = "z";
					break;

				}
				vec[i].pop_back();

			}
		}

		FileText = "";
		fs5.open(path, fstream::in | fstream::out);
		////////////////////////////////////////////////////////////////////////// Заносим строки в вектор
		while (fs5.get(c))
		{
			if (c != 10)
			{
				FileText.insert(FileText.size(), s2 = { c });
			}
		}
		BigVecFill(FileText, Bigvec);
		fs5.close();

		////////////////////////////////////////////////////////////////////////// Сортируем вектор
		for (int i = 0; i < 100; i++)
		{
			VecSort(Bigvec);
		}

		////////////////////////////////////////////////////////////////////////// Выводим отсортированные векторы в матрицу
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				dataGridView3->Rows[i]->Cells[j]->Value = Bigvec.back();
				switch (Bigvec.back())
				{
				case 97:
					dataGridView3->Rows[i]->Cells[j]->Value = "a";
					break;
				case 98:
					dataGridView3->Rows[i]->Cells[j]->Value = "b";
					break;
				case 99:
					dataGridView3->Rows[i]->Cells[j]->Value = "c";
					break;
				case 100:
					dataGridView3->Rows[i]->Cells[j]->Value = "d";
					break;
				case 101:
					dataGridView3->Rows[i]->Cells[j]->Value = "e";
					break;
				case 102:
					dataGridView3->Rows[i]->Cells[j]->Value = "f";
					break;
				case 103:
					dataGridView3->Rows[i]->Cells[j]->Value = "g";
					break;
				case 104:
					dataGridView3->Rows[i]->Cells[j]->Value = "h";
					break;
				case 105:
					dataGridView3->Rows[i]->Cells[j]->Value = "i";
					break;
				case 106:
					dataGridView3->Rows[i]->Cells[j]->Value = "j";
					break;
				case 107:
					dataGridView3->Rows[i]->Cells[j]->Value = "k";
					break;
				case 108:
					dataGridView3->Rows[i]->Cells[j]->Value = "l";
					break;
				case 109:
					dataGridView3->Rows[i]->Cells[j]->Value = "m";
					break;
				case 110:
					dataGridView3->Rows[i]->Cells[j]->Value = "n";
					break;
				case 111:
					dataGridView3->Rows[i]->Cells[j]->Value = "o";
					break;
				case 112:
					dataGridView3->Rows[i]->Cells[j]->Value = "p";
					break;
				case 113:
					dataGridView3->Rows[i]->Cells[j]->Value = "q";
					break;
				case 114:
					dataGridView3->Rows[i]->Cells[j]->Value = "r";
					break;
				case 115:
					dataGridView3->Rows[i]->Cells[j]->Value = "s";
					break;
				case 116:
					dataGridView3->Rows[i]->Cells[j]->Value = "t";
					break;
				case 117:
					dataGridView3->Rows[i]->Cells[j]->Value = "u";
					break;
				case 118:
					dataGridView3->Rows[i]->Cells[j]->Value = "v";
					break;
				case 119:
					dataGridView3->Rows[i]->Cells[j]->Value = "w";
					break;
				case 120:
					dataGridView3->Rows[i]->Cells[j]->Value = "x";
					break;
				case 121:
					dataGridView3->Rows[i]->Cells[j]->Value = "y";
					break;
				case 122:
					dataGridView3->Rows[i]->Cells[j]->Value = "z";
					break;

				}
				Bigvec.pop_back();
			}
		}

		SetFileAttributes(L"File.txt", 1);
	}






	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		MyForm1 ^form = gcnew MyForm1();
		form->Show();

		MyForm2 ^form1 = gcnew MyForm2();
		form1->Show();
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) 
	{

	}



};
}
