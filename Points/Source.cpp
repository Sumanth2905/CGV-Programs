// Drawing points using GL_POINTS
#include<GL/glut.h>
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	glVertex2f(450.0, 100.0);
	glVertex2f(150.0, 80.0);
	glVertex2f(170.0, 180.0);
	glVertex2f(220.0, 150.0);
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
	glutCreateWindow("Points using glut");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}
