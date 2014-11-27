#ifndef VERTEX_H
#define VERTEX_H

#include "Math/Vector.h"

struct Vertex{
    Vertex(const Vector3f& vert, const Vector2f& tex, const Vector3f& normal = Vector3f(0.0f, 0.0f, 0.0f)){
        this->position = vert;
        this->texCoord = tex;
        this->normal = normal;
    }
    Vector3f position;
    Vector2f texCoord;
    Vector3f normal;
};

#endif // VERTEX_H
