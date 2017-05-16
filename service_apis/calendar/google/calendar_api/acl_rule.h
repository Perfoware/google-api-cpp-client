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
#ifndef  GOOGLE_CALENDAR_API_ACL_RULE_H_
#define  GOOGLE_CALENDAR_API_ACL_RULE_H_

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
class AclRule : public client::JsonCppData {
 public:
  /**
   * The scope of the rule.
   *
   * @ingroup DataObject
   */
  class AclRuleScope : public client::JsonCppData {
   public:
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static AclRuleScope* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit AclRuleScope(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit AclRuleScope(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~AclRuleScope();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_calendar_api::AclRuleScope</code>
     */
    const char* GetTypeName() const {
      return "google_calendar_api::AclRuleScope";
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
     * The type of the scope. Possible values are:
     * <dl>
     * <dt>"default"
     * <dd>The public scope. This is the default value.
     * <dt>"user"
     * <dd>Limits the scope to a single user.
     * <dt>"group"
     * <dd>Limits the scope to a group.
     * <dt>"domain"
     * <dd>Limits the scope to a domain.  Note: The permissions granted to the
     * "default", or public, scope apply to any user, authenticated or not.
     * </dl>
     *
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
     * The email address of a user or group, or the name of a domain, depending
     * on the scope type. Omitted for type "default".
     *
     * @param[in] value The new value.
     */
    void set_value(const StringPiece& value) {
      *MutableStorage("value") = value.data();
    }

   private:
    void operator=(const AclRuleScope&);
  };  // AclRuleScope
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static AclRule* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit AclRule(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit AclRule(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~AclRule();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::AclRule</code>
   */
  const char* GetTypeName() const {
    return "google_calendar_api::AclRule";
  }

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
   * ETag of the resource.
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
   * Identifier of the ACL rule.
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
   * Type of the resource ("calendar#aclRule").
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>role</code>' attribute was set.
   *
   * @return true if the '<code>role</code>' attribute was set.
   */
  bool has_role() const {
    return Storage().isMember("role");
  }

  /**
   * Clears the '<code>role</code>' attribute.
   */
  void clear_role() {
    MutableStorage()->removeMember("role");
  }


  /**
   * Get the value of the '<code>role</code>' attribute.
   */
  const StringPiece get_role() const {
    const Json::Value& v = Storage("role");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>role</code>' attribute.
   *
   * The role assigned to the scope. Possible values are:
   * <dl>
   * <dt>"none"
   * <dd>Provides no access.
   * <dt>"freeBusyReader"
   * <dd>Provides read access to free/busy information.
   * <dt>"reader"
   * <dd>Provides read access to the calendar. Private events will appear to
   * users with reader access, but event details will be hidden.
   * <dt>"writer"
   * <dd>Provides read and write access to the calendar. Private events will
   * appear to users with writer access, and event details will be visible.
   * <dt>"owner"
   * <dd>Provides ownership of the calendar. This role has all of the
   * permissions of the writer role with the additional ability to see and
   * manipulate ACLs.
   * </dl>
   *
   *
   * @param[in] value The new value.
   */
  void set_role(const StringPiece& value) {
    *MutableStorage("role") = value.data();
  }

  /**
   * Determine if the '<code>scope</code>' attribute was set.
   *
   * @return true if the '<code>scope</code>' attribute was set.
   */
  bool has_scope() const {
    return Storage().isMember("scope");
  }

  /**
   * Clears the '<code>scope</code>' attribute.
   */
  void clear_scope() {
    MutableStorage()->removeMember("scope");
  }


  /**
   * Get a reference to the value of the '<code>scope</code>' attribute.
   */
  const AclRuleScope get_scope() const {
     const Json::Value& storage = Storage("scope");
    return client::JsonValueToCppValueHelper<AclRuleScope >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>scope</code>' property.
   *
   * The scope of the rule.
   *
   * @return The result can be modified to change the attribute value.
   */
  AclRuleScope mutable_scope() {
    Json::Value* storage = MutableStorage("scope");
    return client::JsonValueToMutableCppValueHelper<AclRuleScope >(storage);
  }

 private:
  void operator=(const AclRule&);
};  // AclRule
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_ACL_RULE_H_
