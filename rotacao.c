#include <GL/glut.h>

void desenhar(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glTranslatef(-0.3f,0.0f,0.0f);
    glColor3f(1.0,0.0,0.0); //cor do triangulo
    glBegin(GL_TRIANGLES); // criando triangulo
        glVertex2f(-0.3,-0.3);
        glVertex2f(0.3,-0.3);
        glVertex2f(0.0, 0.3);
        //   glVertex2f( 0.0f, 0.0f); 
        //   glVertex2f( 0.25f, 0.50f); 
        //   glVertex2f( 0.50f, 0.0f); 
    glEnd();

    //.................................................//
    //glRotatef(20,1,0,0); // gira o objeto
    // glRotatef(45.0f,0.0f,0.0f,1.0f);// roda 45 graus no eixo z 
    glTranslatef(0.7f,0.0f,0.0f);
    glRotatef(90, 0, 0, 1);
    glColor3f(0.0,0.0,1.0); //cor do triangulo
    glBegin(GL_TRIANGLES); // criando triangulo
        glVertex2f(-0.3,-0.3);
        glVertex2f(0.3,-0.3);
        glVertex2f(0.0, 0.3);
        //   glVertex2f( 0.0f, 0.0f); 
        //   glVertex2f( 0.25f, 0.50f); 
        //   glVertex2f( 0.50f, 0.0f); 
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