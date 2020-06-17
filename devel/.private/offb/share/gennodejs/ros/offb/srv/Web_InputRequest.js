// Auto-generated. Do not edit!

// (in-package offb.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class Web_InputRequestRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.DroneID = null;
      this.hostel_to = null;
    }
    else {
      if (initObj.hasOwnProperty('DroneID')) {
        this.DroneID = initObj.DroneID
      }
      else {
        this.DroneID = '';
      }
      if (initObj.hasOwnProperty('hostel_to')) {
        this.hostel_to = initObj.hostel_to
      }
      else {
        this.hostel_to = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Web_InputRequestRequest
    // Serialize message field [DroneID]
    bufferOffset = _serializer.string(obj.DroneID, buffer, bufferOffset);
    // Serialize message field [hostel_to]
    bufferOffset = _serializer.string(obj.hostel_to, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Web_InputRequestRequest
    let len;
    let data = new Web_InputRequestRequest(null);
    // Deserialize message field [DroneID]
    data.DroneID = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [hostel_to]
    data.hostel_to = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.DroneID.length;
    length += object.hostel_to.length;
    return length + 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'offb/Web_InputRequestRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'aa1416e6c2a4297d2865c0f4eea0c20d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string DroneID
    string hostel_to
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Web_InputRequestRequest(null);
    if (msg.DroneID !== undefined) {
      resolved.DroneID = msg.DroneID;
    }
    else {
      resolved.DroneID = ''
    }

    if (msg.hostel_to !== undefined) {
      resolved.hostel_to = msg.hostel_to;
    }
    else {
      resolved.hostel_to = ''
    }

    return resolved;
    }
};

class Web_InputRequestResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Web_InputRequestResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Web_InputRequestResponse
    let len;
    let data = new Web_InputRequestResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'offb/Web_InputRequestResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '358e233cde0c8a8bcfea4ce193f8fc15';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool success
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Web_InputRequestResponse(null);
    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    return resolved;
    }
};

module.exports = {
  Request: Web_InputRequestRequest,
  Response: Web_InputRequestResponse,
  md5sum() { return '93721527c216f57d672506df413f1fd8'; },
  datatype() { return 'offb/Web_InputRequest'; }
};
