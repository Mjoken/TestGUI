#include "GUIWinForms.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TestGUI::GUIWinForms form;
	Application::Run(% form);
return 0;
}