#include "app.h"

bool App::OnInit() {
	MainFrame *mainFrame = new MainFrame(" Station V ");
	mainFrame->SetSize(1360, 755);
	mainFrame->Center();

	mainFrame->Show();

	return true;
}






