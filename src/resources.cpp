/*
Copyright (C) 2024 Lance Borden

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 3.0
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.

*/

#include "resources.h"
#include "util.h"

namespace QuakePrism::UI {
// Fonts
ImFont *ubuntuFont;
ImFont *jetBrainsFont;

// Images
GLuint fileIcon;
GLuint directoryIcon;
GLuint playButton;
GLuint forwardButton;
GLuint backButton;

void loadFonts() {
	ImGuiIO &io = ImGui::GetIO();
	(void)io;

	ubuntuFont = io.Fonts->AddFontFromFileTTF("res/Ubuntu-M.ttf", 21.0f);
	IM_ASSERT(ubuntuFont != nullptr);
	jetBrainsFont =
		io.Fonts->AddFontFromFileTTF("res/JetBrainsMono-Medium.ttf", 21.0f);
	IM_ASSERT(jetBrainsFont != nullptr);
}

void loadIcons() {
	QuakePrism::LoadTextureFromFile("res/FileIcon.png", &fileIcon, nullptr,
									nullptr);
	QuakePrism::LoadTextureFromFile("res/DirectoryIcon.png", &directoryIcon,
									nullptr, nullptr);
	QuakePrism::LoadTextureFromFile("res/play.png", &playButton, nullptr,
									nullptr);
	QuakePrism::LoadTextureFromFile("res/forward.png", &forwardButton, nullptr,
									nullptr);
	QuakePrism::LoadTextureFromFile("res/back.png", &backButton, nullptr,
									nullptr);
}

} // namespace QuakePrism::UI
