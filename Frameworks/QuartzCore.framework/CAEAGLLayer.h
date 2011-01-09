/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface CAEAGLLayer : CALayer <EAGLDrawable>
{

  /* Error parsing encoded ivar type info: ^{_CAEAGLNativeWindow={_EAGLNativeWindowObject="version"i"attach"^?"detach"^?"begin"^?"swap"^?"collect"^?}{EAGLNativeWindowCallbacksRec="callback_data"^v"create_buffer"^?"destroy_buffer"^?}^{x_list_struct}{Atomic="_v"{?="x"i}}{SpinLock="_l"{?="x"i}}^{_CAImageQueue}@"CAEAGLLayer"^{x_list_struct}I^{CAEAGLBuffer}^{CAEAGLBuffer}b1b1b1} */
    struct _CAEAGLNativeWindow { struct _EAGLNativeWindowObject { 
            NSInteger version; 
            int (*attach)(); 
            int (*detach)(); 
            int (*begin)(); 
            int (*swap)(); 
            int (*collect)(); 
        } x1; struct EAGLNativeWindowCallbacksRec { 
            void *callback_data; 
            int (*create_buffer)(); 
            int (*destroy_buffer)(); 
        } x2; struct x_list_struct {} *x3; struct Atomic { 
            struct { 
                NSInteger x; 
            } _v; 
        } x4; struct SpinLock { 
            struct { 
                NSInteger x; 
            } _l; 
        } x5; struct _CAImageQueue {} *x6; id x7; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x8; unsigned char x9; void*x10; void*x11; void*x12; void*x13; unsigned long x14; unsigned long x15; void*x16; void*x17; void*x18; const void*x19; struct x_list_struct {} *x20; NSUInteger x21; struct CAEAGLBuffer {} *x22; struct CAEAGLBuffer {} *x23; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; } *_win;

}

@property(copy) NSDictionary *drawableProperties;

+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)dealloc;
- (id)drawableProperties;
- (void)setDrawableProperties:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (struct _EAGLNativeWindowObject { NSInteger x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); }*)nativeWindow;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)_display;
- (void)didChangeValueForKey:(id)arg1;

@end