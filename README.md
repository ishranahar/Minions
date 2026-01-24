🟡 OpenGL Face Drawing (GLUT)

This project demonstrates a simple cartoon-style face created using C++ and OpenGL (GLUT).
Basic shapes such as circles and polygons are drawn using trigonometric functions to form facial features like eyes and mouth.

📌 Features

🟡 Yellow circular face (head)

🟨 Rectangular body

👀 Left and right eyes with layered colors (silver → white → black)

👄 Half-circle mouth

🎨 Colored 2D rendering using OpenGL

🔢 Smooth circles using multiple segments

🧠 Concepts Used

glBegin(GL_POLYGON) and glEnd()

Trigonometric functions: sin() and cos()

Circle drawing using segments

2D coordinate system

OpenGL color handling with glColor3f

GLUT window creation and display callback

🛠️ Requirements

C / C++ Compiler (GCC / MinGW)

OpenGL

GLUT or freeGLUT library

Windows (MinGW)

Install freeGLUT

Link libraries:

-lfreeglut -lopengl32 -lglu32

Linux
sudo apt install freeglut3-dev

▶️ How to Run
Compile (Linux)
g++ main.cpp -lglut -lGLU -lGL -o face
./face

Compile (Windows – MinGW)
g++ main.cpp -lfreeglut -lopengl32 -lglu32 -o face

🖼️ Output Preview

🟡 A yellow cartoon face with eyes and a mouth drawn using OpenGL polygons.

(Add a screenshot here if you want)

📂 Project Structure
📁 OpenGL-Face
 ├── main.cpp
 └── README.md

🚀 Future Improvements

Add animation (eye blinking, mouth movement)

Add keyboard or mouse interaction

Improve background design

Upgrade to modern OpenGL (Shaders)

👩‍💻 Author

Tajmun Nahar
Web Developer | Cyber Security Learner
Learning Computer Graphics with OpenGL

