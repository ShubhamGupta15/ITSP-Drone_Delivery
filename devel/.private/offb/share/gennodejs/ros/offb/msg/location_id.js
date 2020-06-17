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

class location_id {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.hostel = null;
      this.drone_id = null;
    }
    else {
      if (initObj.hasOwnProperty('hostel')) {
        this.hostel = initObj.hostel
      }
      else {
        this.hostel = '';
      }
      if (initObj.hasOwnProperty('drone_id')) {
        this.drone_id = initObj.drone_id
      }
      else {
        this.drone_id = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type location_id
    // Serialize message field [hostel]
    bufferOffset = _serializer.string(obj.hostel, buffer, bufferOffset);
    // Serialize message field [drone_id]
    bufferOffset = _serializer.int32(obj.drone_id, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type location_id
    let len;
    let data = new location_id(null);
    // Deserialize message field [hostel]
    data.hostel = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [drone_id]
    data.drone_id = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.hostel.length;
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'offb/location_id';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'f8413624a35f58bf520d7fbe4c49b730';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string hostel
    int32 drone_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new location_id(null);
    if (msg.hostel !== undefined) {
      resolved.hostel = msg.hostel;
    }
    else {
      resolved.hostel = ''
    }

    if (msg.drone_id !== undefined) {
      resolved.drone_id = msg.drone_id;
    }
    else {
      resolved.drone_id = 0
    }

    return resolved;
    }
};

module.exports = location_id;
