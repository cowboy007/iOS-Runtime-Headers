/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKLeaderboardInternal : GKInternalRepresentation {
    NSString *_categoryID;
    NSString *_localizedTitle;
    unsigned int _maxRank;
    NSString *_scoreType;
}

@property(retain) NSString * categoryID;
@property(retain) NSString * localizedTitle;
@property unsigned int maxRank;
@property(retain) NSString * scoreType;

+ (id)codedPropertyKeys;

- (id)categoryID;
- (void)dealloc;
- (id)description;
- (id)localizedTitle;
- (unsigned int)maxRank;
- (id)scoreType;
- (void)setCategoryID:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaxRank:(unsigned int)arg1;
- (void)setScoreType:(id)arg1;

@end