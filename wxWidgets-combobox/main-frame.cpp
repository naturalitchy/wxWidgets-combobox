#include "main-frame.h"

MainFrame::MainFrame(const wxString &title)
	: wxFrame(nullptr, wxID_ANY, title) {

	wxArrayString   m_arrItems;

	// Create common wxArrayString array
	m_arrItems.Add(wxT("Solid"));
	m_arrItems.Add(wxT("Transparent"));
	m_arrItems.Add(wxT("Dot"));

	//wxComboBox *comboBox = new wxComboBox(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(100,-1),
										  //m_arrItems, 0, wxDefaultValidator, _T("ID_COMBOBOX1"));
	//comboBox->Set(m_arrItems);
	wxComboBox *comboBox = new wxComboBox(this, wxID_ANY, "VALUE String", wxDefaultPosition, wxSize(100,-1));
	comboBox->Append(wxT("HELLO!!!"));
	
	comboBox->SetSize(200,200);


}

