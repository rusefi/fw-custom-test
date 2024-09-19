// generated by gen_live_documentation.sh / LiveDataProcessor.java
#pragma once

// this generated C header is mostly used as input for java code generation
typedef enum {
LDS_output_channels,
LDS_fuel_computer,
LDS_ignition_state,
LDS_knock_controller,
LDS_tcu_controller,
LDS_throttle_model,
LDS_high_pressure_fuel_pump,
LDS_injector_model,
LDS_launch_control_state,
LDS_antilag_system_state,
LDS_boost_control,
LDS_ac_control,
LDS_fan_control0,
LDS_fan_control1,
LDS_fuel_pump_control,
LDS_main_relay,
LDS_engine_state,
LDS_tps_accel_state,
LDS_trigger_central,
LDS_trigger_state0,
LDS_trigger_state1,
LDS_trigger_state2,
LDS_trigger_state3,
LDS_trigger_state4,
LDS_trigger_state_primary,
LDS_wall_fuel_state,
LDS_idle_state,
LDS_electronic_throttle0,
LDS_electronic_throttle1,
LDS_wideband_state0,
LDS_wideband_state1,
LDS_dc_motors,
LDS_sent_state,
LDS_vvt,
LDS_lambda_monitor,
LDS_extra,
} live_data_e;
#define OUTPUT_CHANNELS_BASE_ADDRESS 0
#define FUEL_COMPUTER_BASE_ADDRESS 848
#define IGNITION_STATE_BASE_ADDRESS 900
#define KNOCK_CONTROLLER_BASE_ADDRESS 940
#define TCU_CONTROLLER_BASE_ADDRESS 976
#define THROTTLE_MODEL_BASE_ADDRESS 992
#define HIGH_PRESSURE_FUEL_PUMP_BASE_ADDRESS 1004
#define INJECTOR_MODEL_BASE_ADDRESS 1032
#define LAUNCH_CONTROL_STATE_BASE_ADDRESS 1044
#define ANTILAG_SYSTEM_STATE_BASE_ADDRESS 1052
#define BOOST_CONTROL_BASE_ADDRESS 1064
#define AC_CONTROL_BASE_ADDRESS 1088
#define FAN_CONTROL_BASE_ADDRESS 1096
#define FUEL_PUMP_CONTROL_BASE_ADDRESS 1112
#define MAIN_RELAY_BASE_ADDRESS 1116
#define ENGINE_STATE_BASE_ADDRESS 1120
#define TPS_ACCEL_STATE_BASE_ADDRESS 1220
#define TRIGGER_CENTRAL_BASE_ADDRESS 1268
#define TRIGGER_STATE_BASE_ADDRESS 1332
#define TRIGGER_STATE_PRIMARY_BASE_ADDRESS 1532
#define WALL_FUEL_STATE_BASE_ADDRESS 1540
#define IDLE_STATE_BASE_ADDRESS 1548
#define ELECTRONIC_THROTTLE_BASE_ADDRESS 1596
#define WIDEBAND_STATE_BASE_ADDRESS 1692
#define DC_MOTORS_BASE_ADDRESS 1716
#define SENT_STATE_BASE_ADDRESS 1728
#define VVT_BASE_ADDRESS 1736
#define LAMBDA_MONITOR_BASE_ADDRESS 1740
#define EXTRA_BASE_ADDRESS 1748
