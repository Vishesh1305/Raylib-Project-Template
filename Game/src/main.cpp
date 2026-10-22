#include <raylib.h>

int main()
{
    InitWindow(800, 450, "GameTemplate");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Raylib linked", 20, 20, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}