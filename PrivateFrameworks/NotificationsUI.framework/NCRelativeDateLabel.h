/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCRelativeDateLabel : NCDefaultDateLabel <NCRelativeDateTimerDelegate> {
    int _comparedToNow;
    NCRelativeDateTimer *_relativeDateTimer;
    int _resolution;
    unsigned int _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)constructLabelString;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
- (void)timerFiredWithValue:(unsigned int)arg1 forResolution:(int)arg2 comparedToNow:(int)arg3;

@end
