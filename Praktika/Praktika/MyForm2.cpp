#include "MyForm2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void Main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Praktika::MyForm2 form;
	Application::Run(%form);
}
