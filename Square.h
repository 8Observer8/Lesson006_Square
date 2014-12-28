#ifndef SQUARE_H
#define SQUARE_H

#include <QOpenGLShaderProgram>
#include <vector>

class Square
{
public:
    Square( QOpenGLShaderProgram *program,
            int vertexAttr,
            int colorAttr );
    ~Square();

    void draw();

private:
    void initVertices();
    void initColors();

    std::vector<float> m_vertices;
    std::vector<float> m_colors;

    QOpenGLShaderProgram *m_program;
    int m_vertexAttr;
    int m_colorAttr;
};

#endif // SQUARE_H
