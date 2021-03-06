/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventPreviewDetailItem : EKEventDetailItem {
    UITableViewCell * _cell;
    EKDayPreviewController * _containedDayViewController;
    EKEvent * _eventCopy;
    BOOL  _inlineDayViewRespectsSelectedCalendarsFilter;
    NSDate * _proposedTime;
    BOOL  _showsInlineDayView;
}

@property (nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic, retain) NSDate *proposedTime;
@property (nonatomic) BOOL showsInlineDayView;

- (void).cxx_destruct;
- (id)_dayPreviewViewController;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned int)arg2;
- (BOOL)inlineDayViewRespectsSelectedCalendarsFilter;
- (id)proposedTime;
- (void)reset;
- (void)setInlineDayViewRespectsSelectedCalendarsFilter:(BOOL)arg1;
- (void)setProposedTime:(id)arg1;
- (void)setShowsInlineDayView:(BOOL)arg1;
- (BOOL)showsInlineDayView;

@end
