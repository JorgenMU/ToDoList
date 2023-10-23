#pragma once
#include <wx/wx.h>

// Declaration of the App class, representing the application itself.
class App : public wxApp
{
public:
	bool OnInit();  // Initialization function called when the application starts.
};

