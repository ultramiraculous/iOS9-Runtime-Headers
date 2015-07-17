/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLSourceDeviceAccount : NSObject {
    NSString * _identifier;
    unsigned int  _sqlID;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned int sqlID;

+ (BOOL)accountInfoArrayContainsNonSyncableAccount:(id)arg1;
+ (BOOL)accountInfoRepresentsSyncableAccount:(id)arg1;
+ (id)accountWithInfo:(id)arg1;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithInfo:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSqlID:(unsigned int)arg1;
- (unsigned int)sqlID;

@end