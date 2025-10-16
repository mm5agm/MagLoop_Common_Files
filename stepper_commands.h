#pragma once

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
    CMD_MOVE_TO_DOWN_LIMIT,
    CMD_DOWN_LIMIT_STATUS,
    CMD_REQUEST_DOWN_STOP,
    CMD_GET_POSITION,
    CMD_RESET,
    CMD_POSITION,
    CMD_UP_LIMIT_OK,
    CMD_UP_LIMIT_TRIP,
    CMD_DOWN_LIMIT_OK,
    CMD_DOWN_LIMIT_TRIP,
    CMD_HEARTBEAT,
    CMD_ACK,
    CMD_SLOW_SPEED_PULSE_DELAY,
    CMD_MEDIUM_SPEED_PULSE_DELAY,
    CMD_FAST_SPEED_PULSE_DELAY,
    CMD_MOVE_TO_PULSE_DELAY
} CommandType;

// Message structure for ESP-NOW communication
typedef struct {
    uint8_t messageId;
    CommandType command;
    int32_t param;
} Message;