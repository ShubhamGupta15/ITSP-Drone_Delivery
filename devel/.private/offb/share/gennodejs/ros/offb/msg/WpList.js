// Auto-generated. Do not edit!

// (in-package offb.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Waypoint = require('./Waypoint.js');

//-----------------------------------------------------------

class WpList {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.wpList = null;
    }
    else {
      if (initObj.hasOwnProperty('wpList')) {
        this.wpList = initObj.wpList
      }
      else {
        this.wpList = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type WpList
    // Serialize message field [wpList]
    // Serialize the length for message field [wpList]
    bufferOffset = _serializer.uint32(obj.wpList.length, buffer, bufferOffset);
    obj.wpList.forEach((val) => {
      bufferOffset = Waypoint.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type WpList
    let len;
    let data = new WpList(null);
    // Deserialize message field [wpList]
    // Deserialize array length for message field [wpList]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.wpList = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.wpList[i] = Waypoint.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 45 * object.wpList.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'offb/WpList';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '57a0d486fa524923c4fc169d083620b1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    offb/Waypoint[] wpList
    
    ================================================================================
    MSG: offb/Waypoint
    # Waypoint.msg
    #
    # ROS representation of MAVLink MISSION_ITEM
    # See mavlink documentation
    
    
    
    # see enum MAV_FRAME
    uint8 frame
    uint8 FRAME_GLOBAL = 0
    uint8 FRAME_LOCAL_NED = 1
    uint8 FRAME_MISSION = 2
    uint8 FRAME_GLOBAL_REL_ALT = 3
    uint8 FRAME_LOCAL_ENU = 4
    
    # see enum MAV_CMD and CommandCode.msg
    uint16 command
    
    bool is_current
    bool autocontinue
    # meaning of this params described in enum MAV_CMD
    float32 param1
    float32 param2
    float32 param3
    float32 param4
    float64 x_lat
    float64 y_long
    float64 z_alt
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new WpList(null);
    if (msg.wpList !== undefined) {
      resolved.wpList = new Array(msg.wpList.length);
      for (let i = 0; i < resolved.wpList.length; ++i) {
        resolved.wpList[i] = Waypoint.Resolve(msg.wpList[i]);
      }
    }
    else {
      resolved.wpList = []
    }

    return resolved;
    }
};

module.exports = WpList;
