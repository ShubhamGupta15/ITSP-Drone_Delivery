
"use strict";

let OpticalFlowRad = require('./OpticalFlowRad.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let PositionTarget = require('./PositionTarget.js');
let FileEntry = require('./FileEntry.js');
let DebugValue = require('./DebugValue.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let Trajectory = require('./Trajectory.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let RadioStatus = require('./RadioStatus.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let WaypointReached = require('./WaypointReached.js');
let ExtendedState = require('./ExtendedState.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let Param = require('./Param.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let RCOut = require('./RCOut.js');
let Altitude = require('./Altitude.js');
let RTCM = require('./RTCM.js');
let State = require('./State.js');
let Waypoint = require('./Waypoint.js');
let MountControl = require('./MountControl.js');
let LogEntry = require('./LogEntry.js');
let LogData = require('./LogData.js');
let ManualControl = require('./ManualControl.js');
let HomePosition = require('./HomePosition.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let CommandCode = require('./CommandCode.js');
let HilSensor = require('./HilSensor.js');
let WaypointList = require('./WaypointList.js');
let RCIn = require('./RCIn.js');
let StatusText = require('./StatusText.js');
let LandingTarget = require('./LandingTarget.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let ParamValue = require('./ParamValue.js');
let ActuatorControl = require('./ActuatorControl.js');
let Thrust = require('./Thrust.js');
let VFR_HUD = require('./VFR_HUD.js');
let HilGPS = require('./HilGPS.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let VehicleInfo = require('./VehicleInfo.js');
let HilControls = require('./HilControls.js');
let Mavlink = require('./Mavlink.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let BatteryStatus = require('./BatteryStatus.js');
let Vibration = require('./Vibration.js');

module.exports = {
  OpticalFlowRad: OpticalFlowRad,
  AttitudeTarget: AttitudeTarget,
  WheelOdomStamped: WheelOdomStamped,
  PositionTarget: PositionTarget,
  FileEntry: FileEntry,
  DebugValue: DebugValue,
  HilActuatorControls: HilActuatorControls,
  Trajectory: Trajectory,
  GlobalPositionTarget: GlobalPositionTarget,
  RadioStatus: RadioStatus,
  OnboardComputerStatus: OnboardComputerStatus,
  WaypointReached: WaypointReached,
  ExtendedState: ExtendedState,
  OverrideRCIn: OverrideRCIn,
  Param: Param,
  EstimatorStatus: EstimatorStatus,
  RCOut: RCOut,
  Altitude: Altitude,
  RTCM: RTCM,
  State: State,
  Waypoint: Waypoint,
  MountControl: MountControl,
  LogEntry: LogEntry,
  LogData: LogData,
  ManualControl: ManualControl,
  HomePosition: HomePosition,
  CompanionProcessStatus: CompanionProcessStatus,
  CommandCode: CommandCode,
  HilSensor: HilSensor,
  WaypointList: WaypointList,
  RCIn: RCIn,
  StatusText: StatusText,
  LandingTarget: LandingTarget,
  HilStateQuaternion: HilStateQuaternion,
  ParamValue: ParamValue,
  ActuatorControl: ActuatorControl,
  Thrust: Thrust,
  VFR_HUD: VFR_HUD,
  HilGPS: HilGPS,
  ADSBVehicle: ADSBVehicle,
  VehicleInfo: VehicleInfo,
  HilControls: HilControls,
  Mavlink: Mavlink,
  TimesyncStatus: TimesyncStatus,
  CamIMUStamp: CamIMUStamp,
  BatteryStatus: BatteryStatus,
  Vibration: Vibration,
};
