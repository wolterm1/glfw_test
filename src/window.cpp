#include <glfw_wrapper.hpp>
#include <glm/glm.hpp>


int main(void)
{
    GLFW::Init(900, 600, "window");
    
    while(GLFW::windowOpen())   {
        GLFW::processEventsAndSwapBuffers();
    }

    GLFW::freeResources();
    
    return 0;
}
