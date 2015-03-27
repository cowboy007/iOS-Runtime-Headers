/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
 */

@class NSDate, NSString;

@interface INDiagnosticReport : NSObject <NSSecureCoding> {
    BOOL _disabled;
    NSDate *_nextHeartbeatDate;
    NSString *_pushEnvironment;
    NSString *_pushToken;
    NSString *_pushTopic;
}

@property BOOL disabled;
@property(copy) NSDate * nextHeartbeatDate;
@property(copy) NSString * pushEnvironment;
@property(copy) NSString * pushToken;
@property(copy) NSString * pushTopic;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)disabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nextHeartbeatDate;
- (id)pushEnvironment;
- (id)pushToken;
- (id)pushTopic;
- (void)setDisabled:(BOOL)arg1;
- (void)setNextHeartbeatDate:(id)arg1;
- (void)setPushEnvironment:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setPushTopic:(id)arg1;

@end