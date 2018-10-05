/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef MODULES_CANBUS_VEHICLE_LEXUS_PROTOCOL_DETECTED_OBJECT_RPT_411_H_
#define MODULES_CANBUS_VEHICLE_LEXUS_PROTOCOL_DETECTED_OBJECT_RPT_411_H_

#include "modules/drivers/canbus/can_comm/protocol_data.h"
#include "modules/canbus/proto/chassis_detail.pb.h"

namespace apollo {
namespace canbus {
namespace lexus {

class Detectedobjectrpt411 : public ::apollo::drivers::canbus::ProtocolData<
                    ::apollo::canbus::ChassisDetail> {
 public:
  static const int32_t ID;
  Detectedobjectrpt411();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'name': 'FRONT_OBJECT_DISTANCE_HIGH_RES', 'offset': 0.0, 'precision': 0.001, 'len': 24, 'is_signed_var': False, 'physical_range': '[0|16777.215]', 'bit': 31, 'type': 'double', 'order': 'motorola', 'physical_unit': 'm'}
  double front_object_distance_high_res(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'FRONT_OBJECT_DISTANCE_LOW_RES', 'offset': 0.0, 'precision': 0.001, 'len': 24, 'is_signed_var': False, 'physical_range': '[0|16777.215]', 'bit': 7, 'type': 'double', 'order': 'motorola', 'physical_unit': 'm'}
  double front_object_distance_low_res(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace lexus
}  // namespace canbus
}  // namespace apollo

#endif  // MODULES_CANBUS_VEHICL_LEXUS_PROTOCOL_DETECTED_OBJECT_RPT_411_H_