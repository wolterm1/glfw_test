#include <glfw_wrapper.hpp>
#include <iostream>

namespace GLFW { 

GLFWwindow* _window = nullptr;

void Init(int width, int height, std::string name)   {
    glfwInit();
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    _window = glfwCreateWindow(width, height, name.c_str(), NULL, NULL);
    if (_window == NULL) {
			std::cout << "Failed to create GLFW _window" << std::endl;
			glfwTerminate();
			return;
	}
    glfwMakeContextCurrent(_window);
    if(!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress))    {
        std::cout << "Failed to load glad" << std::endl;
        return;
    }
}


bool windowOpen()   {
    return !glfwWindowShouldClose(_window);
}


void closeWindow(bool val)    {
    glfwSetWindowShouldClose(_window, val);
}


void freeResources()  {
    glfwTerminate();
}


void processEventsAndSwapBuffers() {
    glfwSwapBuffers(_window);
    glfwPollEvents(); 
}
}