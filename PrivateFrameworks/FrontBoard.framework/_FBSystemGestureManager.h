/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface _FBSystemGestureManager : NSObject <FBExclusiveTouchGestureRecognizerDelegate, UIGestureRecognizerDelegate> {
    BOOL  _achievedMaximumMovement;
    FBSDisplay * _display;
    UIGestureRecognizer * _exclusiveTouchGesture;
    NSMutableSet * _externalGestures;
    NSMutableSet * _internalGestures;
    NSMutableSet * _recognizingGestures;
}

@property (nonatomic) BOOL achievedMaximumMovement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) FBSDisplay *display;
@property (nonatomic, retain) UIGestureRecognizer *exclusiveTouchGesture;
@property (nonatomic, readonly, copy) NSSet *gestureRecognizers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_addInternalGesturesToView:(id)arg1;
- (void)_exclusiveTouchGestureChanged:(id)arg1;
- (void)_externalGestureRecognizerChanged:(id)arg1;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1;
- (void)_removeInternalGestures;
- (BOOL)achievedMaximumMovement;
- (void)addGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)display;
- (id)exclusiveTouchGesture;
- (void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(BOOL)arg2 timestamp:(double)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)gestureRecognizers;
- (id)initWithDisplay:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)setAchievedMaximumMovement:(BOOL)arg1;
- (void)setExclusiveTouchGesture:(id)arg1;

@end