/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, PBRequest, GEORequester, NSNumber;

@interface _GEOServiceRequesterOp : NSObject <PBRequesterDelegate> {
    PBRequest *_request;
    NSString *_debugRequestName;
    unsigned long long _urlType;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    bool_cancelled;
    GEORequester *_requester;
    NSString *_appIdentifier;
    NSNumber *_serviceTypeNumber;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithRequest:(id)arg1 appIdentifier:(id)arg2 urlType:(unsigned long long)arg3 debugRequestName:(id)arg4 serviceType:(id)arg5;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)startWithCompletionHandler:(id)arg1;
- (void)_cleanup;
- (void)cancel;
- (void)dealloc;

@end