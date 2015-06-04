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
//   on: 2015-06-02, 17:00:10 UTC
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 139
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_VIDEO_ABUSE_REPORT_H_
#define  GOOGLE_YOUTUBE_API_VIDEO_ABUSE_REPORT_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class VideoAbuseReport : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static VideoAbuseReport* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoAbuseReport(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoAbuseReport(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~VideoAbuseReport();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::VideoAbuseReport</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::VideoAbuseReport");
  }

  /**
   * Determine if the '<code>comments</code>' attribute was set.
   *
   * @return true if the '<code>comments</code>' attribute was set.
   */
  bool has_comments() const {
    return Storage().isMember("comments");
  }

  /**
   * Clears the '<code>comments</code>' attribute.
   */
  void clear_comments() {
    MutableStorage()->removeMember("comments");
  }


  /**
   * Get the value of the '<code>comments</code>' attribute.
   */
  const StringPiece get_comments() const {
    const Json::Value& v = Storage("comments");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>comments</code>' attribute.
   *
   * Additional comments regarding the abuse report.
   *
   * @param[in] value The new value.
   */
  void set_comments(const StringPiece& value) {
    *MutableStorage("comments") = value.data();
  }

  /**
   * Determine if the '<code>language</code>' attribute was set.
   *
   * @return true if the '<code>language</code>' attribute was set.
   */
  bool has_language() const {
    return Storage().isMember("language");
  }

  /**
   * Clears the '<code>language</code>' attribute.
   */
  void clear_language() {
    MutableStorage()->removeMember("language");
  }


  /**
   * Get the value of the '<code>language</code>' attribute.
   */
  const StringPiece get_language() const {
    const Json::Value& v = Storage("language");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>language</code>' attribute.
   *
   * The language that the content was viewed in.
   *
   * @param[in] value The new value.
   */
  void set_language(const StringPiece& value) {
    *MutableStorage("language") = value.data();
  }

  /**
   * Determine if the '<code>reasonId</code>' attribute was set.
   *
   * @return true if the '<code>reasonId</code>' attribute was set.
   */
  bool has_reason_id() const {
    return Storage().isMember("reasonId");
  }

  /**
   * Clears the '<code>reasonId</code>' attribute.
   */
  void clear_reason_id() {
    MutableStorage()->removeMember("reasonId");
  }


  /**
   * Get the value of the '<code>reasonId</code>' attribute.
   */
  const StringPiece get_reason_id() const {
    const Json::Value& v = Storage("reasonId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>reasonId</code>' attribute.
   *
   * The high-level, or primary, reason that the content is abusive. The value
   * is an abuse report reason ID.
   *
   * @param[in] value The new value.
   */
  void set_reason_id(const StringPiece& value) {
    *MutableStorage("reasonId") = value.data();
  }

  /**
   * Determine if the '<code>secondaryReasonId</code>' attribute was set.
   *
   * @return true if the '<code>secondaryReasonId</code>' attribute was set.
   */
  bool has_secondary_reason_id() const {
    return Storage().isMember("secondaryReasonId");
  }

  /**
   * Clears the '<code>secondaryReasonId</code>' attribute.
   */
  void clear_secondary_reason_id() {
    MutableStorage()->removeMember("secondaryReasonId");
  }


  /**
   * Get the value of the '<code>secondaryReasonId</code>' attribute.
   */
  const StringPiece get_secondary_reason_id() const {
    const Json::Value& v = Storage("secondaryReasonId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>secondaryReasonId</code>' attribute.
   *
   * The specific, or secondary, reason that this content is abusive (if
   * available). The value is an abuse report reason ID that is a valid
   * secondary reason for the primary reason.
   *
   * @param[in] value The new value.
   */
  void set_secondary_reason_id(const StringPiece& value) {
    *MutableStorage("secondaryReasonId") = value.data();
  }

  /**
   * Determine if the '<code>videoId</code>' attribute was set.
   *
   * @return true if the '<code>videoId</code>' attribute was set.
   */
  bool has_video_id() const {
    return Storage().isMember("videoId");
  }

  /**
   * Clears the '<code>videoId</code>' attribute.
   */
  void clear_video_id() {
    MutableStorage()->removeMember("videoId");
  }


  /**
   * Get the value of the '<code>videoId</code>' attribute.
   */
  const StringPiece get_video_id() const {
    const Json::Value& v = Storage("videoId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>videoId</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the video.
   *
   * @param[in] value The new value.
   */
  void set_video_id(const StringPiece& value) {
    *MutableStorage("videoId") = value.data();
  }

 private:
  void operator=(const VideoAbuseReport&);
};  // VideoAbuseReport
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_VIDEO_ABUSE_REPORT_H_
