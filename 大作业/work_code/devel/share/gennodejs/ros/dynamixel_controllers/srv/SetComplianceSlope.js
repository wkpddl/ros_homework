// Auto-generated. Do not edit!

// (in-package dynamixel_controllers.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetComplianceSlopeRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.slope = null;
    }
    else {
      if (initObj.hasOwnProperty('slope')) {
        this.slope = initObj.slope
      }
      else {
        this.slope = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetComplianceSlopeRequest
    // Serialize message field [slope]
    bufferOffset = _serializer.uint8(obj.slope, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetComplianceSlopeRequest
    let len;
    let data = new SetComplianceSlopeRequest(null);
    // Deserialize message field [slope]
    data.slope = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dynamixel_controllers/SetComplianceSlopeRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0b655cbe1b74daf357824dcc427c1004';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # See Dynamixel documentation for details
    
    uint8 slope
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetComplianceSlopeRequest(null);
    if (msg.slope !== undefined) {
      resolved.slope = msg.slope;
    }
    else {
      resolved.slope = 0
    }

    return resolved;
    }
};

class SetComplianceSlopeResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetComplianceSlopeResponse
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetComplianceSlopeResponse
    let len;
    let data = new SetComplianceSlopeResponse(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dynamixel_controllers/SetComplianceSlopeResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetComplianceSlopeResponse(null);
    return resolved;
    }
};

module.exports = {
  Request: SetComplianceSlopeRequest,
  Response: SetComplianceSlopeResponse,
  md5sum() { return '0b655cbe1b74daf357824dcc427c1004'; },
  datatype() { return 'dynamixel_controllers/SetComplianceSlope'; }
};
