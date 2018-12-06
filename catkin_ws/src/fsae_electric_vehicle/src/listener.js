#!/usr/bin/env node

/************************************************************************
 Copyright (c) 2017, Rethink Robotics
 Copyright (c) 2017, Ian McMahon

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
************************************************************************/

'use strict';
/**
 * This example demonstrates simple receiving of messages over the ROS system.
 */

// Require rosnodejs itself
const rosnodejs = require('rosnodejs');
var io = require('socket.io-client')("https://api.matadormotorsports.racing");
//var socket = io("https://api.matadormotorsports.racing");
console.log(io);
// Requires the std_msgs message package
const std_msgs = rosnodejs.require('fsae_electric_vehicle').msg;

function listener() {
  // Register node with ROS master
  rosnodejs.initNode('/listener_node')
    .then((rosNode) => {
      // Create ROS subscriber on the 'chatter' topic expecting String messages
      let sub = rosNode.subscribe('sinWave', std_msgs.wheel_velocity,
        (data) => { // define callback execution
            let now = new Date();
            console.log(data.front_left_time);
            io.emit("offsets", {time: now, value: parseInt(data.front_left_time), device: "Potentiometer"});
        }
      );
    });
}

if (require.main === module) {
  // Invoke Main Listener Function
  listener();
}
