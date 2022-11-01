#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PBL2APP::MainForm form;
	Application::Run(% form);
}