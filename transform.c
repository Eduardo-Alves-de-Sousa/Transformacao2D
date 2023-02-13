//transformações via teclado 2D
#include <GL/glut.h>
#include <GL/gl.h>

GLfloat escala = 1;
GLfloat tranx, trany = 0;
GLfloat rotate = 1;

void draw (void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glScalef(escala,escala,0);
    glTranslatef(tranx, trany,0);
    glRotatef(rotate,rotate, rotate,0);
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(-2,2);
    glColor3f(0,0,.3);
    glVertex2f(2,2);
    glVertex2f(2,-2);
    glColor3f(0,1,0);
    glVertex2f(-2,-2);
    glEnd();
    glFlush();
}

void teclado(unsigned char teclas, GLint x, GLint y){
    switch(teclas){
        case '+': escala++;
        break;
        case '-': escala--;
        break;
        case 'w': trany+=3;
        break;
        case 's': trany-=3;
        break;
        case 'a': tranx-=3;
        break;
        case 'd': tranx+=3;
        break;
        case 'y': rotate++;
        break;
        case 'h': rotate--;
        break;
    }
    draw();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutCreateWindow("window");
    glClearColor(0,.2,.2,0);
    glutKeyboardFunc(teclado);
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
