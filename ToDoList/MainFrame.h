#pragma once
#include <wx/wx.h>

// Declaration of the MainFrame class, representing the application's main window.
class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);  // Constructor to create the main frame.
private:
	void CreateControls();

	wxPanel* panel;
	wxStaticText* headlineText;
	wxTextCtrl* inputField;
	wxButton* addButton;
	wxCheckListBox* checkListButton;
	wxButton* clearButton;
};