/* Generated by RuntimeBrowser.
 */

@protocol DNDSModeAssertionStateProviderDataSource <NSObject>

@required

- (unsigned long long)currentInterruptionBehaviorSettingForStateProvider:(DNDSModeAssertionStateProvider *)arg1;
- (unsigned long long)currentLostModeStateForStateProvider:(DNDSModeAssertionStateProvider *)arg1;
- (unsigned long long)currentUILockStateForStateProvider:(DNDSModeAssertionStateProvider *)arg1;
- (NSArray *)currentlyActiveModeAssertionsForStateProvider:(DNDSModeAssertionStateProvider *)arg1;
- (NSDateInterval *)stateProvider:(DNDSModeAssertionStateProvider *)arg1 activeDateIntervalForModeAssertion:(DNDModeAssertion *)arg2;
- (DNDModeAssertionLifetime *)stateProvider:(DNDSModeAssertionStateProvider *)arg1 effectiveLifetimeForModeAssertion:(DNDModeAssertion *)arg2;
- (NSString *)stateProvider:(DNDSModeAssertionStateProvider *)arg1 effectiveModeIdentifierForModeAssertion:(DNDModeAssertion *)arg2;

@end