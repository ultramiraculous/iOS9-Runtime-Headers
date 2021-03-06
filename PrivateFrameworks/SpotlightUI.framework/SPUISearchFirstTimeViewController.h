/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchFirstTimeViewController : UIViewController <UITextViewDelegate> {
    SPUISearchResultsActionManager * _actionManager;
}

@property SPUISearchResultsActionManager *actionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)actionManager;
- (id)initWithFTE:(id)arg1 learnMore:(id)arg2;
- (void)setActionManager:(id)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;

@end
