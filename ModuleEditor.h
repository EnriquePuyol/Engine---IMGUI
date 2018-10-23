#ifndef __ModuleEditor_h__
#define __ModuleEditor _h__

#include "Module.h"
#include "Globals.h"

#include "GL/glew.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_sdl.h"
#include "imgui/imgui_impl_opengl3.h"

class ModuleEditor : public Module
{
public:
	ModuleEditor();
	~ModuleEditor();

	bool init();
	update_status PreUpdate();
	update_status Update();
	update_status PostUpdate();
	bool CleanUp();

	void GetEvent(SDL_Event & event);

public:
	const char* glsl_version = "#version 130";

};

#endif // !_ModuleEditor_