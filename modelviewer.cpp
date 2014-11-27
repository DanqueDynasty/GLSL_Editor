#include "modelviewer.h"

ModelViewer::ModelViewer(QWidget* parent) : QGLWidget(parent)
{

}

void ModelViewer::initializeGL(){
    mContext = new QOpenGLContext(this);
    mContext->create();
}

void ModelViewer::resizeGL(int w, int h){

}

void ModelViewer::paintGL(){

}

ModelViewer::~ModelViewer(){

}
