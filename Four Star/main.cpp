#include <GLUT/glut.h>
#include <stdio.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(0.0, 100, 0.0, 100, -1.0, 1.0);
    //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f( 1 ,0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(17, 23);
    glVertex2i(20, 15);
    glVertex2i(23, 23);
    glVertex2i(30, 25);
    glVertex2i(23, 28);
    glVertex2i(20, 35);
    glVertex2i(17, 28);
    glVertex2i(10, 25);
    glEnd();
    glColor3f(0.186, 0.353, 0.810);
    glBegin(GL_POLYGON);
    glVertex2i(27, 12);
    glVertex2i(30, 5);
    glVertex2i(33, 12);
    glVertex2i(40, 15);
    glVertex2i(33, 18);
    glVertex2i(30, 25);
    glVertex2i(27, 18);
    glVertex2i(20, 15);
    glEnd();
    glColor3f(0.146, 0.910, 0.298);
    glBegin(GL_POLYGON);
    glVertex2i(37, 23);
    glVertex2i(40, 15);
    glVertex2i(43, 23);
    glVertex2i(50, 25);
    glVertex2i(43, 28);
    glVertex2i(40, 35);
    glVertex2i(37, 28);
    glVertex2i(30, 25);
    glEnd();
    glColor3f(0.965, 0.0588, 0.980);
    glBegin(GL_POLYGON);
    glVertex2i(27, 31);
    glVertex2i(30, 25);
    glVertex2i(33, 31);
    glVertex2i(40, 35);
    glVertex2i(33, 38);
    glVertex2i(30, 45);
    glVertex2i(27, 38);
    glVertex2i(20, 35);
    glEnd();
    
    
    
    glutSwapBuffers();
}

int main(int argc,char **argv){
    
    
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
