// Code to demonstrate usage of GL_QUADS
#include<GL/glut.h>
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.5, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(350.0, 200.0);
	glVertex2f(350.0, 450.0);
	glVertex2f(150.0, 350.0);
	glVertex2f(150.0, 220.0);
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
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Quad");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}
