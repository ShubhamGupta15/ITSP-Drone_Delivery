
"use strict";

let CommandBool = require('./CommandBool.js')
let SetMavFrame = require('./SetMavFrame.js')
let CommandInt = require('./CommandInt.js')
let FileMakeDir = require('./FileMakeDir.js')
let StreamRate = require('./StreamRate.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let WaypointClear = require('./WaypointClear.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let CommandTOL = require('./CommandTOL.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let FileClose = require('./FileClose.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let CommandLong = require('./CommandLong.js')
let ParamSet = require('./ParamSet.js')
let LogRequestData = require('./LogRequestData.js')
let ParamGet = require('./ParamGet.js')
let ParamPush = require('./ParamPush.js')
let SetMode = require('./SetMode.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let FileChecksum = require('./FileChecksum.js')
let FileWrite = require('./FileWrite.js')
let FileTruncate = require('./FileTruncate.js')
let FileList = require('./FileList.js')
let LogRequestList = require('./LogRequestList.js')
let FileRename = require('./FileRename.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let FileOpen = require('./FileOpen.js')
let MountConfigure = require('./MountConfigure.js')
let WaypointPush = require('./WaypointPush.js')
let CommandHome = require('./CommandHome.js')
let FileRemove = require('./FileRemove.js')
let MessageInterval = require('./MessageInterval.js')
let ParamPull = require('./ParamPull.js')
let WaypointPull = require('./WaypointPull.js')
let FileRead = require('./FileRead.js')

module.exports = {
  CommandBool: CommandBool,
  SetMavFrame: SetMavFrame,
  CommandInt: CommandInt,
  FileMakeDir: FileMakeDir,
  StreamRate: StreamRate,
  LogRequestEnd: LogRequestEnd,
  WaypointClear: WaypointClear,
  CommandTriggerControl: CommandTriggerControl,
  CommandTOL: CommandTOL,
  FileRemoveDir: FileRemoveDir,
  FileClose: FileClose,
  CommandTriggerInterval: CommandTriggerInterval,
  CommandLong: CommandLong,
  ParamSet: ParamSet,
  LogRequestData: LogRequestData,
  ParamGet: ParamGet,
  ParamPush: ParamPush,
  SetMode: SetMode,
  CommandVtolTransition: CommandVtolTransition,
  WaypointSetCurrent: WaypointSetCurrent,
  FileChecksum: FileChecksum,
  FileWrite: FileWrite,
  FileTruncate: FileTruncate,
  FileList: FileList,
  LogRequestList: LogRequestList,
  FileRename: FileRename,
  VehicleInfoGet: VehicleInfoGet,
  FileOpen: FileOpen,
  MountConfigure: MountConfigure,
  WaypointPush: WaypointPush,
  CommandHome: CommandHome,
  FileRemove: FileRemove,
  MessageInterval: MessageInterval,
  ParamPull: ParamPull,
  WaypointPull: WaypointPull,
  FileRead: FileRead,
};
