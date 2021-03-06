#pragma once
#ifndef _DRAWBUFFER_HPP_
#define _DRAWBUFFER_HPP_
#include <gl/gl_core_3_3.h>

class GeometryBuffer;

/**
 * DrawBuffer stores VAO state
 */
class DrawBuffer {
    GLuint vao;

    GLenum facetype;

public:
    DrawBuffer();
    ~DrawBuffer();

    GLuint getVAOName() const {
        return vao;
    }

    void setFaceType(GLenum ft) {
        facetype = ft;
    }

    GLenum getFaceType() const {
        return facetype;
    }

    /**
     * Adds a Geometry Buffer to the Draw Buffer.
     */
    void addGeometry(GeometryBuffer* gbuff);
};

#endif
