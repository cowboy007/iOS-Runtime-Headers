/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSURL;

@interface SSItemMedia : NSObject {
    NSInteger _duration;
    NSInteger _fullDuration;
    long long _mediaFileSize;
    NSString *_mediaKind;
    BOOL _protected;
    NSURL *_url;
}

@property(readonly) NSURL *URL;
@property(copy) NSString *mediaKind;
@property(readonly) NSInteger durationInMilliseconds;
@property(readonly) NSInteger fullDurationInMilliseconds;
@property(readonly) long long mediaFileSize;
@property(getter=isProtectedMedia,readonly) BOOL protectedMedia;

- (id)URL;
- (void)dealloc;
- (id)description;
- (NSInteger)durationInMilliseconds;
- (NSInteger)fullDurationInMilliseconds;
- (NSUInteger)hash;
- (id)init;
- (id)initWithStoreOfferDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isProtectedMedia;
- (long long)mediaFileSize;
- (id)mediaKind;
- (void)setMediaKind:(id)arg1;

@end