/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDStateModeAssertionMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _activeDateInterval;
    unsigned long long  _lifetimeType;
    NSString * _modeIdentifier;
    bool  _userRequested;
}

@property (nonatomic, readonly, copy) NSDateInterval *activeDateInterval;
@property (nonatomic, readonly) unsigned long long lifetimeType;
@property (nonatomic, readonly, copy) NSString *modeIdentifier;
@property (getter=isUserRequested, nonatomic, readonly) bool userRequested;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeDateInterval;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithModeIdentifier:(id)arg1 userRequested:(bool)arg2 lifetimeType:(unsigned long long)arg3 activeDateInterval:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isUserRequested;
- (unsigned long long)lifetimeType;
- (id)modeIdentifier;

@end