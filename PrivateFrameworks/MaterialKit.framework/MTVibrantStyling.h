/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTVibrantStyling : NSObject {
    float  _alpha;
    NSString * _blendMode;
    UIColor * _burnColor;
    UIColor * _color;
    CAFilter * _composedFilter;
    UIColor * _darkenColor;
    BOOL  _inputReversed;
    int  _style;
}

@property (nonatomic, readonly) float alpha;
@property (nonatomic, readonly, copy) NSString *blendMode;
@property (getter=_burnColor, nonatomic, readonly, copy) UIColor *burnColor;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly, copy) CAFilter *composedFilter;
@property (getter=_darkenColor, nonatomic, readonly, copy) UIColor *darkenColor;
@property (getter=_inputReversed, nonatomic, readonly) BOOL inputReversed;
@property (nonatomic, readonly) int style;
@property (nonatomic, readonly, copy) UIVibrancyEffect *visualEffect;

+ (id)vibrantStylingWithStyle:(int)arg1;

- (void).cxx_destruct;
- (id)_burnColor;
- (id)_darkenColor;
- (BOOL)_inputReversed;
- (id)_layerConfig;
- (float)alpha;
- (id)blendMode;
- (id)color;
- (id)composedFilter;
- (int)style;
- (id)visualEffect;

@end