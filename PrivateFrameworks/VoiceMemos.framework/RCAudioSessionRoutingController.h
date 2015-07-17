/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAudioSessionRoutingController : NSObject <MPAVRoutingControllerDelegate> {
    NSArray *_cachedPickableRoutes;
    MPAVRoute *_cachedPickedRoute;
    BOOL _expectsFaceContactWhenHandsetSelected;
    BOOL _hasAppliedUserDefaultForRouteSetting;
    _RCMPRoutingController *_routingController;
    BOOL _shouldReportUserDefaultForRouteSetting;
    BOOL _useVoiceMemoSettings;
    struct __CFArray { } *_weakSessionRoutingAssertions;
}

@property (nonatomic, readonly) NSString *activeInputRouteName;
@property (nonatomic, readonly) unsigned int availableRoutesMask;
@property (nonatomic, readonly) NSArray *cachedPickableRoutes;
@property (nonatomic, readonly) MPAVRoute *cachedPickedRoute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expectsFaceContactWhenHandsetSelected;
@property (nonatomic, readonly) BOOL hasAppliedUserDefaultForRouteSetting;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isRoutingToPhoneCall;
@property (nonatomic, readonly) _RCMPRoutingController *routingController;
@property (nonatomic, readonly) NSString *selectedRouteName;
@property (nonatomic, readonly) int selectedRouteType;
@property (nonatomic, readonly) BOOL shouldReportUserDefaultForRouteSetting;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useVoiceMemoSettings;
@property (nonatomic, readonly) struct __CFArray { }*weakSessionRoutingAssertions;

+ (id)sharedRouteController;

- (void).cxx_destruct;
- (unsigned int)_RCAudioRouteMaskForRoutes:(id)arg1;
- (void)_activateAudioSessionCategory;
- (void)_applyUserDefaultAudioRoute;
- (unsigned int)_availableRoutesMask;
- (void)_deactivateAudioSessionCategory;
- (void)_pickAudioDeviceRouteType:(int)arg1;
- (void)_pickHandsetAudioDeviceRoute;
- (void)_pickSpeakerAudioDeviceRoute;
- (BOOL)_requireAudioSessionCategoryActiveForAssertions:(id)arg1;
- (BOOL)_routeDefaultBoolForKey:(id)arg1 nonVoiceMemoAppValue:(BOOL)arg2;
- (void)_setShouldRouteToSpeakerUserDefaultValue:(BOOL)arg1;
- (void)_setWeakSessionRoutingAssertions:(struct __CFArray { }*)arg1 applyImmediately:(BOOL)arg2;
- (BOOL)_speakerIsUserDefaultRoute;
- (BOOL)_speakerRouteIsPickedOrPreferred;
- (void)_updateAudioSessionActiveStateImmediately:(BOOL)arg1;
- (void)_updateProximitySetting;
- (void)_updateSpeakerRouteDefault;
- (BOOL)_wirelessRouteIsPickedOrPreferred;
- (id)activeInputRouteName;
- (void)addRouteAssertion:(id)arg1;
- (unsigned int)availableRoutesMask;
- (id)cachedPickableRoutes;
- (id)cachedPickedRoute;
- (void)dealloc;
- (BOOL)expectsFaceContactWhenHandsetSelected;
- (void)fetchActiveInputRouteWithCompletionHandler:(id /* block */)arg1;
- (BOOL)hasAppliedUserDefaultForRouteSetting;
- (id)init;
- (BOOL)isRoutingToPhoneCall;
- (void)removeRouteAssertion:(id)arg1;
- (id)routingController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingControllerIsRoutingToAirPlayMirrorDestinationDidChange:(id)arg1;
- (id)selectedRouteName;
- (int)selectedRouteType;
- (void)setExpectsFaceContactWhenHandsetSelected:(BOOL)arg1;
- (void)setUseVoiceMemoSettings:(BOOL)arg1;
- (BOOL)shouldReportUserDefaultForRouteSetting;
- (void)showAvailableRoutes;
- (void)toggleSpeaker;
- (BOOL)useVoiceMemoSettings;
- (struct __CFArray { }*)weakSessionRoutingAssertions;

@end