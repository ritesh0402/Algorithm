from mypackage.Shapes import sphere, cube, cylinder

Sphere = sphere(5)
volsphere = Sphere.volume()
print("Volume of sphere:"+(str)(volsphere))
Cube = cube(10)
print("Volume of cube:"+(str)(Cube.volume()))
Cylinder = cylinder(5, 6)
print("Volume of cylinder:"+(str)(Cylinder.volume()))
