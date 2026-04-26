#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main() {
  if (!glfwInit()) {
    std::cerr << "Failed to init GLFW\n";
    return -1;
  }

  GLFWwindow *window =
      glfwCreateWindow(800, 600, "OpenGL C++", nullptr, nullptr);

  if (!window) {
    std::cerr << "Failed to create window\n";
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  // 🔥 GLAD init (mandatory)
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    std::cerr << "Failed to initialize GLAD\n";
    return -1;
  }

  // background color
  glClearColor(0.3f, 0.3f, 0.3f, 1.0f);

  while (!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  glfwDestroyWindow(window);
  glfwTerminate();
  return 0;
}
