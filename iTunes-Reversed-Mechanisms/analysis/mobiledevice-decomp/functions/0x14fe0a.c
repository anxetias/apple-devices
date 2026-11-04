// rea decompile_all
// name: _AMDErrorForMobileInstallationCallbackDict
// address: 0x14fe0a
// body: available
// range: 0x14fe0a-0x15104f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMDErrorForMobileInstallationCallbackDict(undefined8 param_1)

{
  char cVar1;
  uint in_EAX;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  lVar3 = _CFDictionaryGetValue(param_1,&cf_Error);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = _CFEqual(lVar3,&cf_AlreadyArchived);
    uVar2 = 0xe800005a;
    if (cVar1 == '\0') {
      cVar1 = _CFEqual(lVar3,&cf_APIInternalError);
      uVar2 = 0xe8000067;
      if (cVar1 == '\0') {
        cVar1 = _CFEqual(lVar3,&cf_ApplicationAlreadyInstalled);
        uVar2 = 0xe8000036;
        if (cVar1 == '\0') {
          cVar1 = _CFEqual(lVar3,&cf_ApplicationMoveFailed);
          uVar2 = 0xe8000037;
          if (cVar1 == '\0') {
            cVar1 = _CFEqual(lVar3,&cf_ApplicationSINFCaptureFailed);
            uVar2 = 0xe8000038;
            if (cVar1 == '\0') {
              cVar1 = _CFEqual(lVar3,&cf_ApplicationSandboxFailed);
              uVar2 = 0xe8000039;
              if (cVar1 == '\0') {
                cVar1 = _CFEqual(lVar3,&cf_ApplicationVerificationFailed);
                uVar2 = 0xe800003a;
                if (cVar1 == '\0') {
                  cVar1 = _CFEqual(lVar3,&cf_ArchiveDestructionFailed);
                  uVar2 = 0xe800003b;
                  if (cVar1 == '\0') {
                    cVar1 = _CFEqual(lVar3,&cf_BundleVerificationFailed);
                    uVar2 = 0xe800003c;
                    if (cVar1 == '\0') {
                      cVar1 = _CFEqual(lVar3,&cf_CarrierBundleCopyFailed);
                      uVar2 = 0xe800003d;
                      if (cVar1 == '\0') {
                        cVar1 = _CFEqual(lVar3,&cf_CarrierBundleDirectoryCreationFailed);
                        uVar2 = 0xe800003e;
                        if (cVar1 == '\0') {
                          cVar1 = _CFEqual(lVar3,&cf_CarrierBundleMissingSupportedSIMs);
                          uVar2 = 0xe800003f;
                          if (cVar1 == '\0') {
                            cVar1 = _CFEqual(lVar3,&cf_CommCenterNotificationFailed);
                            uVar2 = 0xe8000040;
                            if (cVar1 == '\0') {
                              cVar1 = _CFEqual(lVar3,&cf_ContainerCreationFailed);
                              uVar2 = 0xe8000041;
                              if (cVar1 == '\0') {
                                cVar1 = _CFEqual(lVar3,&cf_ContainerP0wnFailed);
                                uVar2 = 0xe8000042;
                                if (cVar1 == '\0') {
                                  cVar1 = _CFEqual(lVar3,&cf_ContainerRemovalFailed);
                                  uVar2 = 0xe8000043;
                                  if (cVar1 == '\0') {
                                    cVar1 = _CFEqual(lVar3,&cf_EmbeddedProfileInstallFailed);
                                    uVar2 = 0xe8000044;
                                    if (cVar1 == '\0') {
                                      cVar1 = _CFEqual(lVar3,&cf_Error);
                                      uVar2 = 0xe8000045;
                                      if (cVar1 == '\0') {
                                        cVar1 = _CFEqual(lVar3,&cf_ExecutableTwiddleFailed);
                                        uVar2 = 0xe8000046;
                                        if (cVar1 == '\0') {
                                          cVar1 = _CFEqual(lVar3,&cf_ExistenceCheckFailed);
                                          uVar2 = 0xe8000047;
                                          if (cVar1 == '\0') {
                                            cVar1 = _CFEqual(lVar3,&cf_InstallMapUpdateFailed);
                                            uVar2 = 0xe8000048;
                                            if (cVar1 == '\0') {
                                              cVar1 = _CFEqual(lVar3,&cf_ManifestCaptureFailed);
                                              uVar2 = 0xe8000049;
                                              if (cVar1 == '\0') {
                                                cVar1 = _CFEqual(lVar3,&cf_MapGenerationFailed);
                                                uVar2 = 0xe800004a;
                                                if (cVar1 == '\0') {
                                                  cVar1 = _CFEqual(lVar3,&cf_MissingBundleExecutable
                                                                  );
                                                  uVar2 = 0xe800004b;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_MissingBundleIdentifier);
                                                  uVar2 = 0xe800004c;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_MissingBundlePath);
                                                    uVar2 = 0xe800004d;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&cf_MissingContainer);
                                                      uVar2 = 0xe800004e;
                                                      if (cVar1 == '\0') {
                                                        cVar1 = _CFEqual(lVar3,&
                                                  cf_NotificationFailed);
                                                  uVar2 = 0xe800004f;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_PackageExtractionFailed);
                                                  uVar2 = 0xe8000050;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_PackageInspectionFailed);
                                                  uVar2 = 0xe8000051;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_PackageMoveFailed);
                                                    uVar2 = 0xe8000052;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&
                                                  cf_PathConversionFailed);
                                                  uVar2 = 0xe8000053;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_RestoreContainerFailed);
                                                  uVar2 = 0xe8000054;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_SeatbeltProfileRemovalFailed);
                                                  uVar2 = 0xe8000055;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_StageCreationFailed);
                                                    uVar2 = 0xe8000056;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&cf_SymlinkFailed);
                                                      uVar2 = 0xe8000057;
                                                      if (cVar1 == '\0') {
                                                        cVar1 = _CFEqual(lVar3,&cf_UnknownCommand);
                                                        uVar2 = 0xe8000066;
                                                        if (cVar1 == '\0') {
                                                          cVar1 = _CFEqual(lVar3,&
                                                  cf_iTunesArtworkCaptureFailed);
                                                  uVar2 = 0xe8000058;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_iTunesMetadataCaptureFailed);
                                                  uVar2 = 0xe8000059;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_DeviceOSVersionTooLow
                                                                    );
                                                    uVar2 = 0xe800007e;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&
                                                  cf_DeviceFamilyNotSupported);
                                                  uVar2 = 0xe8000080;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_PackagePatchFailed);
                                                    uVar2 = 0xe8000086;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&
                                                  cf_IncorrectArchitecture);
                                                  uVar2 = 0xe8000087;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_PluginCopyFailed);
                                                    uVar2 = 0xe8000088;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&cf_BreadcrumbFailed);
                                                      uVar2 = 0xe8000089;
                                                      if (cVar1 == '\0') {
                                                        cVar1 = _CFEqual(lVar3,&
                                                  cf_BreadcrumbUnlockFailed);
                                                  uVar2 = 0xe800008a;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_GeoJSONCaptureFailed)
                                                    ;
                                                    uVar2 = 0xe800008b;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&
                                                  cf_NewsstandArtworkCaptureFailed);
                                                  uVar2 = 0xe800008c;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_MissingCommand);
                                                    uVar2 = 0xe800008d;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&cf_NotEntitled);
                                                      uVar2 = 0xe800008e;
                                                      if (cVar1 == '\0') {
                                                        cVar1 = _CFEqual(lVar3,&
                                                  cf_MissingPackagePath);
                                                  uVar2 = 0xe800008f;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_MissingContainerPath)
                                                    ;
                                                    uVar2 = 0xe8000090;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&
                                                  cf_MissingApplicationIdentifier);
                                                  uVar2 = 0xe8000091;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_MissingAttributeValue
                                                                    );
                                                    uVar2 = 0xe8000092;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&cf_LookupFailed);
                                                      uVar2 = 0xe8000093;
                                                      if (cVar1 == '\0') {
                                                        cVar1 = _CFEqual(lVar3,&
                                                  cf_DictCreationFailed);
                                                  uVar2 = 0xe8000094;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_InstallProhibited);
                                                    uVar2 = 0xe8000097;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&cf_UninstallProhibited
                                                                      );
                                                      uVar2 = 0xe8000098;
                                                      if (cVar1 == '\0') {
                                                        cVar1 = _CFEqual(lVar3,&
                                                  cf_MissingBundleVersion);
                                                  uVar2 = 0xe800009c;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_InvalidSymlink);
                                                    uVar2 = 0xe80000bf;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&cf_AppBlacklisted);
                                                      uVar2 = 0xe800009d;
                                                      if (cVar1 == '\0') {
                                                        cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIDNotPrefixed);
                                                  uVar2 = 0xe800009e;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIllegalXPCServiceDict);
                                                  uVar2 = 0xe800009f;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleMissingNSExtensionDict);
                                                  uVar2 = 0xe80000a0;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleMissingEXAppExtensionAttributesDict)
                                                  ;
                                                  uVar2 = 0xe800011b;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIllegalPackageTypeValue);
                                                  uVar2 = 0xe80000a1;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleMissingClassOrStoryboard);
                                                  uVar2 = 0xe80000a2;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIllegalExtensionContextClass);
                                                  uVar2 = 0xe80000a3;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIllegalExtensionContextHostClass);
                                                  uVar2 = 0xe80000a4;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIllegalExtensionViewControllerHostClass
                                                  );
                                                  uVar2 = 0xe80000a5;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleMissingExtensionPointIdentifierString
                                                  );
                                                  uVar2 = 0xe80000a6;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIllegalExtensionPointIdentifierString
                                                  );
                                                  uVar2 = 0xe80000a7;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIllegalExtensionAttributesDict);
                                                  uVar2 = 0xe80000a8;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIllegalExtensionPointNameString);
                                                  uVar2 = 0xe80000a9;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIllegalExtensionPointVersionString);
                                                  uVar2 = 0xe80000aa;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleMissingEXPrincipalClassString);
                                                  uVar2 = 0xe800011e;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIllegalEXPrincipalClassString);
                                                  uVar2 = 0xe800011f;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleUnreadableExecutable);
                                                  uVar2 = 0xe8000120;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleUnexpectedSwiftSectionInExecutable);
                                                  uVar2 = 0xe8000121;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_MissingBundleNameString);
                                                  uVar2 = 0xe80000ab;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_MissingBundleDisplayNameString);
                                                  uVar2 = 0xe80000ac;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_IllegalBundleShortVersionString);
                                                  uVar2 = 0xe80000ad;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_IllegalXPCServiceRunLoopType);
                                                  uVar2 = 0xe80000ae;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_IllegalXPCServiceServiceType);
                                                  uVar2 = 0xe80000af;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_DuplicateIdentifier);
                                                    uVar2 = 0xe80000b0;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleUnknownExtensionPointIdentifier);
                                                  uVar2 = 0xe80000b1;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_MultipleFileProviderAppexBundles);
                                                  uVar2 = 0xe80000b2;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_MismatchedApplicationIdentifierEntitlement);
                                                  uVar2 = 0xe80000be;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_InvalidATVStubApplication);
                                                  uVar2 = 0xe80000c2;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_BundleiTunesMetadataVersionMismatch);
                                                  uVar2 = 0xe80000c3;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_InvalidiTunesMetadataPlist);
                                                  uVar2 = 0xe80000c4;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_MismatchedBundleIDSigningIdentifier);
                                                  uVar2 = 0xe80000c5;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_MultipleWatchKitAppexBundles);
                                                  uVar2 = 0xe80000c6;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_InvalidWatchKitApp);
                                                    uVar2 = 0xe80000c7;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&
                                                  cf_DeviceNotSupportedByThinning);
                                                  uVar2 = 0xe80000c8;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_InvalidSupportedDevices);
                                                  uVar2 = 0xe80000c9;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIDSuffixContainsPeriod);
                                                  uVar2 = 0xe80000ca;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleIDConflictWithOtherIdentifier);
                                                  uVar2 = 0xe80000cb;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_BundleIDConflictWithOtherIdentifier);
                                                  uVar2 = 0xe80000cc;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_MultipleWatchKitOneApps);
                                                  uVar2 = 0xe80000cd;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_MultipleWatchKitTwoApps);
                                                  uVar2 = 0xe80000ce;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_InvalidStubExecutable
                                                                    );
                                                    uVar2 = 0xe80000cf;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&
                                                  cf_MultipleAppExtensionsFoundInWKApp);
                                                  uVar2 = 0xe80000d0;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_NonWKAppExtensionFoundInWKApp);
                                                  uVar2 = 0xe80000d1;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitAppHasFrameworks);
                                                  uVar2 = 0xe80000d2;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitOneAppHasPlugins);
                                                  uVar2 = 0xe80000d3;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitTwoAppMissingExtension);
                                                  uVar2 = 0xe80000d4;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_InvalidCompanionAppBundleIdentifier);
                                                  uVar2 = 0xe80000d5;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitAppInvalidInfoPlistKey);
                                                  uVar2 = 0xe80000d6;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitAppIllegalInfoPlistKey);
                                                  uVar2 = 0xe80000d7;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_MismatchedWatchKitAppBundleIDs);
                                                  uVar2 = 0xe80000d8;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitAppBundleIDNotPrefixed);
                                                  uVar2 = 0xe80000d9;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitAppInvalidUIDeviceFamily);
                                                  uVar2 = 0xe80000da;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitAppExtensionAttributesInvalidAppBundleID
                                                  );
                                                  uVar2 = 0xe80000c1;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_AppQuotaExceeded);
                                                    uVar2 = 0xe80000db;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&
                                                  cf_IntentsAppexMissingIntentsSupported);
                                                  uVar2 = 0xe80000dc;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_IntentsAppexIntentsRestrictedFormat);
                                                  uVar2 = 0xe80000dd;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_IntentsAppexIntentsRestrictedNotSubset);
                                                  uVar2 = 0xe80000de;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_IntentsAppexIntentsSupportedDuplicated);
                                                  uVar2 = 0xe80000df;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_IntentsAppexIntentsSupportedNotASubset);
                                                  uVar2 = 0xe80000e7;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitAppExtensionInDisallowedLocation);
                                                  uVar2 = 0xe80000e0;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitAppFrameworkInDisallowedLocation);
                                                  uVar2 = 0xe80000e1;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&cf_InvalidSinf);
                                                    uVar2 = 0xe80000e3;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = _CFEqual(lVar3,&
                                                  cf_MultipleMessagePayloadProviderExtensionsFound);
                                                  uVar2 = 0xe80000e4;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_MessagesStubAppMissingAppExtension);
                                                  uVar2 = 0xe80000e5;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_NonAllowedAppexTypeFoundInMessagesStubApp);
                                                  uVar2 = 0xe80000e6;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_TooManyAlternativeAppNames);
                                                  uVar2 = 0xe80000ef;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_UnsupportedWatchKitVersion);
                                                  uVar2 = 0xe80000f0;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchOnlyAppOnCompanion);
                                                  uVar2 = 0xe80000f2;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchOnlyAppHasCompanionAppBundleIdentifier);
                                                  uVar2 = 0xe80000f3;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchOnlyAppHasIncompatibleMinOS);
                                                  uVar2 = 0xe80000f4;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchOnlyAppContainerNotInstallable);
                                                  uVar2 = 0xe8000102;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchOnlyAndRunsIndependentlyNotAllowed);
                                                  uVar2 = 0xe8000103;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitExtensionlessAppWithWKExtension);
                                                  uVar2 = 0xe80000f6;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_WatchKitBothWKApplicationAndWKWatchKitAppKeys);
                                                  uVar2 = 0xe80000f7;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_ReplaceExtensionlessWatchKitAppWithExtensionBasedAppNotAllowed
                                                  );
                                                  uVar2 = 0xe8000100;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppClipMissingParentIdentifiersEntitlement);
                                                  uVar2 = 0xe80000f8;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppClipBundleIDNotPrefixed);
                                                  uVar2 = 0xe80000f9;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppClipHasDisallowedApplicationGroupEntitlement
                                                  );
                                                  uVar2 = 0xe80000fa;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppClipHasDisallowedKeychainAccessEntitlement);
                                                  uVar2 = 0xe80000fb;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppClipHasAtleastOneActivePlugin);
                                                  uVar2 = 0xe80000fc;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppClipHasAtLeastOneDisallowedActivePlugin);
                                                  uVar2 = 0xe8000116;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppClipHasEmbeddedWatchApp);
                                                  uVar2 = 0xe80000fd;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppClipBundleIDSuffixContainsPeriod);
                                                  uVar2 = 0xe80000fe;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppClipDoesNotHaveSingleParent);
                                                  uVar2 = 0xe80000ff;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppexBundleContainsClassOrStoryboard);
                                                  uVar2 = 0xe8000101;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppClipInstallationNotSupported);
                                                  uVar2 = 0xe8000104;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_DriverKitBundleIDNotPrefixed);
                                                  uVar2 = 0xe8000118;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_DriverKitBundleIDSuffixContainsPeriod);
                                                  uVar2 = 0xe8000119;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_DriverKitBundleMissingEntitlement);
                                                  uVar2 = 0xe800011a;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = _CFEqual(lVar3,&
                                                  cf_AppClipHasDriverKitBundle);
                                                  uVar2 = 0xe800011d;
                                                  if (cVar1 == '\0') {
                                                    uVar2 = __AddNewAMDError(lVar3);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uStack_28 = CONCAT44(uVar2,(undefined4)uStack_28);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"GOT AN ERROR: \"%@\" = 0x%08x",lVar3,uVar2);
    lVar3 = _CFDictionaryGetValue(param_1,&cf_ErrorDescription);
    if (lVar3 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Error details: %@",lVar3);
    }
    lVar3 = _CFDictionaryGetValue(param_1,&cf_ErrorDetail);
    if (lVar3 != 0) {
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFNumberGetTypeID();
      if (lVar4 == lVar5) {
        _CFNumberGetValue(lVar3,9,(long)&uStack_28 + 4);
        uVar2 = uStack_28._4_4_;
      }
    }
  }
  return uVar2;
}

