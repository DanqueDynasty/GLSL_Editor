#ifndef OBJMODEL_H
#define OBJMODEL_H

#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "Vertex.h"
#include "Math/Vector.h"

class OBJModel
{
public:
    OBJModel();
    OBJModel(const std::string& fileName);
    std::vector<Vertex> vertices;
    std::vector<int> index;
};

#endif // OBJMODEL_H
