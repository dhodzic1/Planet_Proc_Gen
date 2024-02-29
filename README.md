# Procedural Terrain Generation in Unreal Engine 5

**IN PROGRESS**

This project utilizes the code plugin *Realtime Mesh Component* by TriAxis-Games: 
* [RMC Plugin Source](https://github.com/TriAxis-Games/RealtimeMeshComponent "RMC Plugin Source")

## Overview
- [x] Phase One: Generate a Cube-Sphere. In our use case, this is a tessellated cube where all vertices are normalized to be the same distance from the origin, thus creating a sphere.
      ![](Source/Screenshots/lit.png)
      ![](Source/Screenshots/wireframe.png)
- [ ] Phase Two: Implement terrain noise at base LOD. We utilize Simplex Fractal noise leveraging Fractional Brownian Motion.
      ![](Source/Screenshots/simplex_noise.png)
      ![](Source/Screenshots/planet_noise.png)
- [ ] Phase Three: Leverage Quadtree data structure to successfully implement Level of Detail system which increases LOD as camera moves closer towards mesh.