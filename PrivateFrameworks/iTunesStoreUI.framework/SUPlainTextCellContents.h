/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UITextLabel;



@interface SUPlainTextCellContents : SUTransparentCellContents 
{
    UITextLabel *_label;
    struct CGSize { 
        float width; 
        float height; 
    } _textSize;
    NSUInteger _fontSize;
    float _overrideHeight;
    NSInteger _verticalAlignment;
}


- (id)init;
- (void)layoutSubviews;
- (float)height;
- (void)setFontSize:(NSUInteger)arg1;
- (void)setText:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setHeight:(float)arg1;
- (void)setVerticalTextAlignment:(NSInteger)arg1;
- (id)_label;

@end