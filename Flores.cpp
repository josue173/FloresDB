#include "Flores.h"
using namespace FloresDB;

[STAThreadAttribute]

int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew Flores());
}