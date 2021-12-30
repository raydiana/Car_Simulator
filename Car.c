//
// Created by julissa on 22/12/2021.
//

#include "Car.h"

car_status_c car_creation(direction_car_c direction, int x, int y){
    car_status_c  new_car={
            .direction=direction,
            .position.x=x,
            .position.y=y
    };
    return new_car;
}
void car_move(car_status_c *car, const char *commands){
    while (*commands!='\0'){
        if(*commands=='R'){
            car->direction=(car->direction+1)%DIRECTION_MAX;
        }
        if(*commands=='L'){
            car->direction=(car->direction-1)%DIRECTION_MAX;
        }
        else if(*commands=='A'){
            switch (car->direction) {
                case NORTH:
                    car->position.y++;
                    break;
                case SOUTH:
                    car->position.y--;
                    break;
                case EAST:
                    car->position.x++;
                    break;
                case WEST:
                    car->position.x--;
                    break;
                default:
                    break;
            }
        }
    }
}