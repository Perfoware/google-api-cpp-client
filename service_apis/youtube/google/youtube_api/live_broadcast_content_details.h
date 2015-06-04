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
#ifndef  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_CONTENT_DETAILS_H_
#define  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_CONTENT_DETAILS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/monitor_stream_info.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Detailed settings of a broadcast.
 *
 * @ingroup DataObject
 */
class LiveBroadcastContentDetails : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LiveBroadcastContentDetails* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcastContentDetails(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcastContentDetails(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LiveBroadcastContentDetails();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LiveBroadcastContentDetails</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LiveBroadcastContentDetails");
  }

  /**
   * Determine if the '<code>boundStreamId</code>' attribute was set.
   *
   * @return true if the '<code>boundStreamId</code>' attribute was set.
   */
  bool has_bound_stream_id() const {
    return Storage().isMember("boundStreamId");
  }

  /**
   * Clears the '<code>boundStreamId</code>' attribute.
   */
  void clear_bound_stream_id() {
    MutableStorage()->removeMember("boundStreamId");
  }


  /**
   * Get the value of the '<code>boundStreamId</code>' attribute.
   */
  const StringPiece get_bound_stream_id() const {
    const Json::Value& v = Storage("boundStreamId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>boundStreamId</code>' attribute.
   *
   * This value uniquely identifies the live stream bound to the broadcast.
   *
   * @param[in] value The new value.
   */
  void set_bound_stream_id(const StringPiece& value) {
    *MutableStorage("boundStreamId") = value.data();
  }

  /**
   * Determine if the '<code>enableClosedCaptions</code>' attribute was set.
   *
   * @return true if the '<code>enableClosedCaptions</code>' attribute was set.
   */
  bool has_enable_closed_captions() const {
    return Storage().isMember("enableClosedCaptions");
  }

  /**
   * Clears the '<code>enableClosedCaptions</code>' attribute.
   */
  void clear_enable_closed_captions() {
    MutableStorage()->removeMember("enableClosedCaptions");
  }


  /**
   * Get the value of the '<code>enableClosedCaptions</code>' attribute.
   */
  bool get_enable_closed_captions() const {
    const Json::Value& storage = Storage("enableClosedCaptions");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>enableClosedCaptions</code>' attribute.
   *
   * This setting indicates whether closed captioning is enabled for this
   * broadcast. The ingestion URL of the closed captions is returned through the
   * liveStreams API.
   *
   * @param[in] value The new value.
   */
  void set_enable_closed_captions(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("enableClosedCaptions"));
  }

  /**
   * Determine if the '<code>enableContentEncryption</code>' attribute was set.
   *
   * @return true if the '<code>enableContentEncryption</code>' attribute was
   * set.
   */
  bool has_enable_content_encryption() const {
    return Storage().isMember("enableContentEncryption");
  }

  /**
   * Clears the '<code>enableContentEncryption</code>' attribute.
   */
  void clear_enable_content_encryption() {
    MutableStorage()->removeMember("enableContentEncryption");
  }


  /**
   * Get the value of the '<code>enableContentEncryption</code>' attribute.
   */
  bool get_enable_content_encryption() const {
    const Json::Value& storage = Storage("enableContentEncryption");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>enableContentEncryption</code>' attribute.
   *
   * This setting indicates whether YouTube should enable content encryption for
   * the broadcast.
   *
   * @param[in] value The new value.
   */
  void set_enable_content_encryption(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("enableContentEncryption"));
  }

  /**
   * Determine if the '<code>enableDvr</code>' attribute was set.
   *
   * @return true if the '<code>enableDvr</code>' attribute was set.
   */
  bool has_enable_dvr() const {
    return Storage().isMember("enableDvr");
  }

  /**
   * Clears the '<code>enableDvr</code>' attribute.
   */
  void clear_enable_dvr() {
    MutableStorage()->removeMember("enableDvr");
  }


  /**
   * Get the value of the '<code>enableDvr</code>' attribute.
   */
  bool get_enable_dvr() const {
    const Json::Value& storage = Storage("enableDvr");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>enableDvr</code>' attribute.
   *
   * This setting determines whether viewers can access DVR controls while
   * watching the video. DVR controls enable the viewer to control the video
   * playback experience by pausing, rewinding, or fast forwarding content. The
   * default value for this property is true.
   *
   *
   *
   * Important: You must set the value to true and also set the enableArchive
   * property's value to true if you want to make playback available immediately
   * after the broadcast ends.
   *
   * @param[in] value The new value.
   */
  void set_enable_dvr(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("enableDvr"));
  }

  /**
   * Determine if the '<code>enableEmbed</code>' attribute was set.
   *
   * @return true if the '<code>enableEmbed</code>' attribute was set.
   */
  bool has_enable_embed() const {
    return Storage().isMember("enableEmbed");
  }

  /**
   * Clears the '<code>enableEmbed</code>' attribute.
   */
  void clear_enable_embed() {
    MutableStorage()->removeMember("enableEmbed");
  }


  /**
   * Get the value of the '<code>enableEmbed</code>' attribute.
   */
  bool get_enable_embed() const {
    const Json::Value& storage = Storage("enableEmbed");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>enableEmbed</code>' attribute.
   *
   * This setting indicates whether the broadcast video can be played in an
   * embedded player. If you choose to archive the video (using the
   * enableArchive property), this setting will also apply to the archived
   * video.
   *
   * @param[in] value The new value.
   */
  void set_enable_embed(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("enableEmbed"));
  }

  /**
   * Determine if the '<code>enableLowLatency</code>' attribute was set.
   *
   * @return true if the '<code>enableLowLatency</code>' attribute was set.
   */
  bool has_enable_low_latency() const {
    return Storage().isMember("enableLowLatency");
  }

  /**
   * Clears the '<code>enableLowLatency</code>' attribute.
   */
  void clear_enable_low_latency() {
    MutableStorage()->removeMember("enableLowLatency");
  }


  /**
   * Get the value of the '<code>enableLowLatency</code>' attribute.
   */
  bool get_enable_low_latency() const {
    const Json::Value& storage = Storage("enableLowLatency");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>enableLowLatency</code>' attribute.
   * @param[in] value The new value.
   */
  void set_enable_low_latency(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("enableLowLatency"));
  }

  /**
   * Determine if the '<code>monitorStream</code>' attribute was set.
   *
   * @return true if the '<code>monitorStream</code>' attribute was set.
   */
  bool has_monitor_stream() const {
    return Storage().isMember("monitorStream");
  }

  /**
   * Clears the '<code>monitorStream</code>' attribute.
   */
  void clear_monitor_stream() {
    MutableStorage()->removeMember("monitorStream");
  }


  /**
   * Get a reference to the value of the '<code>monitorStream</code>' attribute.
   */
  const MonitorStreamInfo get_monitor_stream() const;

  /**
   * Gets a reference to a mutable value of the '<code>monitorStream</code>'
   * property.
   *
   * The monitorStream object contains information about the monitor stream,
   * which the broadcaster can use to review the event content before the
   * broadcast stream is shown publicly.
   *
   * @return The result can be modified to change the attribute value.
   */
  MonitorStreamInfo mutable_monitorStream();

  /**
   * Determine if the '<code>recordFromStart</code>' attribute was set.
   *
   * @return true if the '<code>recordFromStart</code>' attribute was set.
   */
  bool has_record_from_start() const {
    return Storage().isMember("recordFromStart");
  }

  /**
   * Clears the '<code>recordFromStart</code>' attribute.
   */
  void clear_record_from_start() {
    MutableStorage()->removeMember("recordFromStart");
  }


  /**
   * Get the value of the '<code>recordFromStart</code>' attribute.
   */
  bool get_record_from_start() const {
    const Json::Value& storage = Storage("recordFromStart");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>recordFromStart</code>' attribute.
   *
   * Automatically start recording after the event goes live. The default value
   * for this property is true.
   *
   *
   *
   * Important: You must also set the enableDvr property's value to true if you
   * want the playback to be available immediately after the broadcast ends. If
   * you set this property's value to true but do not also set the enableDvr
   * property to true, there may be a delay of around one day before the
   * archived video will be available for playback.
   *
   * @param[in] value The new value.
   */
  void set_record_from_start(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("recordFromStart"));
  }

  /**
   * Determine if the '<code>startWithSlate</code>' attribute was set.
   *
   * @return true if the '<code>startWithSlate</code>' attribute was set.
   */
  bool has_start_with_slate() const {
    return Storage().isMember("startWithSlate");
  }

  /**
   * Clears the '<code>startWithSlate</code>' attribute.
   */
  void clear_start_with_slate() {
    MutableStorage()->removeMember("startWithSlate");
  }


  /**
   * Get the value of the '<code>startWithSlate</code>' attribute.
   */
  bool get_start_with_slate() const {
    const Json::Value& storage = Storage("startWithSlate");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>startWithSlate</code>' attribute.
   *
   * This setting indicates whether the broadcast should automatically begin
   * with an in-stream slate when you update the broadcast's status to live.
   * After updating the status, you then need to send a liveCuepoints.insert
   * request that sets the cuepoint's eventState to end to remove the in-stream
   * slate and make your broadcast stream visible to viewers.
   *
   * @param[in] value The new value.
   */
  void set_start_with_slate(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("startWithSlate"));
  }

 private:
  void operator=(const LiveBroadcastContentDetails&);
};  // LiveBroadcastContentDetails
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LIVE_BROADCAST_CONTENT_DETAILS_H_
