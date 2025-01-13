#include "raylib.h"
// #include "raymath.h"

int main()
{
    const int WIDTH = 800;
    const int HEIGHT = 800;
	InitWindow(WIDTH, HEIGHT, "Template-4.0.0");
	
	while (!WindowShouldClose()) {
        	BeginDrawing();
            	ClearBackground(RAYWHITE);
    
        	EndDrawing();
    	}
   	 CloseWindow();
   	 return 0;
}
