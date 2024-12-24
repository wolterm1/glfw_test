#include <glad/glad.h>   
#include <GLFW/glfw3.h> 
#include <string>


namespace GLFW {

extern GLFWwindow* _window;
void Init(int width, int height, std::string title);
bool windowOpen();
void closeWindow(bool val);
void freeResources();
void processEventsAndSwapBuffers();   

}

