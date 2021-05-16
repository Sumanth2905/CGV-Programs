// Code to draw lines using GL_LINE_LOOP
#include<GL/glut.h>
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.5, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(380.0, 300.0);
	glVertex2f(100.0, 120.0);
	glVertex2f(380.0, 120.0);
	glVertex2f(100.0, 300.0);
	glEnd();
	glFlush();
}
void init() {
	glClearColor(1.0, 1.0, 1.0, 0.5);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);

}
void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(5, 5);
	glutCreateWindow("LineStrip using glut");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}
