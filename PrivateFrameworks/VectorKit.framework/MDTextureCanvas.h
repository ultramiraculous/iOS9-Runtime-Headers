/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface MDTextureCanvas : NSObject <MDRenderTarget> {
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    struct CGSize { 
        double width; 
        double height; 
    } _sizeInPixels;
    double _contentScale;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct CGSize { double x1; double x2; } size;
@property(readonly) double contentScale;
@property(readonly) struct CGSize { double x1; double x2; } sizeInPixels;
@property(readonly) float averageFPS;


- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)didDrawView;
- (void)willDrawView;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (struct CGSize { double x1; double x2; })size;
- (double)contentScale;

@end