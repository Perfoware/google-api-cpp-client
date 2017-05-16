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
#ifndef  GOOGLE_CALENDAR_API_EVENT_ATTACHMENT_H_
#define  GOOGLE_CALENDAR_API_EVENT_ATTACHMENT_H_

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
class EventAttachment : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static EventAttachment* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit EventAttachment(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit EventAttachment(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~EventAttachment();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::EventAttachment</code>
   */
  const char* GetTypeName() const {
    return "google_calendar_api::EventAttachment";
  }

  /**
   * Determine if the '<code>fileId</code>' attribute was set.
   *
   * @return true if the '<code>fileId</code>' attribute was set.
   */
  bool has_file_id() const {
    return Storage().isMember("fileId");
  }

  /**
   * Clears the '<code>fileId</code>' attribute.
   */
  void clear_file_id() {
    MutableStorage()->removeMember("fileId");
  }


  /**
   * Get the value of the '<code>fileId</code>' attribute.
   */
  const StringPiece get_file_id() const {
    const Json::Value& v = Storage("fileId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>fileId</code>' attribute.
   *
   * ID of the attached file. Read-only.
   * For Google Drive files, this is the ID of the corresponding Files resource
   * entry in the Drive API.
   *
   * @param[in] value The new value.
   */
  void set_file_id(const StringPiece& value) {
    *MutableStorage("fileId") = value.data();
  }

  /**
   * Determine if the '<code>fileUrl</code>' attribute was set.
   *
   * @return true if the '<code>fileUrl</code>' attribute was set.
   */
  bool has_file_url() const {
    return Storage().isMember("fileUrl");
  }

  /**
   * Clears the '<code>fileUrl</code>' attribute.
   */
  void clear_file_url() {
    MutableStorage()->removeMember("fileUrl");
  }


  /**
   * Get the value of the '<code>fileUrl</code>' attribute.
   */
  const StringPiece get_file_url() const {
    const Json::Value& v = Storage("fileUrl");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>fileUrl</code>' attribute.
   *
   * URL link to the attachment.
   * For adding Google Drive file attachments use the same format as in
   * alternateLink property of the Files resource in the Drive API.
   *
   * @param[in] value The new value.
   */
  void set_file_url(const StringPiece& value) {
    *MutableStorage("fileUrl") = value.data();
  }

  /**
   * Determine if the '<code>iconLink</code>' attribute was set.
   *
   * @return true if the '<code>iconLink</code>' attribute was set.
   */
  bool has_icon_link() const {
    return Storage().isMember("iconLink");
  }

  /**
   * Clears the '<code>iconLink</code>' attribute.
   */
  void clear_icon_link() {
    MutableStorage()->removeMember("iconLink");
  }


  /**
   * Get the value of the '<code>iconLink</code>' attribute.
   */
  const StringPiece get_icon_link() const {
    const Json::Value& v = Storage("iconLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>iconLink</code>' attribute.
   *
   * URL link to the attachment's icon. Read-only.
   *
   * @param[in] value The new value.
   */
  void set_icon_link(const StringPiece& value) {
    *MutableStorage("iconLink") = value.data();
  }

  /**
   * Determine if the '<code>mimeType</code>' attribute was set.
   *
   * @return true if the '<code>mimeType</code>' attribute was set.
   */
  bool has_mime_type() const {
    return Storage().isMember("mimeType");
  }

  /**
   * Clears the '<code>mimeType</code>' attribute.
   */
  void clear_mime_type() {
    MutableStorage()->removeMember("mimeType");
  }


  /**
   * Get the value of the '<code>mimeType</code>' attribute.
   */
  const StringPiece get_mime_type() const {
    const Json::Value& v = Storage("mimeType");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>mimeType</code>' attribute.
   *
   * Internet media type (MIME type) of the attachment.
   *
   * @param[in] value The new value.
   */
  void set_mime_type(const StringPiece& value) {
    *MutableStorage("mimeType") = value.data();
  }

  /**
   * Determine if the '<code>title</code>' attribute was set.
   *
   * @return true if the '<code>title</code>' attribute was set.
   */
  bool has_title() const {
    return Storage().isMember("title");
  }

  /**
   * Clears the '<code>title</code>' attribute.
   */
  void clear_title() {
    MutableStorage()->removeMember("title");
  }


  /**
   * Get the value of the '<code>title</code>' attribute.
   */
  const StringPiece get_title() const {
    const Json::Value& v = Storage("title");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>title</code>' attribute.
   *
   * Attachment title.
   *
   * @param[in] value The new value.
   */
  void set_title(const StringPiece& value) {
    *MutableStorage("title") = value.data();
  }

 private:
  void operator=(const EventAttachment&);
};  // EventAttachment
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_EVENT_ATTACHMENT_H_
