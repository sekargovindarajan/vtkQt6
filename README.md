# README
Draw Sphere (like Hello World) to test the combination of Vtk9 and Qt6.

## Qt6+VTK9
You can see on line 17 of `forms/MainWindow.ui` that `QVTKOpenGLNativeWidget` is used. Make sure that
* `CMAKE_PREFIX_PATH` in line 16 points to **your Qt6 path**, and
* `VTK_DIR` in line 24 points to **your VTK9 (build) path**.

## Caveats
* A WIP (work-in-progress) branch of VTK9 was used, and it needed some more changes.
* Qt6 was used as is from their website.
* Tested on Mac OSX 10.14.6 (Mojave), Clang 10.0.1.

## Issues
1. The window of `QVTKOpenGLNativeWidget` is always at the bottom left corner of the main window, not its correct position. Don't know if I am doing something wrong.
2. Also, the sphere may spin continuously, even when it is not being clicked and dragged.
