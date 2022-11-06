#include "main-frame.h"

MainFrame::MainFrame(const wxString &title)
	: wxFrame(nullptr, wxID_ANY, title) {
	wxPanel *panelLeft = new wxPanel(this);
	wxPanel *panelRight = new wxPanel(this);
	panelLeft->SetBackgroundColour(*wxYELLOW);
	panelRight->SetBackgroundColour(*wxYELLOW);
	//wxPanel *panelLeftInner = new wxPanel(panelLeft, wxID_ANY, wxPoint(50,50), wxSize(130,30));
	
	wxArrayString   m_arrItems;
	m_arrItems.Add(wxT("Solid"));
	m_arrItems.Add(wxT("Transparent"));
	m_arrItems.Add(wxT("Dot"));
	wxComboBox *comboBox = new wxComboBox(panelLeft, wxID_ANY, wxEmptyString, wxPoint(150,50), wxSize(100,-1),
										  m_arrItems, wxCB_READONLY, wxDefaultValidator, _T("ID_COMBOBOX1"));
	comboBox->Set(m_arrItems);
	comboBox->SetBackgroundColour(*wxBLACK);
	
	wxBoxSizer *sizerMain = new wxBoxSizer(wxHORIZONTAL);
	sizerMain->Add(panelLeft, 1, 1, wxEXPAND | wxALL);
	sizerMain->Add(panelRight, 1, 1, wxEXPAND | wxALL);

	this->SetSizer(sizerMain);


	/*
	wxComboBox *comboBox = new wxComboBox(this, wxID_ANY, "VALUE String", wxDefaultPosition, wxSize(100,-1));
	comboBox->Append(wxT("HELLO!!!"));
	*/
}

