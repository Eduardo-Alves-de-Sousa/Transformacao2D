#include <GL/glut.h>

void desenhar(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0); //cor do triangulo
    glBegin(GL_TRIANGLES); // criando triangulo
        glVertex2f(-0.3,-0.3);
        glVertex2f(0.3,-0.3);
        glVertex2f(0.0, 0.3);
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