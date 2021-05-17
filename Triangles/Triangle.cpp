// Code to draw triangle using GL_TRIANGLES
#include<GL/glut.h>
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.5, 0.0);
	glBegin(GL_TRIANGLES);
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
	glutInitWindowSize(320,320);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Triangle using glut");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}
