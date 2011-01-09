/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSMachPort : NSPort 
{
    id _delegate;
    NSUInteger _flags;
    NSUInteger _machPort;
    NSUInteger _reserved;
}

+ (id)port;
+ (void)resetAllPorts;
+ (id)portWithMachPort:(NSUInteger)arg1;
+ (id)portWithMachPort:(NSUInteger)arg1 options:(NSUInteger)arg2;
+ (void)_fixNSMachPortLeak;

- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)isValid;
- (void)finalize;
- (NSUInteger)hash;
- (id)init;
- (BOOL)isMemberOfClass:(Class)arg1;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (NSUInteger)retainCount;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (NSUInteger)machPort;
- (id)initWithMachPort:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (id)initWithMachPort:(NSUInteger)arg1;
- (unsigned long)_cfTypeID;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

@end