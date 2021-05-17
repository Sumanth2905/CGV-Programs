// Code to draw lines using GL_LINES
#include<GL/glut.h>
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(380.0, 260.0);
	glVertex2f(250.0, 230.0);
	glVertex2f(200.0, 150.0);
	glVertex2f(70.0, 50.0);
	glEnd();
	glFlush();
}
void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
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
	glutCreateWindow("Lines using glut");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}
