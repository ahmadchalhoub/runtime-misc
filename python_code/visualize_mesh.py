import open3d as o3d

# Create a sphere mesh
mesh = o3d.geometry.TriangleMesh.create_sphere()

# Compute vertex normals for better visualization
mesh.compute_vertex_normals()

# Visualize the mesh
o3d.visualization.draw_geometries([mesh])