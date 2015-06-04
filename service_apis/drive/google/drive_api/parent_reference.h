// Copyright 2010 Google Inc.
//
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
//   Build date: 2015-03-26 20:30:19 UTC
//   on: 2015-06-04, 16:55:58 UTC
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Generated from:
//   Version: v2
//   Revision: 172
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_DRIVE_API_PARENT_REFERENCE_H_
#define  GOOGLE_DRIVE_API_PARENT_REFERENCE_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_drive_api {
using namespace googleapis;

/**
 * A reference to a file's parent.
 *
 * @ingroup DataObject
 */
class ParentReference : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ParentReference* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ParentReference(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ParentReference(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ParentReference();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_drive_api::ParentReference</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_drive_api::ParentReference");
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The ID of the parent.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>isRoot</code>' attribute was set.
   *
   * @return true if the '<code>isRoot</code>' attribute was set.
   */
  bool has_is_root() const {
    return Storage().isMember("isRoot");
  }

  /**
   * Clears the '<code>isRoot</code>' attribute.
   */
  void clear_is_root() {
    MutableStorage()->removeMember("isRoot");
  }


  /**
   * Get the value of the '<code>isRoot</code>' attribute.
   */
  bool get_is_root() const {
    const Json::Value& storage = Storage("isRoot");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>isRoot</code>' attribute.
   *
   * Whether or not the parent is the root folder.
   *
   * @param[in] value The new value.
   */
  void set_is_root(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("isRoot"));
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * This is always drive#parentReference.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>parentLink</code>' attribute was set.
   *
   * @return true if the '<code>parentLink</code>' attribute was set.
   */
  bool has_parent_link() const {
    return Storage().isMember("parentLink");
  }

  /**
   * Clears the '<code>parentLink</code>' attribute.
   */
  void clear_parent_link() {
    MutableStorage()->removeMember("parentLink");
  }


  /**
   * Get the value of the '<code>parentLink</code>' attribute.
   */
  const StringPiece get_parent_link() const {
    const Json::Value& v = Storage("parentLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>parentLink</code>' attribute.
   *
   * A link to the parent.
   *
   * @param[in] value The new value.
   */
  void set_parent_link(const StringPiece& value) {
    *MutableStorage("parentLink") = value.data();
  }

  /**
   * Determine if the '<code>selfLink</code>' attribute was set.
   *
   * @return true if the '<code>selfLink</code>' attribute was set.
   */
  bool has_self_link() const {
    return Storage().isMember("selfLink");
  }

  /**
   * Clears the '<code>selfLink</code>' attribute.
   */
  void clear_self_link() {
    MutableStorage()->removeMember("selfLink");
  }


  /**
   * Get the value of the '<code>selfLink</code>' attribute.
   */
  const StringPiece get_self_link() const {
    const Json::Value& v = Storage("selfLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>selfLink</code>' attribute.
   *
   * A link back to this reference.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

 private:
  void operator=(const ParentReference&);
};  // ParentReference
}  // namespace google_drive_api
#endif  // GOOGLE_DRIVE_API_PARENT_REFERENCE_H_
