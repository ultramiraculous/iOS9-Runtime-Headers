/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSParsecSearchCompletionResultSet : NSObject {
    double _completionScore;
    NSString *_completionString;
    NSString *_errorCodeString;
    NSString *_feedbackQueryIdentifier;
    double _maxAge;
    NSString *_prefix;
    NSArray *_results;
    int _status;
}

@property (nonatomic, readonly) double completionScore;
@property (nonatomic, readonly) NSString *completionString;
@property (nonatomic, readonly) NSString *errorCodeString;
@property (nonatomic, readonly) NSString *feedbackQueryIdentifier;
@property (nonatomic, readonly) double maxAge;
@property (nonatomic, readonly) NSString *prefix;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) int status;

+ (id)resultSetWithDictionary:(id)arg1 cache:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1 cache:(id)arg2;
- (double)completionScore;
- (id)completionString;
- (id)errorCodeString;
- (id)feedbackQueryIdentifier;
- (double)maxAge;
- (id)prefix;
- (id)results;
- (int)status;

@end