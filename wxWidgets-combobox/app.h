#ifndef app_h
#define app_h

#include "main-frame.h"

class App : public wxApp {
	private:

	public:
	bool OnInit();
};
wxIMPLEMENT_APP(App);

#endif