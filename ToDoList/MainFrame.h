#pragma once
#include <wx/wx.h>

// Declaration of the MainFrame class, representing the application's main window.
class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);  // Constructor to create the main frame.
private:
	void CreateControls();
	void BindEventHandlers();

	void OnAddButtonClicked(wxCommandEvent& evt);
	void OnInputEnter(wxCommandEvent& evt);
	void OnListKeyDown(wxKeyEvent& evt);

	void AddTaskFromInput();
	void DeleteSelectedTask();
	void MoveSelectedTask(int offset);
	void SwapTasks(int i, int j);


	wxPanel* panel;
	wxStaticText* headlineText;
	wxTextCtrl* inputField;
	wxButton* addButton;
	wxCheckListBox* checkListBox;
	wxButton* clearButton;
};