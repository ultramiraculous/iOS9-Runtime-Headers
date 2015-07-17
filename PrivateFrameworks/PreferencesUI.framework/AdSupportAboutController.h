/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface AdSupportAboutController : UIViewController <UIWebViewDelegate> {
    UIWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWebView *webView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)localizedStringFromDictionary:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)showErrorAlert;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;

@end