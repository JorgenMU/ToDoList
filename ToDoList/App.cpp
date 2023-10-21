#include "App.h"
#include "MainFrame.h"

// Entry point for the application.
wxIMPLEMENT_APP(App);

// Initialization function that creates the main application window.
bool App::OnInit()
{
    MainFrame* mainFrame = new MainFrame("To-Do List");
    mainFrame->SetClientSize(800, 600);
    mainFrame->Center();
    mainFrame->Show();
    return true;
}
