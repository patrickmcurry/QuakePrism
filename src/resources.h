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

#pragma once
#include "TextEditor.h"
#include "imgui.h"
#include "SDL.h"
#include "SDL_opengl.h"
#include <filesystem>
#include <vector>
#include "imfilebrowser.h"

namespace QuakePrism {
// Font Assets
extern ImFont *ubuntuMonoFont;
extern ImFont *ubuntuFont;

// Colormap
extern unsigned char colormap[256][3];

// Image Assets
extern GLuint fileIcon;
extern GLuint directoryIcon;
extern GLuint modelIcon;
extern GLuint imageIcon;
extern GLuint playButton;
extern GLuint forwardButton;
extern GLuint backButton;
extern GLuint appIcon;

extern GLuint newCard;
extern GLuint importCard;
extern GLuint libreCard;

extern std::vector<TextEditor> editorList;

// Config Assets
extern std::experimental::filesystem::path configFile;
extern std::experimental::filesystem::path projectsDirectory;

// Essential Paths
extern std::vector<std::experimental::filesystem::path> currentQCFileNames;
extern std::experimental::filesystem::path currentModelName;
extern std::experimental::filesystem::path currentTextureName;
extern std::experimental::filesystem::path baseDirectory;
extern std::experimental::filesystem::path executingDirectory;

void loadIcons();

void loadFonts();

void loadColormap();

bool configFound();

} // namespace QuakePrism
