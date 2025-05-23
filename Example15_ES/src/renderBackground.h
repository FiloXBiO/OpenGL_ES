/**
 * OpenGL ES 3.0 - Example 15
 *
 * @author  Norbert Nopper norbert@nopper.tv
 *
 * Homepage: http://nopper.tv
 *
 * Copyright Norbert Nopper
 */

#include "GLES3/glus3.h"

GLUSboolean initBackground();

GLUSvoid reshapeBackground(GLUSfloat projectionMatrix[16]);

GLUSboolean renderBackground(GLUSfloat viewMatrix[16]);

GLUSvoid terminateBackground(GLUSvoid);
