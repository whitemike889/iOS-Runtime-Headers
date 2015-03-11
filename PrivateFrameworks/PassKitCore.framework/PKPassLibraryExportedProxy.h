/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class <PKPassLibraryExportedInterface>;

@interface PKPassLibraryExportedProxy : NSObject <PKPassLibraryExportedInterface> {
    <PKPassLibraryExportedInterface> *_delegate;
}

@property <PKPassLibraryExportedInterface> * delegate;

- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)passAdded:(id)arg1;
- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (void)removingPassesOfType:(unsigned int)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)removingPassesOfType:(unsigned int)arg1 didUpdateWithProgress:(double)arg2;
- (void)setDelegate:(id)arg1;

@end