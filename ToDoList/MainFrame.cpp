#include "MainFrame.h"
#include <wx/wx.h>
#include <vector>
#include <string>
#include "Task.h"

// Implementation of the MainFrame class constructor.
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
	CreateControls();
	BindEventHandlers();
}

void MainFrame::CreateControls()
{
	wxFont headlinrFont(wxFontInfo(wxSize(0, 36)).Bold());
	wxFont mainFont(wxFontInfo(wxSize(0, 24)));

	panel = new wxPanel(this);
	panel->SetFont(mainFont);
	 
	headlineText = new wxStaticText(panel, wxID_ANY, "To-Do List", wxPoint(0, 22), wxSize(800, -1), wxALIGN_CENTER_HORIZONTAL);

	inputField = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(100, 80), wxSize(495, 35));
	addButton = new wxButton(panel, wxID_ANY, "Add", wxPoint(600, 80), wxSize(100, 35));
	checkListBox = new wxCheckListBox(panel, wxID_ANY, wxPoint(100, 120), wxSize(600, 400));
	clearButton = new wxButton(panel, wxID_ANY, "clear", wxPoint(100, 525), wxSize(100, 35));
}

void MainFrame::BindEventHandlers()
{
	addButton->Bind(wxEVT_BUTTON, &MainFrame::OnAddButtonClicked, this);
}

void MainFrame::OnAddButtonClicked(wxCommandEvent& evt)
{
	AddTaskFromInput();
	
}

void MainFrame::AddTaskFromInput()
{
	wxString description = inputField->GetValue();

	if (!description.IsEmpty()) {
		checkListBox->Insert(description, checkListBox->GetCount());
		inputField->Clear();
	}

	inputField->SetFocus();
}
