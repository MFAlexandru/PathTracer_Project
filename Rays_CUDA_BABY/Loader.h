#include <iostream>
#include <list>
#include <vector>

#include "Rendering.h"
#include "Images.h"

void load_to_mem(std::list<Sphere>* spheres_aux,
	std::list<Triangle>* triangles_aux,
	std::vector<glm::vec3>* v_buff_aux, Camera* cam_aux, glm::vec3 center) {
	// INITIALISE SPHERESS

	spheres_aux->push_back(Sphere(
		// COLOR
		glm::vec3(0.83, 0.67, 0.24),
		// SPECULAR COLOR
		glm::vec3(1, 0.93, 0.67),
		// REFLECTIVE COLOR
		glm::vec3(0, 0, 0),
		// LUMINOSITY
		glm::vec3(0, 0, 0),
		// SHININESS
		1,
		// RAY
		5,
		// POSITION X Y Z
		glm::vec3(30, 30, 30)));

	// INITIALISE TRIANGLES
	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 10.0f, 0.0f, 0.0f },
		{ 10.0f, 20.0f, 0.0f },
		{ 0.0f, 20.0f, 0.0f },
		// LUMINOSITY
		glm::vec3(0, 0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 10.0f, 0.0f, 0.0f },
		{ 0.0f, 0.0f, 0.0f },
		{ 0.0f, 20.0f, 0.0f },
		// LUMINOSITY
		glm::vec3(0, 0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 10.0f, 0.0f, 5.0f },
		{ 10.0f, 20.0f, 5.0f },
		{ 0.0f, 20.0f, 5.0f },
		// LUMINOSITY
		glm::vec3(0, 0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 10.0f, 0.0f, 5.0f },
		{ 0.0f, 0.0f, 5.0f },
		{ 0.0f, 20.0f, 5.0f },
		// LUMINOSITY
		glm::vec3(0, 0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 0.0f, 0.0f, 0.0f },
		{ 0.0f, 20.0f, 0.0f },
		{ 0.0f, 20.0f, 5.0f },
		// LUMINOSITY
		glm::vec3(0, 0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 0.0f, 00.0f, 5.0f },
		{ 0.0f, 0.0f, 0.0f },
		{ 0.0f, 20.0f, 5.0f },
		// LUMINOSITY
		glm::vec3(0, 0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 10.0f, 0.0f, 0.0f },
		{ 10.0f, 20.0f, 0.0f },
		{ 10.0f, 20.0f, 5.0f },
		// LUMINOSITY
		glm::vec3(0, 0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 10.0f, 00.0f, 5.0f },
		{ 10.0f, 0.0f, 0.0f },
		{ 10.0f, 20.0f, 5.0f },
		// LUMINOSITY
		glm::vec3(0, 0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 10.0f, 20.0f, 0.0f },
		{ 0.0f, 20.0f, 0.0f },
		{ 0.0f, 20.0f, 5.0f },
		// LUMINOSITY
		glm::vec3(0, 0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 10.0f, 20.0f, 0.0f },
		{ 10.0f, 20.0f, 5.0f },
		{ 0.0f, 20.0f, 5.0f },
		// LUMINOSITY
		glm::vec3(0, 0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		1000.0,
		// POSITION A B C
		{ 10.0f, 0.0f, 0.0f },
		{ 0.0f, 0.0f, 0.0f },
		{ 10.0f, -5.0f, 5.0f },
		// LUMINOSITY
		glm::vec3(0.0, 0.0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		1000.0,
		// POSITION A B C
		{ 0.0f, -5.0f, 5.0f },
		{ 0.0f, 0.0f, 0.0f },
		{ 10.0f, -5.0f, 5.0f },
		// LUMINOSITY
		glm::vec3(0.0, 0.0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.1,
		// POSITION A B C
		{ 0.0f, -5.0f, 5.0f },
		{ 0.0f, 0.0f, 0.0f },
		{ 0.0f, 0.0f, 20.0f },
		// LUMINOSITY
		glm::vec3(0.0, 0.0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.1,
		// POSITION A B C
		{ 0.0f, -5.0f, 5.0f },
		{ 0.0f, -5.0f, 20.0f },
		{ 0.0f, 0.0f, 20.0f },
		// LUMINOSITY
		glm::vec3(0.0, 0.0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.1,
		// POSITION A B C
		{ 10.0f, -5.0f, 5.0f },
		{ 10.0f, 0.0f, 0.0f },
		{ 10.0f, 0.0f, 20.0f },
		// LUMINOSITY
		glm::vec3(0.0, 0.0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.1,
		// POSITION A B C
		{ 10.0f, -5.0f, 5.0f },
		{ 10.0f, -5.0f, 20.0f },
		{ 10.0f, 0.0f, 20.0f },
		// LUMINOSITY
		glm::vec3(0.0, 0.0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.1,
		// POSITION A B C
		{ 10.0f, 0.0f, 5.0f },
		{ 0.0f, 0.0f, 5.0f },
		{ 10.0f, 0.0f, 20.0f },
		// LUMINOSITY
		glm::vec3(0.0, 0.0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.1,
		// POSITION A B C
		{ 0.0f, 0.0f, 20.0f },
		{ 0.0f, 0.0f, 5.0f },
		{ 10.0f, 0.0f, 20.0f },
		// LUMINOSITY
		glm::vec3(0.0, 0.0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 10.0f, -5.0f, 5.0f },
		{ 0.0f, -5.0f, 5.0f },
		{ 10.0f, -5.0f, 20.0f },
		// LUMINOSITY
		glm::vec3(0.0, 0.0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 0.0f, -5.0f, 20.0f },
		{ 0.0f, -5.0f, 5.0f },
		{ 10.0f, -5.0f, 20.0f },
		// LUMINOSITY
		glm::vec3(0.0, 0.0, 0.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 0.0f, 0.0f, 20.0f },
		{ 10.0f, 0.0f, 20.0f },
		{ 10.0f, -5.0f, 20.0f },
		// LUMINOSITY
		glm::vec3(1.0, 1.0, 1.0),
		v_buff_aux));

	triangles_aux->push_back(Triangle(
		// COLOR
		glm::vec3(1, 1, 1),
		// SPECULAR COLOR
		glm::vec3(1, 1, 1),
		// REFLECTIVE COLOR
		glm::vec3(1, 1, 1),
		// SHININESS
		0.0,
		// POSITION A B C
		{ 0.0f, 0.0f, 20.0f },
		{ 0.0f, -5.0f, 20.0f },
		{ 10.0f, -5.0f, 20.0f },
		// LUMINOSITY
		glm::vec3(1.0, 1.0, 1.0),
		v_buff_aux));
}
