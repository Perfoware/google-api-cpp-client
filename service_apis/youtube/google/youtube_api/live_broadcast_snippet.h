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
#ifndef  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_SNIPPET_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/thumbnail_details.h"

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
class LiveBroadcastSnippet : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LiveBroadcastSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcastSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcastSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LiveBroadcastSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LiveBroadcastSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LiveBroadcastSnippet");
  }

  /**
   * Determine if the '<code>actualEndTime</code>' attribute was set.
   *
   * @return true if the '<code>actualEndTime</code>' attribute was set.
   */
  bool has_actual_end_time() const {
    return Storage().isMember("actualEndTime");
  }

  /**
   * Clears the '<code>actualEndTime</code>' attribute.
   */
  void clear_actual_end_time() {
    MutableStorage()->removeMember("actualEndTime");
  }


  /**
   * Get the value of the '<code>actualEndTime</code>' attribute.
   */
  client::DateTime get_actual_end_time() const {
    const Json::Value& storage = Storage("actualEndTime");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>actualEndTime</code>' attribute.
   *
   * The date and time that the broadcast actually ended. This information is
   * only available once the broadcast's state is complete. The value is
   * specified in ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_actual_end_time(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("actualEndTime"));
  }

  /**
   * Determine if the '<code>actualStartTime</code>' attribute was set.
   *
   * @return true if the '<code>actualStartTime</code>' attribute was set.
   */
  bool has_actual_start_time() const {
    return Storage().isMember("actualStartTime");
  }

  /**
   * Clears the '<code>actualStartTime</code>' attribute.
   */
  void clear_actual_start_time() {
    MutableStorage()->removeMember("actualStartTime");
  }


  /**
   * Get the value of the '<code>actualStartTime</code>' attribute.
   */
  client::DateTime get_actual_start_time() const {
    const Json::Value& storage = Storage("actualStartTime");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>actualStartTime</code>' attribute.
   *
   * The date and time that the broadcast actually started. This information is
   * only available once the broadcast's state is live. The value is specified
   * in ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_actual_start_time(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("actualStartTime"));
  }

  /**
   * Determine if the '<code>channelId</code>' attribute was set.
   *
   * @return true if the '<code>channelId</code>' attribute was set.
   */
  bool has_channel_id() const {
    return Storage().isMember("channelId");
  }

  /**
   * Clears the '<code>channelId</code>' attribute.
   */
  void clear_channel_id() {
    MutableStorage()->removeMember("channelId");
  }


  /**
   * Get the value of the '<code>channelId</code>' attribute.
   */
  const StringPiece get_channel_id() const {
    const Json::Value& v = Storage("channelId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>channelId</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the channel that is
   * publishing the broadcast.
   *
   * @param[in] value The new value.
   */
  void set_channel_id(const StringPiece& value) {
    *MutableStorage("channelId") = value.data();
  }

  /**
   * Determine if the '<code>description</code>' attribute was set.
   *
   * @return true if the '<code>description</code>' attribute was set.
   */
  bool has_description() const {
    return Storage().isMember("description");
  }

  /**
   * Clears the '<code>description</code>' attribute.
   */
  void clear_description() {
    MutableStorage()->removeMember("description");
  }


  /**
   * Get the value of the '<code>description</code>' attribute.
   */
  const StringPiece get_description() const {
    const Json::Value& v = Storage("description");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>description</code>' attribute.
   *
   * The broadcast's description. As with the title, you can set this field by
   * modifying the broadcast resource or by setting the description field of the
   * corresponding video resource.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>isDefaultBroadcast</code>' attribute was set.
   *
   * @return true if the '<code>isDefaultBroadcast</code>' attribute was set.
   */
  bool has_is_default_broadcast() const {
    return Storage().isMember("isDefaultBroadcast");
  }

  /**
   * Clears the '<code>isDefaultBroadcast</code>' attribute.
   */
  void clear_is_default_broadcast() {
    MutableStorage()->removeMember("isDefaultBroadcast");
  }


  /**
   * Get the value of the '<code>isDefaultBroadcast</code>' attribute.
   */
  bool get_is_default_broadcast() const {
    const Json::Value& storage = Storage("isDefaultBroadcast");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>isDefaultBroadcast</code>' attribute.
   * @param[in] value The new value.
   */
  void set_is_default_broadcast(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("isDefaultBroadcast"));
  }

  /**
   * Determine if the '<code>publishedAt</code>' attribute was set.
   *
   * @return true if the '<code>publishedAt</code>' attribute was set.
   */
  bool has_published_at() const {
    return Storage().isMember("publishedAt");
  }

  /**
   * Clears the '<code>publishedAt</code>' attribute.
   */
  void clear_published_at() {
    MutableStorage()->removeMember("publishedAt");
  }


  /**
   * Get the value of the '<code>publishedAt</code>' attribute.
   */
  client::DateTime get_published_at() const {
    const Json::Value& storage = Storage("publishedAt");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>publishedAt</code>' attribute.
   *
   * The date and time that the broadcast was added to YouTube's live broadcast
   * schedule. The value is specified in ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ)
   * format.
   *
   * @param[in] value The new value.
   */
  void set_published_at(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("publishedAt"));
  }

  /**
   * Determine if the '<code>scheduledEndTime</code>' attribute was set.
   *
   * @return true if the '<code>scheduledEndTime</code>' attribute was set.
   */
  bool has_scheduled_end_time() const {
    return Storage().isMember("scheduledEndTime");
  }

  /**
   * Clears the '<code>scheduledEndTime</code>' attribute.
   */
  void clear_scheduled_end_time() {
    MutableStorage()->removeMember("scheduledEndTime");
  }


  /**
   * Get the value of the '<code>scheduledEndTime</code>' attribute.
   */
  client::DateTime get_scheduled_end_time() const {
    const Json::Value& storage = Storage("scheduledEndTime");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>scheduledEndTime</code>' attribute.
   *
   * The date and time that the broadcast is scheduled to end. The value is
   * specified in ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_scheduled_end_time(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("scheduledEndTime"));
  }

  /**
   * Determine if the '<code>scheduledStartTime</code>' attribute was set.
   *
   * @return true if the '<code>scheduledStartTime</code>' attribute was set.
   */
  bool has_scheduled_start_time() const {
    return Storage().isMember("scheduledStartTime");
  }

  /**
   * Clears the '<code>scheduledStartTime</code>' attribute.
   */
  void clear_scheduled_start_time() {
    MutableStorage()->removeMember("scheduledStartTime");
  }


  /**
   * Get the value of the '<code>scheduledStartTime</code>' attribute.
   */
  client::DateTime get_scheduled_start_time() const {
    const Json::Value& storage = Storage("scheduledStartTime");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>scheduledStartTime</code>' attribute.
   *
   * The date and time that the broadcast is scheduled to start. The value is
   * specified in ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_scheduled_start_time(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("scheduledStartTime"));
  }

  /**
   * Determine if the '<code>thumbnails</code>' attribute was set.
   *
   * @return true if the '<code>thumbnails</code>' attribute was set.
   */
  bool has_thumbnails() const {
    return Storage().isMember("thumbnails");
  }

  /**
   * Clears the '<code>thumbnails</code>' attribute.
   */
  void clear_thumbnails() {
    MutableStorage()->removeMember("thumbnails");
  }


  /**
   * Get a reference to the value of the '<code>thumbnails</code>' attribute.
   */
  const ThumbnailDetails get_thumbnails() const;

  /**
   * Gets a reference to a mutable value of the '<code>thumbnails</code>'
   * property.
   *
   * A map of thumbnail images associated with the broadcast. For each nested
   * object in this object, the key is the name of the thumbnail image, and the
   * value is an object that contains other information about the thumbnail.
   *
   * @return The result can be modified to change the attribute value.
   */
  ThumbnailDetails mutable_thumbnails();

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
   * The broadcast's title. Note that the broadcast represents exactly one
   * YouTube video. You can set this field by modifying the broadcast resource
   * or by setting the title field of the corresponding video resource.
   *
   * @param[in] value The new value.
   */
  void set_title(const StringPiece& value) {
    *MutableStorage("title") = value.data();
  }

 private:
  void operator=(const LiveBroadcastSnippet&);
};  // LiveBroadcastSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LIVE_BROADCAST_SNIPPET_H_
