#include "Globals.h"
#include "Application.h"
#include "ModuleEditor.h"
#include "ModuleWindow.h"
#include "ModuleRender.h"


ModuleEditor::ModuleEditor()
{
}


ModuleEditor::~ModuleEditor()
{
}

bool ModuleEditor::init()
{
	// Se llama en Module Render
	//glewInit();
	ImGui::CreateContext(); // <- Arreglar

	ImGui_ImplSDL2_InitForOpenGL(App->window->window, App->renderer->context);

	ImGui_ImplOpenGL3_Init(glsl_version);

	return true;
}

update_status ModuleEditor::PreUpdate()
{
	ImGui_ImplSDL2_NewFrame(App->window->window);
	ImGui_ImplOpenGL3_NewFrame();

	return UPDATE_CONTINUE;
}

update_status ModuleEditor::Update()
{
	
	
	return UPDATE_CONTINUE;
}

update_status ModuleEditor::PostUpdate()
{
	ImGui::Render();
	
	return UPDATE_CONTINUE;
}

bool ModuleEditor::CleanUp()
{
	ImGui_ImplSDL2_Shutdown();
	ImGui_ImplOpenGL3_Shutdown();

	return true;
}

void ModuleEditor::GetEvent(SDL_Event & event)
{
	
}
