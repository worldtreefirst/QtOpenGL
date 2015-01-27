#ifndef OPENGLSHADERPROGRAM_H
#define OPENGLSHADERPROGRAM_H

#include <QOpenGLShaderProgram>
#include "openglcommon.h"

// Register to check OpenGLBuffer
class OpenGLShaderProgramChecked : public QOpenGLShaderProgram
{
public:
  explicit OpenGLShaderProgramChecked(QObject *parent = 0) : QOpenGLShaderProgram(parent) {}
  GL_CHECK(QOpenGLShaderProgram,addShader,QOpenGLShader*);
  GL_CHECK(QOpenGLShaderProgram,addShaderFromSourceCode,QOpenGLShader::ShaderType,const char*);
  GL_CHECK(QOpenGLShaderProgram,addShaderFromSourceCode,QOpenGLShader::ShaderType,const QByteArray&);
  GL_CHECK(QOpenGLShaderProgram,addShaderFromSourceCode,QOpenGLShader::ShaderType,const QString&);
  GL_CHECK(QOpenGLShaderProgram,addShaderFromSourceFile,QOpenGLShader::ShaderType,const QString&);
  GL_CHECK(QOpenGLShaderProgram,bind);
  GL_CHECK(QOpenGLShaderProgram,create);
  GL_CHECK(QOpenGLShaderProgram,link);
};

GL_QFINALIZE(OpenGLShaderProgram,Checked);

#endif // OPENGLSHADERPROGRAM_H