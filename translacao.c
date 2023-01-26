#include <GL/glut.h>

void desenhar(void)
{
    //glLoadIdentity();

    glTranslatef(0.0f,0.0f,0.0f);

    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.0f,0.0f);
        glVertex2f(0.25f,0.50f);
        glVertex2f(0.50f,0.0f);
    glEnd();

    glTranslatef(0.0f,-0.8f,0.0f);//Translação

    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.0f,0.0f);
        glVertex2f(0.25f,0.50f);
        glVertex2f(0.50f,0.0f);
    glEnd();

    glFlush();
    
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Triangulo");

    glutDisplayFunc(desenhar);

    glutMainLoop();

    return 0;
}