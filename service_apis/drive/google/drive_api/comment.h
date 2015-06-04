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
#ifndef  GOOGLE_DRIVE_API_COMMENT_H_
#define  GOOGLE_DRIVE_API_COMMENT_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/drive_api/comment_reply.h"
#include "google/drive_api/user.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_drive_api {
using namespace googleapis;

/**
 * A JSON representation of a comment on a file in Google Drive.
 *
 * @ingroup DataObject
 */
class Comment : public client::JsonCppData {
 public:
  /**
   * The context of the file which is being commented on.
   *
   * @ingroup DataObject
   */
  class CommentContext : public client::JsonCppData {
   public:
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static CommentContext* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit CommentContext(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit CommentContext(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~CommentContext();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_drive_api::CommentContext</code>
     */
    const StringPiece GetTypeName() const {
      return StringPiece("google_drive_api::CommentContext");
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
     * The MIME type of the context snippet.
     *
     * @param[in] value The new value.
     */
    void set_type(const StringPiece& value) {
      *MutableStorage("type") = value.data();
    }

    /**
     * Determine if the '<code>value</code>' attribute was set.
     *
     * @return true if the '<code>value</code>' attribute was set.
     */
    bool has_value() const {
      return Storage().isMember("value");
    }

    /**
     * Clears the '<code>value</code>' attribute.
     */
    void clear_value() {
      MutableStorage()->removeMember("value");
    }


    /**
     * Get the value of the '<code>value</code>' attribute.
     */
    const StringPiece get_value() const {
      const Json::Value& v = Storage("value");
      if (v == Json::Value::null) return StringPiece("");
      return StringPiece(v.asCString());
    }

    /**
     * Change the '<code>value</code>' attribute.
     *
     * Data representation of the segment of the file being commented on. In the
     * case of a text file for example, this would be the actual text that the
     * comment is about.
     *
     * @param[in] value The new value.
     */
    void set_value(const StringPiece& value) {
      *MutableStorage("value") = value.data();
    }

   private:
    void operator=(const CommentContext&);
  };  // CommentContext
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Comment* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Comment(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Comment(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Comment();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_drive_api::Comment</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_drive_api::Comment");
  }

  /**
   * Determine if the '<code>anchor</code>' attribute was set.
   *
   * @return true if the '<code>anchor</code>' attribute was set.
   */
  bool has_anchor() const {
    return Storage().isMember("anchor");
  }

  /**
   * Clears the '<code>anchor</code>' attribute.
   */
  void clear_anchor() {
    MutableStorage()->removeMember("anchor");
  }


  /**
   * Get the value of the '<code>anchor</code>' attribute.
   */
  const StringPiece get_anchor() const {
    const Json::Value& v = Storage("anchor");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>anchor</code>' attribute.
   *
   * A region of the document represented as a JSON string. See anchor
   * documentation for details on how to define and interpret anchor properties.
   *
   * @param[in] value The new value.
   */
  void set_anchor(const StringPiece& value) {
    *MutableStorage("anchor") = value.data();
  }

  /**
   * Determine if the '<code>author</code>' attribute was set.
   *
   * @return true if the '<code>author</code>' attribute was set.
   */
  bool has_author() const {
    return Storage().isMember("author");
  }

  /**
   * Clears the '<code>author</code>' attribute.
   */
  void clear_author() {
    MutableStorage()->removeMember("author");
  }


  /**
   * Get a reference to the value of the '<code>author</code>' attribute.
   */
  const User get_author() const;

  /**
   * Gets a reference to a mutable value of the '<code>author</code>' property.
   *
   * The user who wrote this comment.
   *
   * @return The result can be modified to change the attribute value.
   */
  User mutable_author();

  /**
   * Determine if the '<code>commentId</code>' attribute was set.
   *
   * @return true if the '<code>commentId</code>' attribute was set.
   */
  bool has_comment_id() const {
    return Storage().isMember("commentId");
  }

  /**
   * Clears the '<code>commentId</code>' attribute.
   */
  void clear_comment_id() {
    MutableStorage()->removeMember("commentId");
  }


  /**
   * Get the value of the '<code>commentId</code>' attribute.
   */
  const StringPiece get_comment_id() const {
    const Json::Value& v = Storage("commentId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>commentId</code>' attribute.
   *
   * The ID of the comment.
   *
   * @param[in] value The new value.
   */
  void set_comment_id(const StringPiece& value) {
    *MutableStorage("commentId") = value.data();
  }

  /**
   * Determine if the '<code>content</code>' attribute was set.
   *
   * @return true if the '<code>content</code>' attribute was set.
   */
  bool has_content() const {
    return Storage().isMember("content");
  }

  /**
   * Clears the '<code>content</code>' attribute.
   */
  void clear_content() {
    MutableStorage()->removeMember("content");
  }


  /**
   * Get the value of the '<code>content</code>' attribute.
   */
  const StringPiece get_content() const {
    const Json::Value& v = Storage("content");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>content</code>' attribute.
   *
   * The plain text content used to create this comment. This is not HTML safe
   * and should only be used as a starting point to make edits to a comment's
   * content.
   *
   * @param[in] value The new value.
   */
  void set_content(const StringPiece& value) {
    *MutableStorage("content") = value.data();
  }

  /**
   * Determine if the '<code>context</code>' attribute was set.
   *
   * @return true if the '<code>context</code>' attribute was set.
   */
  bool has_context() const {
    return Storage().isMember("context");
  }

  /**
   * Clears the '<code>context</code>' attribute.
   */
  void clear_context() {
    MutableStorage()->removeMember("context");
  }


  /**
   * Get a reference to the value of the '<code>context</code>' attribute.
   */
  const CommentContext get_context() const {
     const Json::Value& storage = Storage("context");
    return client::JsonValueToCppValueHelper<CommentContext >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>context</code>' property.
   *
   * The context of the file which is being commented on.
   *
   * @return The result can be modified to change the attribute value.
   */
  CommentContext mutable_context() {
    Json::Value* storage = MutableStorage("context");
    return client::JsonValueToMutableCppValueHelper<CommentContext >(storage);
  }

  /**
   * Determine if the '<code>createdDate</code>' attribute was set.
   *
   * @return true if the '<code>createdDate</code>' attribute was set.
   */
  bool has_created_date() const {
    return Storage().isMember("createdDate");
  }

  /**
   * Clears the '<code>createdDate</code>' attribute.
   */
  void clear_created_date() {
    MutableStorage()->removeMember("createdDate");
  }


  /**
   * Get the value of the '<code>createdDate</code>' attribute.
   */
  client::DateTime get_created_date() const {
    const Json::Value& storage = Storage("createdDate");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>createdDate</code>' attribute.
   *
   * The date when this comment was first created.
   *
   * @param[in] value The new value.
   */
  void set_created_date(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("createdDate"));
  }

  /**
   * Determine if the '<code>deleted</code>' attribute was set.
   *
   * @return true if the '<code>deleted</code>' attribute was set.
   */
  bool has_deleted() const {
    return Storage().isMember("deleted");
  }

  /**
   * Clears the '<code>deleted</code>' attribute.
   */
  void clear_deleted() {
    MutableStorage()->removeMember("deleted");
  }


  /**
   * Get the value of the '<code>deleted</code>' attribute.
   */
  bool get_deleted() const {
    const Json::Value& storage = Storage("deleted");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>deleted</code>' attribute.
   *
   * Whether this comment has been deleted. If a comment has been deleted the
   * content will be cleared and this will only represent a comment that once
   * existed.
   *
   * @param[in] value The new value.
   */
  void set_deleted(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("deleted"));
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
   * The file which this comment is addressing.
   *
   * @param[in] value The new value.
   */
  void set_file_id(const StringPiece& value) {
    *MutableStorage("fileId") = value.data();
  }

  /**
   * Determine if the '<code>fileTitle</code>' attribute was set.
   *
   * @return true if the '<code>fileTitle</code>' attribute was set.
   */
  bool has_file_title() const {
    return Storage().isMember("fileTitle");
  }

  /**
   * Clears the '<code>fileTitle</code>' attribute.
   */
  void clear_file_title() {
    MutableStorage()->removeMember("fileTitle");
  }


  /**
   * Get the value of the '<code>fileTitle</code>' attribute.
   */
  const StringPiece get_file_title() const {
    const Json::Value& v = Storage("fileTitle");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>fileTitle</code>' attribute.
   *
   * The title of the file which this comment is addressing.
   *
   * @param[in] value The new value.
   */
  void set_file_title(const StringPiece& value) {
    *MutableStorage("fileTitle") = value.data();
  }

  /**
   * Determine if the '<code>htmlContent</code>' attribute was set.
   *
   * @return true if the '<code>htmlContent</code>' attribute was set.
   */
  bool has_html_content() const {
    return Storage().isMember("htmlContent");
  }

  /**
   * Clears the '<code>htmlContent</code>' attribute.
   */
  void clear_html_content() {
    MutableStorage()->removeMember("htmlContent");
  }


  /**
   * Get the value of the '<code>htmlContent</code>' attribute.
   */
  const StringPiece get_html_content() const {
    const Json::Value& v = Storage("htmlContent");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>htmlContent</code>' attribute.
   *
   * HTML formatted content for this comment.
   *
   * @param[in] value The new value.
   */
  void set_html_content(const StringPiece& value) {
    *MutableStorage("htmlContent") = value.data();
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
   * This is always drive#comment.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>modifiedDate</code>' attribute was set.
   *
   * @return true if the '<code>modifiedDate</code>' attribute was set.
   */
  bool has_modified_date() const {
    return Storage().isMember("modifiedDate");
  }

  /**
   * Clears the '<code>modifiedDate</code>' attribute.
   */
  void clear_modified_date() {
    MutableStorage()->removeMember("modifiedDate");
  }


  /**
   * Get the value of the '<code>modifiedDate</code>' attribute.
   */
  client::DateTime get_modified_date() const {
    const Json::Value& storage = Storage("modifiedDate");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>modifiedDate</code>' attribute.
   *
   * The date when this comment or any of its replies were last modified.
   *
   * @param[in] value The new value.
   */
  void set_modified_date(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("modifiedDate"));
  }

  /**
   * Determine if the '<code>replies</code>' attribute was set.
   *
   * @return true if the '<code>replies</code>' attribute was set.
   */
  bool has_replies() const {
    return Storage().isMember("replies");
  }

  /**
   * Clears the '<code>replies</code>' attribute.
   */
  void clear_replies() {
    MutableStorage()->removeMember("replies");
  }


  /**
   * Get a reference to the value of the '<code>replies</code>' attribute.
   */
  const client::JsonCppArray<CommentReply > get_replies() const;

  /**
   * Gets a reference to a mutable value of the '<code>replies</code>' property.
   *
   * Replies to this post.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<CommentReply > mutable_replies();

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
   * A link back to this comment.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

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
   * Get the value of the '<code>status</code>' attribute.
   */
  const StringPiece get_status() const {
    const Json::Value& v = Storage("status");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>status</code>' attribute.
   *
   * The status of this comment. Status can be changed by posting a reply to a
   * comment with the desired status.
   * <dl>
   * <dt>"open"
   * <dd>The comment is still open.
   * <dt>"resolved"
   * <dd>The comment has been resolved by one of its replies.
   * </dl>
   *
   *
   * @param[in] value The new value.
   */
  void set_status(const StringPiece& value) {
    *MutableStorage("status") = value.data();
  }

 private:
  void operator=(const Comment&);
};  // Comment
}  // namespace google_drive_api
#endif  // GOOGLE_DRIVE_API_COMMENT_H_
