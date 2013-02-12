/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKEventViewDelegate>, EKEvent, NSArray, NSString, UIActionSheet, UIButton, UITableView, UIToolbar;

@interface EKEventViewController : UIViewController {
    unsigned int _didAppear : 1;
    unsigned int _autoPop : 1;
    unsigned int _allowsEditing : 1;
    unsigned int _allowsSubitems : 1;
    unsigned int _showsPreview : 1;
    unsigned int _forcePreview : 1;
    unsigned int _trustsStatus : 1;
    unsigned int _allowsInviteResponses : 1;
    unsigned int _showsAddToCalendar : 1;
    unsigned int _icsPreview : 1;
    unsigned int _needsReload : 1;
    UIActionSheet *_alertSheet;
    UIToolbar *_buttonBar;
    id _currentEditItem;
    NSArray *_currentSections;
    <EKEventViewDelegate> *_delegate;
    id _editor;
    EKEvent *_event;
    NSString *_eventId;
    NSArray *_items;
    NSInteger _lastOrientation;
    NSInteger _pendingStatus;
    UIButton *_responseButtons[3];
    NSInteger _scrollToSection;
    UITableView *_tableView;
}

@property(retain) EKEventDetailItem *_currentEditItem;
@property <EKEventViewDelegate> *delegate;
@property(retain) EKEvent *event;
@property(readonly) UITableView *tableView;
@property BOOL allowsCalendarPreview;
@property BOOL allowsEditing;

+ (void)setDefaultDatesForEvent:(id)arg1;

- (void)_acceptButtonPressed:(id)arg1;
- (void)_addToCalendarClicked:(id)arg1;
- (BOOL)_canDetachSingleOccurrence;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (id)_currentEditItem;
- (void)_declineButtonPressed:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)_dismissEditor:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_idealSize;
- (id)_items;
- (void)_localeChanged;
- (void)_markEventAsRead;
- (void)_maybeButtonPressed:(id)arg1;
- (void)_performDelete;
- (BOOL)_performSave:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)_pop;
- (void)_prepareEventForEdit;
- (void)_presentDetachSheet;
- (void)_presentValidationAlert:(id)arg1;
- (void)_responseChanged:(id)arg1;
- (void)_saveStatus:(NSInteger)arg1 span:(NSInteger)arg2;
- (void)_selectButtonWithTag:(NSInteger)arg1;
- (void)_setupAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4;
- (void)_storeChanged:(id)arg1;
- (void)_updateFooterIfNeeded;
- (void)_updateNavBarAnimated:(BOOL)arg1;
- (void)_updateResponse;
- (void)_updateResponseVisibility;
- (void)accessibilityLargeTextDidChange;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (BOOL)allowsCalendarPreview;
- (BOOL)allowsEditing;
- (BOOL)allowsSubitems;
- (BOOL)alwaysShowsCalendarPreview;
- (void)completeWithAction:(NSInteger)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)doneButtonPressed;
- (void)editEvent;
- (id)event;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(NSInteger)arg2;
- (void)eventItemDidCommit:(id)arg1;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)eventItemDidStartEditing:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invokeInviteAction:(NSInteger)arg1;
- (BOOL)isICSPreview;
- (void)loadView;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)reloadIfNeeded;
- (NSInteger)scrollToSection;
- (void)setAllowsCalendarPreview:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAllowsSubitems:(BOOL)arg1;
- (void)setAlwaysShowsCalendarPreview:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setICSPreview:(BOOL)arg1;
- (void)setNeedsReload;
- (void)setScrollToSection:(NSInteger)arg1;
- (void)setShowsAddToCalendar:(BOOL)arg1;
- (void)set_currentEditItem:(id)arg1;
- (void)setupForEvent;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (BOOL)showsAddToCalendar;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (id)tableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end