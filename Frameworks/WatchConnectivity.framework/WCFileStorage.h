/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCFileStorage : NSObject {
    NSObject<OS_dispatch_queue> *_fileQueue;
    NSArray *_outstandingFileTransfers;
    NSString *_pairingID;
}

@property (retain) NSObject<OS_dispatch_queue> *fileQueue;
@property (retain) NSArray *outstandingFileTransfers;
@property (nonatomic, retain) NSString *pairingID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)appContextFolderURL:(BOOL)arg1;
- (id)appendPathForFileTransfer:(id)arg1 toPath:(id)arg2;
- (void)cleanUpOldPairingIDFolderInFolder:(id)arg1;
- (void)cleanUpOldPairingIDFolders;
- (void)cleanUpWatchDirectoryWithCurrentURL:(id)arg1;
- (void)createWatchDirectoryIfNeeded:(id)arg1;
- (void)deleteAppContext:(BOOL)arg1;
- (void)deleteApplicationContextFromInbox;
- (void)deleteOutstandingFileTransfer:(id)arg1;
- (void)deleteOutstandingUserInfoTransfer:(id)arg1;
- (void)deleteSessionFileFromInbox:(id)arg1;
- (void)deleteUserInfoTransferFromInbox:(id)arg1;
- (id)fileQueue;
- (id)fileTransferForIdentifier:(id)arg1;
- (id)homeDirectoryURL;
- (id)init;
- (id)loadAppContext:(BOOL)arg1;
- (id)loadOutstandingFileTransfers;
- (id)loadOutstandingUserInfoTransfersAndComplicationUserInfo:(id*)arg1;
- (id)localAppContextFolderURL;
- (void)onqueue_persistFileTransfer:(id)arg1;
- (id)outgoingFileTransferPath;
- (id)outstandingFileTransfers;
- (id)pairingID;
- (void)persistAppContextData:(id)arg1 received:(BOOL)arg2;
- (void)persistOutgoingFileTransfer:(id)arg1;
- (id)persistOutgoingUserInfoTransfer:(id)arg1;
- (id)receivedAppContextFolderURL;
- (void)setFileQueue:(id)arg1;
- (void)setOutstandingFileTransfers:(id)arg1;
- (void)setPairingID:(id)arg1;

@end