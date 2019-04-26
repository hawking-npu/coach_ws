// Auto-generated. Do not edit!

// (in-package nubot_common.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let PassCommands = require('./PassCommands.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class StrategyInfo {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.AgentID = null;
      this.role = null;
      this.action = null;
      this.is_dribble = null;
      this.is_kickoff = null;
      this.role_time = null;
      this.pass_cmd = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('AgentID')) {
        this.AgentID = initObj.AgentID
      }
      else {
        this.AgentID = 0;
      }
      if (initObj.hasOwnProperty('role')) {
        this.role = initObj.role
      }
      else {
        this.role = 0;
      }
      if (initObj.hasOwnProperty('action')) {
        this.action = initObj.action
      }
      else {
        this.action = 0;
      }
      if (initObj.hasOwnProperty('is_dribble')) {
        this.is_dribble = initObj.is_dribble
      }
      else {
        this.is_dribble = false;
      }
      if (initObj.hasOwnProperty('is_kickoff')) {
        this.is_kickoff = initObj.is_kickoff
      }
      else {
        this.is_kickoff = false;
      }
      if (initObj.hasOwnProperty('role_time')) {
        this.role_time = initObj.role_time
      }
      else {
        this.role_time = 0.0;
      }
      if (initObj.hasOwnProperty('pass_cmd')) {
        this.pass_cmd = initObj.pass_cmd
      }
      else {
        this.pass_cmd = new PassCommands();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type StrategyInfo
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [AgentID]
    bufferOffset = _serializer.int32(obj.AgentID, buffer, bufferOffset);
    // Serialize message field [role]
    bufferOffset = _serializer.uint32(obj.role, buffer, bufferOffset);
    // Serialize message field [action]
    bufferOffset = _serializer.uint32(obj.action, buffer, bufferOffset);
    // Serialize message field [is_dribble]
    bufferOffset = _serializer.bool(obj.is_dribble, buffer, bufferOffset);
    // Serialize message field [is_kickoff]
    bufferOffset = _serializer.bool(obj.is_kickoff, buffer, bufferOffset);
    // Serialize message field [role_time]
    bufferOffset = _serializer.float32(obj.role_time, buffer, bufferOffset);
    // Serialize message field [pass_cmd]
    bufferOffset = PassCommands.serialize(obj.pass_cmd, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type StrategyInfo
    let len;
    let data = new StrategyInfo(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [AgentID]
    data.AgentID = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [role]
    data.role = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [action]
    data.action = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [is_dribble]
    data.is_dribble = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [is_kickoff]
    data.is_kickoff = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [role_time]
    data.role_time = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [pass_cmd]
    data.pass_cmd = PassCommands.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 46;
  }

  static datatype() {
    // Returns string type for a message object
    return 'nubot_common/StrategyInfo';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '97fdcf0f263b5f43bee35f3f082e9188';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header   header
    int32    AgentID
    uint32   role
    uint32   action
    bool     is_dribble
    bool     is_kickoff
    float32  role_time
    PassCommands  pass_cmd
    
    
    
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: nubot_common/PassCommands
    uint32  pass_id
    uint32  catch_id
    Point2d pass_pt
    Point2d catch_pt
    bool    is_passout
    bool    is_dynamic_pass
    bool    is_static_pass
    bool    is_valid
     
    
    ================================================================================
    MSG: nubot_common/Point2d
    float32 x
    float32 y
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new StrategyInfo(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.AgentID !== undefined) {
      resolved.AgentID = msg.AgentID;
    }
    else {
      resolved.AgentID = 0
    }

    if (msg.role !== undefined) {
      resolved.role = msg.role;
    }
    else {
      resolved.role = 0
    }

    if (msg.action !== undefined) {
      resolved.action = msg.action;
    }
    else {
      resolved.action = 0
    }

    if (msg.is_dribble !== undefined) {
      resolved.is_dribble = msg.is_dribble;
    }
    else {
      resolved.is_dribble = false
    }

    if (msg.is_kickoff !== undefined) {
      resolved.is_kickoff = msg.is_kickoff;
    }
    else {
      resolved.is_kickoff = false
    }

    if (msg.role_time !== undefined) {
      resolved.role_time = msg.role_time;
    }
    else {
      resolved.role_time = 0.0
    }

    if (msg.pass_cmd !== undefined) {
      resolved.pass_cmd = PassCommands.Resolve(msg.pass_cmd)
    }
    else {
      resolved.pass_cmd = new PassCommands()
    }

    return resolved;
    }
};

module.exports = StrategyInfo;
