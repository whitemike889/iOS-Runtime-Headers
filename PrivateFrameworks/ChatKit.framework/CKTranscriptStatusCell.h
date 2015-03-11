/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSAttributedString, UIButton;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell {
    float _prevBalloonWidth;
    UIButton *_statusButton;
}

@property(copy) NSAttributedString * attributedButtonText;
@property float prevBalloonWidth;
@property(retain) UIButton * statusButton;

+ (id)statusButton;
+ (void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned int)arg4 completion:(id)arg5;
+ (void)zoomAnimation:(id)arg1 completion:(id)arg2;

- (id)attributedButtonText;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id)arg1;
- (void)performReload:(id)arg1 completion:(id)arg2;
- (void)performRemoval:(id)arg1;
- (float)prevBalloonWidth;
- (void)setAttributedButtonText:(id)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setPrevBalloonWidth:(float)arg1;
- (void)setStatusButton:(id)arg1;
- (id)statusButton;

@end