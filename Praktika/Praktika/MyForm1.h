#pragma once
#define _CRT_SECURE_NO_WARNINGS
//#include <STAThread>
#include <iostream>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <vector>
#include <DLLPrac.h>
#include <string>
#include <Windows.h>
#include <string.h>


namespace Praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  button1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Сообщение от клиента:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(135, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 57);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Запустить сервер";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 315);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MailSlotsServer";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		string s;

		////////////////////////////////////////////////////// Локальная переменная для почтового ящика
		HANDLE hSlots;

		////////////////////////////////////////////////////// Локальные переменные для Readfile
		BOOL bReadfile;
		DWORD dwNoBytesRead;
		char szReadFileBuffer[1023];
		DWORD dwReadFileBufferSize = sizeof(szReadFileBuffer);

		////////////////////////////////////////////////////// Создание почтового ящика
		hSlots = CreateMailslot(
			L"\\\\.\\mailslot\\MAILSLOT",
			0,
			MAILSLOT_WAIT_FOREVER,
			NULL);
		if (hSlots == INVALID_HANDLE_VALUE)
		{
			label1->Text = "Error №";
			label1->Text += GetLastError();
		}
		else
		{
			label1->Text = "Success";
		}

		////////////////////////////////////////////////////// Определение Readfile
		bReadfile = ReadFile(
			hSlots,
			szReadFileBuffer,
			dwReadFileBufferSize,
			&dwNoBytesRead,
			NULL);

		if (bReadfile == FALSE)
		{
			label2->Text = "Error";
		}
		else
		{
			label2->Text = "Success";
			label3->Text = "Data Reading From The Client -> ";
			int i = 0;
			while (i != 50);
			{
				label3->Text += szReadFileBuffer[i];
				i++;
			}
		}

		CloseHandle(hSlots);

	}
	};
}
