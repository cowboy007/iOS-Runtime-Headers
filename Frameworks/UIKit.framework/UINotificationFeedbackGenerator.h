/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINotificationFeedbackGenerator : UIFeedbackGenerator

@property (getter=_eventConfiguration, nonatomic, readonly) _UINotificationFeedbackGeneratorConfiguration *eventConfiguration;

+ (Class)_configurationClass;

- (id)_categoryForType:(int)arg1;
- (id)_eventConfiguration;
- (void)_playEventType:(int)arg1;
- (double)_preparationTimeoutForStyle:(int)arg1;
- (void)_privateNotificationOccurred:(int)arg1;
- (id)_stats_key;
- (void)notificationOccurred:(int)arg1;

@end
