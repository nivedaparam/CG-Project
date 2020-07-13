#include<fstream>
#include<iostream>
#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#include<string.h>
using namespace std;

//frame0 construction
void bitmap_output(GLfloat x, GLfloat y, const char *string, void *font)
{
	int len, i;
	glRasterPos2f(x, y);
	len = (int)strlen(string);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, string[i]);
	}
}
void intro()
{
	
	bitmap_output(-0.7, 0.8, "Jyothy Institute Of Technology", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-0.7, 0.7, "Computer Graphics Project", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-0.7,0.6, "Evolution of Mobile Phones", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-.7,.5, "Press Spacebar to Start", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-.7, .4, "Project By:", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-.7, .3, "Niveditha P - 1JT17CS028", GLUT_BITMAP_TIMES_ROMAN_24);
	
}
void intro1()
{
	glColor3f(1,1,1);
	bitmap_output(-0.2, 0.2, "Mobile Phone Evolution", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-0.2,0, "The Past The Present The Future", GLUT_BITMAP_TIMES_ROMAN_24);

}


//frame1 construction
GLfloat b1=.1,b2=.1,s=.1;

void homebutton()
{
	//n02homebutton
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(-.025, -.1);
	glVertex2f(-.025, -.15);
	glVertex2f(.025, -.15);
	glVertex2f(.025, -.1);
	glEnd();
}
void keypad()
{
	//Keypad Background
	glBegin(GL_QUADS);
	glColor3f(0,0,1.0);
	glVertex2f(-.3,.1);
	glVertex2f(.3,.1);
	glVertex2f(.3,-.7);
	glVertex2f(-.3,-.7);
	glEnd();
	//no1
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(-.3, -.2);
	glVertex2f(-.2 , -.2);
	glVertex2f(-.2, -.1);
	glVertex2f(-.3, -.1);
	glEnd();
	//n03
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(.2, -.1);
	glVertex2f(.3, -.1);
	glVertex2f(.3, -.2);
	glVertex2f(.2, -.2);
	glEnd();
	//no4
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(-.3, -.4);
	glVertex2f(-.2 , -.4);
	glVertex2f(-.2, -.3);
	glVertex2f(-.3, -.3);
	glEnd();
	//no5
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(-.05, -.3);
	glVertex2f(-.05, -.4);
	glVertex2f(.05, -.4);
	glVertex2f(.05, -.3);
	glEnd();	
	//no6
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(.2, -.3);
	glVertex2f(.3, -.3);
	glVertex2f(.3, -.4);
	glVertex2f(.2, -.4);
	glEnd();
	//no7
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(-.3, -.6);
	glVertex2f(-.2 , -.6);
	glVertex2f(-.2, -.5);
	glVertex2f(-.3, -.5);
	glEnd();
	//no8
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(-.05, -.5);
	glVertex2f(-.05, -.6);
	glVertex2f(.05, -.6);
	glVertex2f(.05, -.5);
	glEnd();	
	//no9
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(.2, -.5);
	glVertex2f(.3, -.5);
	glVertex2f(.3, -.6);
	glVertex2f(.2, -.6);
	glEnd();
}

//frame2 construction
GLfloat q1=.0,q2=.0;
void quad1()
{
	glBegin(GL_QUADS);
	glColor3f(0,0,1.0); // Left Side Border
	glVertex2f(-.375,-.7);
	glVertex2f(-.3,-.7);
	glVertex2f(-.3, .7);
	glVertex2f(-.375, .7);
	glEnd();
}
void quad2(){
glBegin(GL_QUADS);
	glColor3f(0,0,1.0); 	// Right Side Border
	glVertex2f(.375,-.7);
	glVertex2f(.3,-.7);
	glVertex2f(.3, .7);
	glVertex2f(.375, .7);
	glEnd();
}

//frame3 construction
GLfloat nl=0,h=0;
void hb()
{
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(-.025, -.725);
	glVertex2f(-.025, -.775);
	glVertex2f(.025, -.775);
	glVertex2f(.025, -.725);
	glEnd();
}
void notchr()
{
	//notch rightpart
	glBegin(GL_QUADS);
	glColor3f(0,0,1.0); 	// Top Notch Right Part
	glVertex2f(-.375,.7);
	glVertex2f(-.25,.7);
	glVertex2f(-.25,.775);
	glVertex2f(-.375,.775);
	glEnd();
}
void notchl()
{
//notch leftpart
	glBegin(GL_QUADS); 
	glColor3f(0,0,1.0);	// Top Notch Left Part
	glVertex2f(.375,.7);
	glVertex2f(.25,.7);
	glVertex2f(.25,.775);
	glVertex2f(.375,.775);
	glEnd();
}

//frame4 construction
GLfloat no=.0,c=0,s5=.0;
void camera()
{
	glColor3f(0,0,0);
	glPointSize(12.0);
	glBegin(GL_POINTS);
	glVertex2f(-.2,.75-.02);
	glEnd();
}
void notch()
{
	glBegin(GL_QUADS);
	glColor3f(0,0,1.0); // Top Notch Part
	glVertex2f(-.25, .7);
	glVertex2f(.25,.7);
	glVertex2f(.25,.775);
	glVertex2f(-.25,.775);
	glEnd();

	//Sensor
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(-.1, .75-.025);
	glVertex2f(-.1, .775-.025);
	glVertex2f(.1, .775-.025);
	glVertex2f(.1, .75-.025);
	glEnd();
}
void bezel()
{
	glBegin(GL_QUADS);                                                                     
	glColor3f(0,0,1.0);	// Phone Bezel Part																	
	glVertex2f(-.375,-.775);																	
	glVertex2f(.375,-.775);   
 
	glVertex2f(.375, -.7);
	glVertex2f(-.375,-.7);
	glEnd();
}

//display functions
void display0()
{
intro();
glFlush();
glutPostRedisplay();
}
void display1(void) 
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,1);
	bitmap_output(-0.7, 0, "Keypad To", GLUT_BITMAP_TIMES_ROMAN_24);
    	bitmap_output(0.5, 0, "Touch Screen", GLUT_BITMAP_TIMES_ROMAN_24);
	glBegin(GL_QUADS);	//Big Blue
	glColor3f(0,0,1.0);
	glVertex2f(-.4, -.8);
	glVertex2f(.4,-.8);
	glVertex2f(.4,.8);
	glVertex2f(-.4,.8);
	glEnd();
	glBegin(GL_QUADS);	//White
	glColor3f(1,1,1);
	glVertex2f(-.3,-.7);
	glVertex2f(.3,-.7);
	glVertex2f(.3, .7);
	glVertex2f(-.3,.7);
	glEnd();
	
	glPushMatrix();
	glTranslatef(0,b1,0);
	keypad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, b2,0);
	homebutton();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0,s,0);
	glPopMatrix();

	glColor3f(0,0,0);
	glPointSize(10.0);
	glBegin(GL_POINTS);
	glVertex2f(-.2,.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(-.1, .75);
	glVertex2f(-.1, .775);
	glVertex2f(.1, .775);
	glVertex2f(.1, .75);
	glEnd();

	glFlush();
}
void display2(void) 
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,1);
	bitmap_output(-0.9, 0, "Touch Screen To", GLUT_BITMAP_TIMES_ROMAN_24);
    	bitmap_output(0.5, 0, "Bezelless Display", GLUT_BITMAP_TIMES_ROMAN_24);
	glBegin(GL_QUADS);
	glColor3f(0,0,1.0);
	glVertex2f(-.4, -.8);
	glVertex2f(.4,-.8);
	glVertex2f(.4,.8);
	glVertex2f(-.4,.8);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	glVertex2f(-.375,-.7);
	glVertex2f(.375,-.7);
	glVertex2f(.375, .7);
	glVertex2f(-.375, .7);
	glEnd();

	//quad1
	glPushMatrix();
	glTranslatef(q1,0,0);
	quad1();
	glPopMatrix();

	glPushMatrix();
	glTranslatef( q2,0,0);
	quad2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0,0,0);
	glPopMatrix();

	
	//camera
	glColor3f(0,0,0);
	glPointSize(10.0);
	glBegin(GL_POINTS);
	glVertex2f(-.2,.75);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(-.025, -.725);
	glVertex2f(-.025, -.775);
	glVertex2f(.025, -.775);
	glVertex2f(.025, -.725);
	glEnd();

	//sensor
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(-.1, .75);
	glVertex2f(-.1, .775);
	glVertex2f(.1, .775);
	glVertex2f(.1, .75);
	glEnd();

	
}
void display3(void) 
{
	glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1,1,1);
	bitmap_output(-0.9, 0, "Bezelless To", GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(0.5, 0, "Notch Display", GLUT_BITMAP_TIMES_ROMAN_24);
	glBegin(GL_QUADS);
	glColor3f(0,0,1.0);
	glVertex2f(-.4, -.8);
	glVertex2f(.4,-.8);
	glVertex2f(.4,.8);
	glVertex2f(-.4,.8);
	glEnd();

	glBegin(GL_QUADS);                                                                      /*Change the green quad into polygon to  make the notch and delete */
	glColor3f(1,1,1);									/*other two quads*/
	glVertex2f(-.375,-.7);																	
	glVertex2f(.375,-.7);
	glVertex2f(.375, .775);
	glVertex2f(-.375, .775);
	glEnd();

	glPushMatrix();
	glTranslatef(0,-h,0);
	hb();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0,nl,0);
	notchl();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0,nl,0);
	notchr();
	glPopMatrix();

	//notch
	glBegin(GL_QUADS);
	glColor3f(0,0,1.0); //Top Notch
	glVertex2f(-.25, .7);
	glVertex2f(.25,.7);
	glVertex2f(.25,.775);
	glVertex2f(-.25,.775);
	glEnd();

	glColor3f(0,0,0);
	glPointSize(10.0);
	glBegin(GL_POINTS);
	glVertex2f(-.2,.75);
	glEnd();
	
	
	//Sensor
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(-.1, .75);
	glVertex2f(-.1, .775);
	glVertex2f(.1, .775);
	glVertex2f(.1, .75);
	glEnd();

	glFlush();
}
void display4(void) 
{
	glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1,1,1);
	bitmap_output(-0.9, 0, "Notch display to", GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(0.5, 0, "O-Notch Display", GLUT_BITMAP_TIMES_ROMAN_24);
	glBegin(GL_QUADS);
	glColor3f(0,0,1.0);
	glVertex2f(-.4, -.8);
	glVertex2f(.4,-.8);
	glVertex2f(.4,.8);
	glVertex2f(-.4,.8);
	glEnd();
	glBegin(GL_QUADS);                                                                      /*Change the green quad into polygon to  make the notch and delete */
	glColor3f(1.0,1.0,1.0);									/*other two quads*/
	glVertex2f(-.375,-.775);																	
	glVertex2f(.375,-.775);
	glVertex2f(.375, .775);
	glVertex2f(-.375, .775);
	glEnd();
	
	
	
	glPushMatrix();
	glTranslatef(0,no,0);
	notch();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-c,0,0);
	camera();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0,-no,0);
	bezel();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,-s5,0);
	glPopMatrix();
	glFlush();
}
void display5()
{
glClear(GL_COLOR_BUFFER_BIT);
intro1();
glFlush();
glutPostRedisplay();
}


//idle functions
void spindisplay4()
{
	if(no<.7)
	no+=.0004;
	if(c<.12)
	c+=.0004;
	if(s5<.07)
		s5+=.0004;
	if(no>=0.7)
	{
		glutDisplayFunc(display5);
	}
	glutPostRedisplay();
}
void spindisplay3()
{
	
	if(nl<0.5)
	nl+=.0004;
	if(h<0.5)
	h+=0.0004;
	if(h>=0.5)
	{
		glutDisplayFunc(display4);
		glutIdleFunc(spindisplay4);
	}
	
	glutPostRedisplay();
}
void spindisplay2()
{
	if(q1>-0.7)
	q1-=.0004;
	if(q2<0.7)
	q2+=.0004;
	if(q1<=-0.7)
	{
		glutDisplayFunc(display3);
		glutIdleFunc(spindisplay3);
	}
	
	glutPostRedisplay();
}
void spindisplay1()
{
	if(b1>-1.1)
	b1-=.0004;
	if(b2>-0.62)
	b2-=.0004;
	if(s>-0.81)
	s-=.0004;
	if(s<=-0.81)
	{
		glutDisplayFunc(display2);
		glutIdleFunc(spindisplay2);
	}

	glutPostRedisplay();
}

void processNormalKeys(unsigned char key,int x,int y)
{
	if(key==32)
	{
		glutDisplayFunc(display1);
		glutIdleFunc(spindisplay1);
	}
}
void init()
{
glOrtho(-1,1,-1,1,0,0);
}
int main(int arg,char **argv){
	glutInit(&arg,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(800,900);
	glutInitWindowPosition(30,30);
	glutCreateWindow("CG Project - Mobile Evolution");
	init();
	glutDisplayFunc(display0);
	glutKeyboardFunc(processNormalKeys);
	glutMainLoop();
	return 0;
}
