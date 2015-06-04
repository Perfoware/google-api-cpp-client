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
#ifndef  GOOGLE_YOUTUBE_API_LIVE_STREAM_H_
#define  GOOGLE_YOUTUBE_API_LIVE_STREAM_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/cdn_settings.h"
#include "google/youtube_api/live_stream_content_details.h"
#include "google/youtube_api/live_stream_snippet.h"
#include "google/youtube_api/live_stream_status.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * A live stream describes a live ingestion point.
 *
 * @ingroup DataObject
 */
class LiveStream : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LiveStream* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveStream(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveStream(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LiveStream();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LiveStream</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LiveStream");
  }

  /**
   * Determine if the '<code>cdn</code>' attribute was set.
   *
   * @return true if the '<code>cdn</code>' attribute was set.
   */
  bool has_cdn() const {
    return Storage().isMember("cdn");
  }

  /**
   * Clears the '<code>cdn</code>' attribute.
   */
  void clear_cdn() {
    MutableStorage()->removeMember("cdn");
  }


  /**
   * Get a reference to the value of the '<code>cdn</code>' attribute.
   */
  const CdnSettings get_cdn() const;

  /**
   * Gets a reference to a mutable value of the '<code>cdn</code>' property.
   *
   * The cdn object defines the live stream's content delivery network (CDN)
   * settings. These settings provide details about the manner in which you
   * stream your content to YouTube.
   *
   * @return The result can be modified to change the attribute value.
   */
  CdnSettings mutable_cdn();

  /**
   * Determine if the '<code>contentDetails</code>' attribute was set.
   *
   * @return true if the '<code>contentDetails</code>' attribute was set.
   */
  bool has_content_details() const {
    return Storage().isMember("contentDetails");
  }

  /**
   * Clears the '<code>contentDetails</code>' attribute.
   */
  void clear_content_details() {
    MutableStorage()->removeMember("contentDetails");
  }


  /**
   * Get a reference to the value of the '<code>contentDetails</code>'
   * attribute.
   */
  const LiveStreamContentDetails get_content_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>contentDetails</code>'
   * property.
   *
   * The content_details object contains information about the stream, including
   * the closed captions ingestion URL.
   *
   * @return The result can be modified to change the attribute value.
   */
  LiveStreamContentDetails mutable_contentDetails();

  /**
   * Determine if the '<code>etag</code>' attribute was set.
   *
   * @return true if the '<code>etag</code>' attribute was set.
   */
  bool has_etag() const {
    return Storage().isMember("etag");
  }

  /**
   * Clears the '<code>etag</code>' attribute.
   */
  void clear_etag() {
    MutableStorage()->removeMember("etag");
  }


  /**
   * Get the value of the '<code>etag</code>' attribute.
   */
  const StringPiece get_etag() const {
    const Json::Value& v = Storage("etag");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>etag</code>' attribute.
   *
   * Etag of this resource.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
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
   * The ID that YouTube assigns to uniquely identify the stream.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
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
   * Identifies what kind of resource this is. Value: the fixed string
   * "youtube#liveStream".
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>snippet</code>' attribute was set.
   *
   * @return true if the '<code>snippet</code>' attribute was set.
   */
  bool has_snippet() const {
    return Storage().isMember("snippet");
  }

  /**
   * Clears the '<code>snippet</code>' attribute.
   */
  void clear_snippet() {
    MutableStorage()->removeMember("snippet");
  }


  /**
   * Get a reference to the value of the '<code>snippet</code>' attribute.
   */
  const LiveStreamSnippet get_snippet() const;

  /**
   * Gets a reference to a mutable value of the '<code>snippet</code>' property.
   *
   * The snippet object contains basic details about the stream, including its
   * channel, title, and description.
   *
   * @return The result can be modified to change the attribute value.
   */
  LiveStreamSnippet mutable_snippet();

  /**
   * Determine if the '<code>status</code>' attribute was set.
   *
   * @return true if the '<code>status</code>' attribute was set.
   */
  bool has_status() const {
    return Storage().isMember("status");
  }

  /**
   * Clears the '<code>status</code>' attribute.
   */
  void clear_status() {
    MutableStorage()->removeMember("status");
  }


  /**
   * Get a reference to the value of the '<code>status</code>' attribute.
   */
  const LiveStreamStatus get_status() const;

  /**
   * Gets a reference to a mutable value of the '<code>status</code>' property.
   *
   * The status object contains information about live stream's status.
   *
   * @return The result can be modified to change the attribute value.
   */
  LiveStreamStatus mutable_status();

 private:
  void operator=(const LiveStream&);
};  // LiveStream
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LIVE_STREAM_H_
