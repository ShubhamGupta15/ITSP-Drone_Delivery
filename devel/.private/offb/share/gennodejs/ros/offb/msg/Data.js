// Auto-generated. Do not edit!

// (in-package offb.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Data {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.DroneID = null;
      this.Hostel = null;
    }
    else {
      if (initObj.hasOwnProperty('DroneID')) {
        this.DroneID = initObj.DroneID
      }
      else {
        this.DroneID = '';
      }
      if (initObj.hasOwnProperty('Hostel')) {
        this.Hostel = initObj.Hostel
      }
      else {
        this.Hostel = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Data
    // Serialize message field [DroneID]
    bufferOffset = _serializer.string(obj.DroneID, buffer, bufferOffset);
    // Serialize message field [Hostel]
    bufferOffset = _serializer.string(obj.Hostel, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Data
    let len;
    let data = new Data(null);
    // Deserialize message field [DroneID]
    data.DroneID = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [Hostel]
    data.Hostel = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.DroneID.length;
    length += object.Hostel.length;
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'offb/Data';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8d6232d0931f3e45599dc91639a5fb46';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string DroneID
    string Hostel
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Data(null);
    if (msg.DroneID !== undefined) {
      resolved.DroneID = msg.DroneID;
    }
    else {
      resolved.DroneID = ''
    }

    if (msg.Hostel !== undefined) {
      resolved.Hostel = msg.Hostel;
    }
    else {
      resolved.Hostel = ''
    }

    return resolved;
    }
};

module.exports = Data;
