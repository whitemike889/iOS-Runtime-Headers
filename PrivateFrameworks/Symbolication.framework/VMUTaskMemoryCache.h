/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUTaskMemoryCache : NSObject 
{
    struct { unsigned long x1; unsigned long x2; struct { /* ? */ } *x3; } *_memoryRegions;
    NSUInteger _task;
    BOOL _taskIs64Bit;
    BOOL _stopped;
}

+ (BOOL)taskIs64Bit:(NSUInteger)arg1;

- (void)finalize;
- (void)dealloc;
- (void)initMemoryRegions;
- (void)freeMemoryRegions;
- (id)initWithTask:(NSUInteger)arg1;
- (NSInteger)startPeeking;
- (NSInteger)peekAtAddress:(NSUInteger)arg1 returnsSize:(NSUInteger*)arg2 returnsBuf:(void**)arg3;
- (BOOL)copyRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 to:(void*)arg2;
- (NSInteger)peekAtAddress:(NSUInteger)arg1 size:(NSUInteger)arg2 returnsBuf:(void**)arg3;
- (void)flushMemoryCache;
- (NSInteger)readPointerAt:(NSUInteger)arg1 value:(NSUInteger*)arg2;
- (NSInteger)stopPeeking;

@end