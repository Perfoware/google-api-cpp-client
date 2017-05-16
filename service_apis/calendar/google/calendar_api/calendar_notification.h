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
//   Calendar API (calendar/v3)
// Generated from:
//   Version: v3
//   Revision: 20170507
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.5
#ifndef  GOOGLE_CALENDAR_API_CALENDAR_NOTIFICATION_H_
#define  GOOGLE_CALENDAR_API_CALENDAR_NOTIFICATION_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_calendar_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class CalendarNotification : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static CalendarNotification* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit CalendarNotification(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit CalendarNotification(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~CalendarNotification();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::CalendarNotification</code>
   */
  const char* GetTypeName() const {
    return "google_calendar_api::CalendarNotification";
  }

  /**
   * Determine if the '<code>method</code>' attribute was set.
   *
   * @return true if the '<code>method</code>' attribute was set.
   */
  bool has_method() const {
    return Storage().isMember("method");
  }

  /**
   * Clears the '<code>method</code>' attribute.
   */
  void clear_method() {
    MutableStorage()->removeMember("method");
  }


  /**
   * Get the value of the '<code>method</code>' attribute.
   */
  const StringPiece get_method() const {
    const Json::Value& v = Storage("method");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>method</code>' attribute.
   *
   * The method used to deliver the notification. Possible values are:
   * <dl>
   * <dt>"email"
   * <dd>Reminders are sent via email.
   * <dt>"sms"
   * <dd>Reminders are sent via SMS. This value is read-only and is ignored on
   * inserts and updates. SMS reminders are only available for G Suite
   * customers.
   * </dl>
   *
   *
   * @param[in] value The new value.
   */
  void set_method(const StringPiece& value) {
    *MutableStorage("method") = value.data();
  }

  /**
   * Determine if the '<code>type</code>' attribute was set.
   *
   * @return true if the '<code>type</code>' attribute was set.
   */
  bool has_type() const {
    return Storage().isMember("type");
  }

  /**
   * Clears the '<code>type</code>' attribute.
   */
  void clear_type() {
    MutableStorage()->removeMember("type");
  }


  /**
   * Get the value of the '<code>type</code>' attribute.
   */
  const StringPiece get_type() const {
    const Json::Value& v = Storage("type");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>type</code>' attribute.
   *
   * The type of notification. Possible values are:
   * <dl>
   * <dt>"eventCreation"
   * <dd>Notification sent when a new event is put on the calendar.
   * <dt>"eventChange"
   * <dd>Notification sent when an event is changed.
   * <dt>"eventCancellation"
   * <dd>Notification sent when an event is cancelled.
   * <dt>"eventResponse"
   * <dd>Notification sent when an event is changed.
   * <dt>"agenda"
   * <dd>An agenda with the events of the day (sent out in the morning).
   * </dl>
   *
   *
   * @param[in] value The new value.
   */
  void set_type(const StringPiece& value) {
    *MutableStorage("type") = value.data();
  }

 private:
  void operator=(const CalendarNotification&);
};  // CalendarNotification
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_CALENDAR_NOTIFICATION_H_
