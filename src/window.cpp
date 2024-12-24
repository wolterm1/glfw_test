#include <glad/glad.h>   // Include glad to load OpenGL functions
#include <GLFW/glfw3.h>  // Include GLFW for window creation
#include <iostream>       // Include iostream for std::cerr and std::endl
#include <glm/glm.hpp>


int main(void)
{

    /* Initialize the library */
    glfwInit();
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);//so hyprland cant autotile
    /* Create a windowed mode window and its OpenGL context */
    GLFWwindow* window = glfwCreateWindow(900, 600, "GLFW CMake starter", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Initialize glad to load OpenGL functions */
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed to initialize OpenGL loader!" << std::endl;
        return -1;
    }

    glfwSwapInterval(1);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);

        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
