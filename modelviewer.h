#ifndef MODELVIEWER_H
#define MODELVIEWER_H

#include <QtOpenGL/QGLWidget>
#include <QtOpenGL/QtOpenGL>

class ModelViewer : public QGLWidget
{
    Q_OBJECT
public:
    ModelViewer(QWidget* parent = 0);
    virtual ~ModelViewer();
protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
private:
    QOpenGLContext* mContext;
};

#endif // MODELVIEWER_H
