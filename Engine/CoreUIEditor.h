//
//  CoreUIEditor.h
//  CoreEngine3D(OSX)
//
//  Created by Jody McAdams on 7/14/12.
//  Copyright (c) 2012 Jody McAdams. All rights reserved.
//

#ifndef CoreEngine3D_OSX__CoreUIEditor_h
#define CoreEngine3D_OSX__CoreUIEditor_h && !defined(_DEBUG_PC)

#include "GUI/CoreUIView.h"
#include <string>
#include <vector>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Browser.H>

class CoreUIEditor;
extern CoreUIEditor* UIEDITOR;

struct CoreUI_Container
{
	std::string filepath;
	CoreObjectHandle rootView;
};

class CoreUIEditor
{
public:
	CoreUIEditor();
	~CoreUIEditor();
	void Clear();
	void AddViewContainer(const CoreUI_Container& container);
	void SetVisible(bool isVisible);
private:
	Fl_Window* m_toolWindow;
	Fl_Browser* m_toolWindowBrowser;
	void AddChildViews(CoreUIView* pParentView);
};

#endif