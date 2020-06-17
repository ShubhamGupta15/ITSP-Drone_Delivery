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

class DeliveryRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.delivered = null;
      this.DroneID = null;
    }
    else {
      if (initObj.hasOwnProperty('delivered')) {
        this.delivered = initObj.delivered
      }
      else {
        this.delivered = false;
      }
      if (initObj.hasOwnProperty('DroneID')) {
        this.DroneID = initObj.DroneID
      }
      else {
        this.DroneID = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DeliveryRequest
    // Serialize message field [delivered]
    bufferOffset = _serializer.bool(obj.delivered, buffer, bufferOffset);
    // Serialize message field [DroneID]
    bufferOffset = _serializer.string(obj.DroneID, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DeliveryRequest
    let len;
    let data = new DeliveryRequest(null);
    // Deserialize message field [delivered]
    data.delivered = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [DroneID]
    data.DroneID = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.DroneID.length;
    return length + 5;
  }

  static datatype() {
    // Returns string type for a service object
    return 'offb/DeliveryRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8d8d6669498600bd72aac3fce1f97272';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool delivered
    string DroneID
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DeliveryRequest(null);
    if (msg.delivered !== undefined) {
      resolved.delivered = msg.delivered;
    }
    else {
      resolved.delivered = false
    }

    if (msg.DroneID !== undefined) {
      resolved.DroneID = msg.DroneID;
    }
    else {
      resolved.DroneID = ''
    }

    return resolved;
    }
};

class DeliveryResponse {
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
    // Serializes a message object of type DeliveryResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DeliveryResponse
    let len;
    let data = new DeliveryResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'offb/DeliveryResponse';
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
    const resolved = new DeliveryResponse(null);
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
  Request: DeliveryRequest,
  Response: DeliveryResponse,
  md5sum() { return '87b4be1048437cbe6f7e4ccfb825383b'; },
  datatype() { return 'offb/Delivery'; }
};
