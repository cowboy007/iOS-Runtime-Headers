/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManagedDeviceUpdateDelay : NSObject {
    BOOL  _completedDelayCycle;
    NSDate * _delayedStartDate;
    BOOL  _hasStartedDelaying;
    BOOL  _isDelayed;
}

@property (nonatomic) BOOL completedDelayCycle;
@property (nonatomic, retain) NSDate *delayedStartDate;
@property (nonatomic) BOOL hasStartedDelaying;
@property (nonatomic) BOOL isDelayed;

+ (BOOL)supportsSecureCoding;

- (BOOL)completedDelayCycle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delayedStartDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasStartedDelaying;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelay:(id)arg1;
- (BOOL)isDelayed;
- (void)setCompletedDelayCycle:(BOOL)arg1;
- (void)setDelayedStartDate:(id)arg1;
- (void)setHasStartedDelaying:(BOOL)arg1;
- (void)setIsDelayed:(BOOL)arg1;

@end