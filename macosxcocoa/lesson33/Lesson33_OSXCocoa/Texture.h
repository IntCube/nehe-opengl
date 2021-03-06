#ifndef __TEXTURE_H__
#define __TEXTURE_H__

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <OpenGL/gl.h>
#else
#pragma comment(lib, "Opengl32.lib")					//Link to OpenGL32.lib so we can use OpenGL stuff

#include <windows.h>									// Standard windows header
#include <gl\gl.h>										// Header for OpenGL32 library
#endif
#include <stdio.h>										// Standard I/O header 

typedef	struct									
{
	GLubyte	* imageData;									// Image Data (Up To 32 Bits)
	GLuint	bpp;											// Image Color Depth In Bits Per Pixel
	GLuint	width;											// Image Width
	GLuint	height;											// Image Height
	GLuint	texID;											// Texture ID Used To Select A Texture
	GLuint	type;											// Image Type (GL_RGB, GL_RGBA)
} Texture;	

#if defined(__cplusplus)
extern "C" {
#endif
bool LoadTGA(Texture * texture, const char * filename);
#if defined(__cplusplus)
}
#endif
#endif