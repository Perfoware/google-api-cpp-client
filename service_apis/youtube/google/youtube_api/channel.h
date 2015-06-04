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
#ifndef  GOOGLE_YOUTUBE_API_CHANNEL_H_
#define  GOOGLE_YOUTUBE_API_CHANNEL_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/channel_audit_details.h"
#include "google/youtube_api/channel_branding_settings.h"
#include "google/youtube_api/channel_content_details.h"
#include "google/youtube_api/channel_content_owner_details.h"
#include "google/youtube_api/channel_conversion_pings.h"
#include "google/youtube_api/channel_localization.h"
#include "google/youtube_api/channel_snippet.h"
#include "google/youtube_api/channel_statistics.h"
#include "google/youtube_api/channel_status.h"
#include "google/youtube_api/channel_topic_details.h"
#include "google/youtube_api/invideo_promotion.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * A channel resource contains information about a YouTube channel.
 *
 * @ingroup DataObject
 */
class Channel : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Channel* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Channel(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Channel(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Channel();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::Channel</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::Channel");
  }

  /**
   * Determine if the '<code>auditDetails</code>' attribute was set.
   *
   * @return true if the '<code>auditDetails</code>' attribute was set.
   */
  bool has_audit_details() const {
    return Storage().isMember("auditDetails");
  }

  /**
   * Clears the '<code>auditDetails</code>' attribute.
   */
  void clear_audit_details() {
    MutableStorage()->removeMember("auditDetails");
  }


  /**
   * Get a reference to the value of the '<code>auditDetails</code>' attribute.
   */
  const ChannelAuditDetails get_audit_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>auditDetails</code>'
   * property.
   *
   * The auditionDetails object encapsulates channel data that is relevant for
   * YouTube Partners during the audition process.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelAuditDetails mutable_auditDetails();

  /**
   * Determine if the '<code>brandingSettings</code>' attribute was set.
   *
   * @return true if the '<code>brandingSettings</code>' attribute was set.
   */
  bool has_branding_settings() const {
    return Storage().isMember("brandingSettings");
  }

  /**
   * Clears the '<code>brandingSettings</code>' attribute.
   */
  void clear_branding_settings() {
    MutableStorage()->removeMember("brandingSettings");
  }


  /**
   * Get a reference to the value of the '<code>brandingSettings</code>'
   * attribute.
   */
  const ChannelBrandingSettings get_branding_settings() const;

  /**
   * Gets a reference to a mutable value of the '<code>brandingSettings</code>'
   * property.
   *
   * The brandingSettings object encapsulates information about the branding of
   * the channel.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelBrandingSettings mutable_brandingSettings();

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
  const ChannelContentDetails get_content_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>contentDetails</code>'
   * property.
   *
   * The contentDetails object encapsulates information about the channel's
   * content.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelContentDetails mutable_contentDetails();

  /**
   * Determine if the '<code>contentOwnerDetails</code>' attribute was set.
   *
   * @return true if the '<code>contentOwnerDetails</code>' attribute was set.
   */
  bool has_content_owner_details() const {
    return Storage().isMember("contentOwnerDetails");
  }

  /**
   * Clears the '<code>contentOwnerDetails</code>' attribute.
   */
  void clear_content_owner_details() {
    MutableStorage()->removeMember("contentOwnerDetails");
  }


  /**
   * Get a reference to the value of the '<code>contentOwnerDetails</code>'
   * attribute.
   */
  const ChannelContentOwnerDetails get_content_owner_details() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>contentOwnerDetails</code>' property.
   *
   * The contentOwnerDetails object encapsulates channel data that is relevant
   * for YouTube Partners linked with the channel.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelContentOwnerDetails mutable_contentOwnerDetails();

  /**
   * Determine if the '<code>conversionPings</code>' attribute was set.
   *
   * @return true if the '<code>conversionPings</code>' attribute was set.
   */
  bool has_conversion_pings() const {
    return Storage().isMember("conversionPings");
  }

  /**
   * Clears the '<code>conversionPings</code>' attribute.
   */
  void clear_conversion_pings() {
    MutableStorage()->removeMember("conversionPings");
  }


  /**
   * Get a reference to the value of the '<code>conversionPings</code>'
   * attribute.
   */
  const ChannelConversionPings get_conversion_pings() const;

  /**
   * Gets a reference to a mutable value of the '<code>conversionPings</code>'
   * property.
   *
   * The conversionPings object encapsulates information about conversion pings
   * that need to be respected by the channel.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelConversionPings mutable_conversionPings();

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
   * The ID that YouTube uses to uniquely identify the channel.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>invideoPromotion</code>' attribute was set.
   *
   * @return true if the '<code>invideoPromotion</code>' attribute was set.
   */
  bool has_invideo_promotion() const {
    return Storage().isMember("invideoPromotion");
  }

  /**
   * Clears the '<code>invideoPromotion</code>' attribute.
   */
  void clear_invideo_promotion() {
    MutableStorage()->removeMember("invideoPromotion");
  }


  /**
   * Get a reference to the value of the '<code>invideoPromotion</code>'
   * attribute.
   */
  const InvideoPromotion get_invideo_promotion() const;

  /**
   * Gets a reference to a mutable value of the '<code>invideoPromotion</code>'
   * property.
   *
   * The invideoPromotion object encapsulates information about promotion
   * campaign associated with the channel.
   *
   * @return The result can be modified to change the attribute value.
   */
  InvideoPromotion mutable_invideoPromotion();

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
   * "youtube#channel".
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>localizations</code>' attribute was set.
   *
   * @return true if the '<code>localizations</code>' attribute was set.
   */
  bool has_localizations() const {
    return Storage().isMember("localizations");
  }

  /**
   * Clears the '<code>localizations</code>' attribute.
   */
  void clear_localizations() {
    MutableStorage()->removeMember("localizations");
  }


  /**
   * Get a reference to the value of the '<code>localizations</code>' attribute.
   */
  const client::JsonCppAssociativeArray<ChannelLocalization > get_localizations() const;

  /**
   * Gets a reference to a mutable value of the '<code>localizations</code>'
   * property.
   *
   * Localizations for different languages.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppAssociativeArray<ChannelLocalization > mutable_localizations();

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
  const ChannelSnippet get_snippet() const;

  /**
   * Gets a reference to a mutable value of the '<code>snippet</code>' property.
   *
   * The snippet object contains basic details about the channel, such as its
   * title, description, and thumbnail images.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelSnippet mutable_snippet();

  /**
   * Determine if the '<code>statistics</code>' attribute was set.
   *
   * @return true if the '<code>statistics</code>' attribute was set.
   */
  bool has_statistics() const {
    return Storage().isMember("statistics");
  }

  /**
   * Clears the '<code>statistics</code>' attribute.
   */
  void clear_statistics() {
    MutableStorage()->removeMember("statistics");
  }


  /**
   * Get a reference to the value of the '<code>statistics</code>' attribute.
   */
  const ChannelStatistics get_statistics() const;

  /**
   * Gets a reference to a mutable value of the '<code>statistics</code>'
   * property.
   *
   * The statistics object encapsulates statistics for the channel.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelStatistics mutable_statistics();

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
  const ChannelStatus get_status() const;

  /**
   * Gets a reference to a mutable value of the '<code>status</code>' property.
   *
   * The status object encapsulates information about the privacy status of the
   * channel.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelStatus mutable_status();

  /**
   * Determine if the '<code>topicDetails</code>' attribute was set.
   *
   * @return true if the '<code>topicDetails</code>' attribute was set.
   */
  bool has_topic_details() const {
    return Storage().isMember("topicDetails");
  }

  /**
   * Clears the '<code>topicDetails</code>' attribute.
   */
  void clear_topic_details() {
    MutableStorage()->removeMember("topicDetails");
  }


  /**
   * Get a reference to the value of the '<code>topicDetails</code>' attribute.
   */
  const ChannelTopicDetails get_topic_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>topicDetails</code>'
   * property.
   *
   * The topicDetails object encapsulates information about Freebase topics
   * associated with the channel.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelTopicDetails mutable_topicDetails();

 private:
  void operator=(const Channel&);
};  // Channel
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CHANNEL_H_
