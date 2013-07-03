/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class <NDBackgroundSessionProtocol>, NSXPCConnection, __NSCFURLSession, __NSCFURLSessionConfiguration, NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface __NSCFBackgroundSessionBridge : __NSCFSessionBridge <NDBackgroundSessionClient> {
    __NSCFURLSession *_session;
    unsigned int _identSeed;
    <NDBackgroundSessionProtocol> *_remoteSession;
    NSXPCConnection *_xpcConn;
    __NSCFURLSessionConfiguration *_config;
    NSMutableDictionary *_tasks;
    NSObject<OS_dispatch_queue> *_workQueue;
}


- (void)dealloc;
- (id)downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(id)arg3;
- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;
- (id)dataTaskForRequest:(id)arg1 completion:(id)arg2;
- (id)copyTasks;
- (void)disavowSession;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2 queue:(id)arg3;
- (void)setCookiesFromResponse:(id)arg1 forOriginalRequest:(id)arg2;
- (id)taskForIdentifier:(unsigned int)arg1;
- (id)requestWithCookiesApplied:(id)arg1;
- (void)recreateExistingTasks:(id)arg1;
- (void)cameIntoForeground:(id)arg1;
- (void)wentToBackground:(id)arg1;
- (void)cleanupConfig;
- (void)setupBackgroundSession;
- (void)setupXPCConnection;
- (void)backgroundDownloadTask:(unsigned int)arg1 didFinishDownloadingToURL:(id)arg2 reply:(id)arg3;
- (void)backgroundDownloadTask:(unsigned int)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)backgroundTask:(unsigned int)arg1 didCompleteWithError:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned int)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned int)arg1 didReceiveResponse:(id)arg2;
- (void)backgroundTask:(unsigned int)arg1 didReceiveChallenge:(id)arg2 reply:(id)arg3;
- (void)backgroundTaskDidSuspend:(unsigned int)arg1;
- (void)backgroundTaskDidResume:(unsigned int)arg1;

@end