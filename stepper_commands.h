
#pragma once
#include <stdint.h>

#define STEPPER_PARAM_UNUSED 0
// editted in MagLoop_Common_Files/stepper_commands.h
// Command types for stepper motor control
typedef enum {
    CMD_STOP = 0,
    CMD_UP_SLOW,
    CMD_UP_MEDIUM,
    CMD_UP_FAST,
    CMD_DOWN_SLOW,
    CMD_DOWN_MEDIUM,
    CMD_DOWN_FAST,
    CMD_MOVE_TO,
    CMD_GET_POSITION,
    CMD_POSITION,
    CMD_RESET,
    CMD_HEARTBEAT,
    CMD_ACK,
    CMD_SLOW_SPEED_PULSE_DELAY,
    CMD_MEDIUM_SPEED_PULSE_DELAY,
    CMD_FAST_SPEED_PULSE_DELAY,
    CMD_MOVE_TO_PULSE_DELAY,
    CMD_HOME,
    CMD_MOVE_TO_HOME,
    CMD_HOME_COMPLETE,
    CMD_HOME_FAILED,
    CMD_SENSOR_STATUS,
    CMD_SET_HOME_POSITION,
    SET_HOME_POSITION,
    CMD_SENSOR_ERROR
	
} CommandType;

// Message structure for ESP-NOW communication
typedef struct {
    uint8_t messageId;
    CommandType command;
    int32_t param;
} Message;