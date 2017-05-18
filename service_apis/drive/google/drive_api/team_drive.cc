// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Description:
//   Manages files in Drive including uploading, downloading, searching, detecting changes, and updating sharing permissions.
// Classes:
//   TeamDrive
// Documentation:
//   https://developers.google.com/drive/

#include "google/drive_api/team_drive.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_drive_api {
using namespace googleapis;



// Object factory method (static).
TeamDrive::TeamDriveBackgroundImageFile* TeamDrive::TeamDriveBackgroundImageFile::New() {
  return new client::JsonCppCapsule<TeamDriveBackgroundImageFile>;
}

// Standard immutable constructor.
TeamDrive::TeamDriveBackgroundImageFile::TeamDriveBackgroundImageFile(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
TeamDrive::TeamDriveBackgroundImageFile::TeamDriveBackgroundImageFile(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
TeamDrive::TeamDriveBackgroundImageFile::~TeamDriveBackgroundImageFile() {
}

// Properties.

// Object factory method (static).
TeamDrive::TeamDriveCapabilities* TeamDrive::TeamDriveCapabilities::New() {
  return new client::JsonCppCapsule<TeamDriveCapabilities>;
}

// Standard immutable constructor.
TeamDrive::TeamDriveCapabilities::TeamDriveCapabilities(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
TeamDrive::TeamDriveCapabilities::TeamDriveCapabilities(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
TeamDrive::TeamDriveCapabilities::~TeamDriveCapabilities() {
}

// Properties.
// Object factory method (static).
TeamDrive* TeamDrive::New() {
  return new client::JsonCppCapsule<TeamDrive>;
}

// Standard immutable constructor.
TeamDrive::TeamDrive(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
TeamDrive::TeamDrive(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
TeamDrive::~TeamDrive() {
}

// Properties.
}  // namespace google_drive_api