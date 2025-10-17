#pragma once

#include "stepper_commands.h"

// Helper functions for stepper control

// Convert command enum to readable string
const char* commandToString(CommandType cmd) {
    switch (cmd) {
        case CMD_STOP: return "STOP";
        case CMD_UP_SLOW: return "UP_SLOW";
        case CMD_UP_MEDIUM: return "UP_MEDIUM";
        case CMD_UP_FAST: return "UP_FAST";
        case CMD_DOWN_SLOW: return "DOWN_SLOW";
        case CMD_DOWN_MEDIUM: return "DOWN_MEDIUM";
        case CMD_DOWN_FAST: return "DOWN_FAST";
        case CMD_MOVE_TO: return "MOVE_TO";
        case CMD_MOVE_TO_DOWN_LIMIT: return "MOVE_TO_DOWN_LIMIT";
        case CMD_DOWN_LIMIT_STATUS: return "DOWN_LIMIT_STATUS";
        case CMD_REQUEST_DOWN_STOP: return "REQUEST_DOWN_STOP";
        case CMD_GET_POSITION: return "GET_POSITION";
        case CMD_RESET: return "RESET";
        case CMD_POSITION: return "POSITION";
        case CMD_UP_LIMIT_OK: return "UP_LIMIT_OK";
        case CMD_UP_LIMIT_TRIP: return "UP_LIMIT_TRIP";
        case CMD_DOWN_LIMIT_OK: return "DOWN_LIMIT_OK";
        case CMD_DOWN_LIMIT_TRIP: return "DOWN_LIMIT_TRIP";
        case CMD_HEARTBEAT: return "HEARTBEAT";
        case CMD_ACK: return "ACK";
        case CMD_SLOW_SPEED_PULSE_DELAY: return "SLOW_SPEED_PULSE_DELAY";
        case CMD_MEDIUM_SPEED_PULSE_DELAY: return "MEDIUM_SPEED_PULSE_DELAY";
        case CMD_FAST_SPEED_PULSE_DELAY: return "FAST_SPEED_PULSE_DELAY";
        case CMD_MOVE_TO_PULSE_DELAY: return "MOVE_TO_PULSE_DELAY";
        default: return "UNKNOWN";
    }
}