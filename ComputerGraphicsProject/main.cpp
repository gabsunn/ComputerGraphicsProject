#include<iostream>

#include<glfw3.h>

int main(int argc, char **argv) {
	glfwInit();
	
	const int WINDOW_WIDTH = 1200;
	const int WINDOW_HEIGHT = 800;
	int framebufferWidth = 0;
	int frammebufferHeight = 0;

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);


	GLFWwindow* window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "PlaneGame", NULL, NULL);

	glfwGetFramebufferSize(window, &framebufferWidth, &frammebufferHeight);
	glViewport(0, 0, framebufferWidth, frammebufferHeight);

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();

		glClearColor(1.f, 1.f, 1.f, 1.f);
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT| GL_STENCIL_BUFFER_BIT);




		glfwSwapBuffers(window);
		glFlush();

	}
	
	glfwTerminate();
	
}