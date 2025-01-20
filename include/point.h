#pragma once
typedef struct point_t {
    float x;   // Coordenada X
    float y;   // Coordenada Y
    float t;   // Tiempo
} point_t;

void freePoints(point_t** points);
