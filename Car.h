//
// Created by julissa on 22/12/2021.
//

#ifndef CAR_SIMULATOR_CAR_H
#define CAR_SIMULATOR_CAR_H

typedef struct{
    int x;
    int y;
} position_car_c;

typedef enum {
    NORTH,
    EAST,
    SOUTH,
    WEST,
    DIRECTION_MAX;
}direction_car_c;

typedef struct{
    position_car_c position;
    direction_car_c direction;
}car_status_c;

car_status_c car_creation(direction_car_c direction, int x, int y);
void car_move(car_status_c *car, const char *commands);
#endif //CAR_SIMULATOR_CAR_H
