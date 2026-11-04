// rea decompile_all
// name: _AMDErrorString
// address: 0x145329
// body: available
// range: 0x145329-0x1460cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * _AMDErrorString(int param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case -0x17ffffff:
    pcVar1 = "kAMDUndefinedError";
    break;
  case -0x17fffffe:
    pcVar1 = "kAMDBadHeaderError";
    break;
  case -0x17fffffd:
    pcVar1 = "kAMDNoResourcesError";
    break;
  case -0x17fffffc:
    pcVar1 = "kAMDReadError";
    break;
  case -0x17fffffb:
    pcVar1 = "kAMDWriteError";
    break;
  case -0x17fffffa:
    pcVar1 = "kAMDUnknownPacketError";
    break;
  case -0x17fffff9:
    pcVar1 = "kAMDInvalidArgumentError";
    break;
  case -0x17fffff8:
    pcVar1 = "kAMDNotFoundError";
    break;
  case -0x17fffff7:
    pcVar1 = "kAMDIsDirectoryError";
    break;
  case -0x17fffff6:
    pcVar1 = "kAMDPermissionError";
    break;
  case -0x17fffff5:
    pcVar1 = "kAMDNotConnectedError";
    break;
  case -0x17fffff4:
    pcVar1 = "kAMDTimeOutError";
    break;
  case -0x17fffff3:
    pcVar1 = "kAMDOverrunError";
    break;
  case -0x17fffff2:
    pcVar1 = "kAMDEOFError";
    break;
  case -0x17fffff1:
    pcVar1 = "kAMDUnsupportedError";
    break;
  case -0x17fffff0:
    pcVar1 = "kAMDFileExistsError";
    break;
  case -0x17ffffef:
    pcVar1 = "kAMDBusyError";
    break;
  case -0x17ffffee:
    pcVar1 = "kAMDCryptoError";
    break;
  case -0x17ffffed:
    pcVar1 = "kAMDInvalidResponseError";
    break;
  case -0x17ffffec:
    pcVar1 = "kAMDMissingKeyError";
    break;
  case -0x17ffffeb:
    pcVar1 = "kAMDMissingValueError";
    break;
  case -0x17ffffea:
    pcVar1 = "kAMDGetProhibitedError";
    break;
  case -0x17ffffe9:
    pcVar1 = "kAMDSetProhibitedError";
    break;
  case -0x17ffffe8:
    pcVar1 = "kAMDRemoveProhibitedError";
    break;
  case -0x17ffffe7:
    pcVar1 = "kAMDImmutableValueError";
    break;
  case -0x17ffffe6:
    pcVar1 = "kAMDPasswordProtectedError";
    break;
  case -0x17ffffe5:
    pcVar1 = "kAMDMissingHostIDError";
    break;
  case -0x17ffffe4:
    pcVar1 = "kAMDInvalidHostIDError";
    break;
  case -0x17ffffe3:
    pcVar1 = "kAMDSessionActiveError";
    break;
  case -0x17ffffe2:
    pcVar1 = "kAMDSessionInactiveError";
    break;
  case -0x17ffffe1:
    pcVar1 = "kAMDMissingSessionIDError";
    break;
  case -0x17ffffe0:
    pcVar1 = "kAMDInvalidSessionIDError";
    break;
  case -0x17ffffdf:
    pcVar1 = "kAMDMissingServiceError";
    break;
  case -0x17ffffde:
    pcVar1 = "kAMDInvalidServiceError";
    break;
  case -0x17ffffdd:
    pcVar1 = "kAMDInvalidCheckinError";
    break;
  case -0x17ffffdc:
    pcVar1 = "kAMDCheckinTimeoutError";
    break;
  case -0x17ffffdb:
    pcVar1 = "kAMDMissingPairRecordError";
    break;
  case -0x17ffffda:
    pcVar1 = "kAMDInvalidActivationRecordError";
    break;
  case -0x17ffffd9:
    pcVar1 = "kAMDMissingActivationRecordError";
    break;
  case -0x17ffffd8:
    pcVar1 = "kAMDWrongDroidError";
    break;
  case -0x17ffffd7:
    pcVar1 = "kAMDSUVerificationError";
    break;
  case -0x17ffffd6:
    pcVar1 = "kAMDSUPatchError";
    break;
  case -0x17ffffd5:
    pcVar1 = "kAMDSUFirmwareError";
    break;
  case -0x17ffffd4:
    pcVar1 = "kAMDProvisioningProfileNotValid";
    break;
  case -0x17ffffd3:
    pcVar1 = "kAMDSendMessageError";
    break;
  case -0x17ffffd2:
    pcVar1 = "kAMDReceiveMessageError";
    break;
  case -0x17ffffd1:
    pcVar1 = "kAMDMissingOptionsError";
    break;
  case -0x17ffffd0:
    pcVar1 = "kAMDMissingImageTypeError";
    break;
  case -0x17ffffcf:
    pcVar1 = "kAMDDigestFailedError";
    break;
  case -0x17ffffce:
    pcVar1 = "kAMDStartServiceError";
    break;
  case -0x17ffffcd:
    pcVar1 = "kAMDInvalidDiskImageError";
    break;
  case -0x17ffffcc:
    pcVar1 = "kAMDMissingDigestError";
    break;
  case -0x17ffffcb:
    pcVar1 = "kAMDMuxError";
    break;
  case -0x17ffffca:
    pcVar1 = "kAMDApplicationAlreadyInstalledError";
    break;
  case -0x17ffffc9:
    pcVar1 = "kAMDApplicationMoveFailedError";
    break;
  case -0x17ffffc8:
    pcVar1 = "kAMDApplicationSINFCaptureFailedError";
    break;
  case -0x17ffffc7:
    pcVar1 = "kAMDApplicationSandboxFailedError";
    break;
  case -0x17ffffc6:
    pcVar1 = "kAMDApplicationVerificationFailedError";
    break;
  case -0x17ffffc5:
    pcVar1 = "kAMDArchiveDestructionFailedError";
    break;
  case -0x17ffffc4:
    pcVar1 = "kAMDBundleVerificationFailedError";
    break;
  case -0x17ffffc3:
    pcVar1 = "kAMDCarrierBundleCopyFailedError";
    break;
  case -0x17ffffc2:
    pcVar1 = "kAMDCarrierBundleDirectoryCreationFailedError";
    break;
  case -0x17ffffc1:
    pcVar1 = "kAMDCarrierBundleMissingSupportedSIMsError";
    break;
  case -0x17ffffc0:
    pcVar1 = "kAMDCommCenterNotificationFailedError";
    break;
  case -0x17ffffbf:
    pcVar1 = "kAMDContainerCreationFailedError";
    break;
  case -0x17ffffbe:
    pcVar1 = "kAMDContainerP0wnFailedError";
    break;
  case -0x17ffffbd:
    pcVar1 = "kAMDContainerRemovalFailedError";
    break;
  case -0x17ffffbc:
    pcVar1 = "kAMDEmbeddedProfileInstallFailedError";
    break;
  case -0x17ffffbb:
    pcVar1 = "kAMDErrorError";
    break;
  case -0x17ffffba:
    pcVar1 = "kAMDExecutableTwiddleFailedError";
    break;
  case -0x17ffffb9:
    pcVar1 = "kAMDExistenceCheckFailedError";
    break;
  case -0x17ffffb8:
    pcVar1 = "kAMDInstallMapUpdateFailedError";
    break;
  case -0x17ffffb7:
    pcVar1 = "kAMDManifestCaptureFailedError";
    break;
  case -0x17ffffb6:
    pcVar1 = "kAMDMapGenerationFailedError";
    break;
  case -0x17ffffb5:
    pcVar1 = "kAMDMissingBundleExecutableError";
    break;
  case -0x17ffffb4:
    pcVar1 = "kAMDMissingBundleIdentifierError";
    break;
  case -0x17ffffb3:
    pcVar1 = "kAMDMissingBundlePathError";
    break;
  case -0x17ffffb2:
    pcVar1 = "kAMDMissingContainerError";
    break;
  case -0x17ffffb1:
    pcVar1 = "kAMDNotificationFailedError";
    break;
  case -0x17ffffb0:
    pcVar1 = "kAMDPackageExtractionFailedError";
    break;
  case -0x17ffffaf:
    pcVar1 = "kAMDPackageInspectionFailedError";
    break;
  case -0x17ffffae:
    pcVar1 = "kAMDPackageMoveFailedError";
    break;
  case -0x17ffffad:
    pcVar1 = "kAMDPathConversionFailedError";
    break;
  case -0x17ffffac:
    pcVar1 = "kAMDRestoreContainerFailedError";
    break;
  case -0x17ffffab:
    pcVar1 = "kAMDSeatbeltProfileRemovalFailedError";
    break;
  case -0x17ffffaa:
    pcVar1 = "kAMDStageCreationFailedError";
    break;
  case -0x17ffffa9:
    pcVar1 = "kAMDSymlinkFailedError";
    break;
  case -0x17ffffa8:
    pcVar1 = "kAMDiTunesArtworkCaptureFailedError";
    break;
  case -0x17ffffa7:
    pcVar1 = "kAMDiTunesMetadataCaptureFailedError";
    break;
  case -0x17ffffa6:
    pcVar1 = "kAMDAlreadyArchivedError";
    break;
  case -0x17ffffa5:
    pcVar1 = "kAMDServiceLimitError";
    break;
  case -0x17ffffa4:
    pcVar1 = "kAMDInvalidPairRecordError";
    break;
  case -0x17ffffa3:
    pcVar1 = "kAMDServiceProhibitedError";
    break;
  case -0x17ffffa2:
    pcVar1 = "kAMDCheckinSetupFailedError";
    break;
  case -0x17ffffa1:
    pcVar1 = "kAMDCheckinConnectionFailedError";
    break;
  case -0x17ffffa0:
    pcVar1 = "kAMDCheckinReceiveFailedError";
    break;
  case -0x17ffff9f:
    pcVar1 = "kAMDCheckinResponseFailedError";
    break;
  case -0x17ffff9e:
    pcVar1 = "kAMDCheckinSendFailedError";
    break;
  case -0x17ffff9d:
    pcVar1 = "kAMDMuxCreateListenerError";
    break;
  case -0x17ffff9c:
    pcVar1 = "kAMDMuxGetListenerError";
    break;
  case -0x17ffff9b:
    pcVar1 = "kAMDMuxConnectError";
    break;
  case -0x17ffff9a:
    pcVar1 = "kAMDUnknownCommandError";
    break;
  case -0x17ffff99:
    pcVar1 = "kAMDAPIInternalError";
    break;
  case -0x17ffff98:
    pcVar1 = "kAMDSavePairRecordFailedError";
    break;
  case -0x17ffff97:
    pcVar1 = "kAMDCheckinOutOfMemoryError";
    break;
  case -0x17ffff96:
    pcVar1 = "kAMDDeviceTooNewError";
    break;
  case -0x17ffff95:
    pcVar1 = "kAMDDeviceRefNoGood";
    break;
  case -0x17ffff94:
    pcVar1 = "kAMDCannotTranslateError";
    break;
  case -0x17ffff93:
    pcVar1 = "kAMDMobileImageMounterMissingImageSignature";
    break;
  case -0x17ffff92:
    pcVar1 = "kAMDMobileImageMounterResponseCreationFailed";
    break;
  case -0x17ffff91:
    pcVar1 = "kAMDMobileImageMounterMissingImageType";
    break;
  case -0x17ffff90:
    pcVar1 = "kAMDMobileImageMounterMissingImagePath";
    break;
  case -0x17ffff8f:
    pcVar1 = "kAMDMobileImageMounterImageMapLoadFailed";
    break;
  case -0x17ffff8e:
    pcVar1 = "kAMDMobileImageMounterAlreadyMounted";
    break;
  case -0x17ffff8d:
    pcVar1 = "kAMDMobileImageMounterImageMoveFailed";
    break;
  case -0x17ffff8c:
    pcVar1 = "kAMDMobileImageMounterMountPathMissing";
    break;
  case -0x17ffff8b:
    pcVar1 = "kAMDMobileImageMounterMountPathNotEmpty";
    break;
  case -0x17ffff8a:
    pcVar1 = "kAMDMobileImageMounterImageMountFailed";
    break;
  case -0x17ffff89:
    pcVar1 = "kAMDMobileImageMounterTrustCacheLoadFailed";
    break;
  case -0x17ffff88:
    pcVar1 = "kAMDMobileImageMounterDigestFailed";
    break;
  case -0x17ffff87:
    pcVar1 = "kAMDMobileImageMounterDigestCreationFailed";
    break;
  case -0x17ffff86:
    pcVar1 = "kAMDMobileImageMounterImageVerificationFailed";
    break;
  case -0x17ffff85:
    pcVar1 = "kAMDMobileImageMounterImageInfoCreationFailed";
    break;
  case -0x17ffff84:
    pcVar1 = "kAMDMobileImageMounterImageMapStoreFailed";
    break;
  case -0x17ffff83:
    pcVar1 = "kAMDBonjourSetupError";
    break;
  case -0x17ffff82:
    pcVar1 = "kAMDDeviceOSVersionTooLow";
    break;
  case -0x17ffff81:
    pcVar1 = "kAMDNoWifiSyncSupportError";
    break;
  case -0x17ffff80:
    pcVar1 = "kAMDDeviceFamilyNotSupported";
    break;
  case -0x17ffff7f:
    pcVar1 = "kAMDEscrowLockedError";
    break;
  case -0x17ffff7e:
    pcVar1 = "kAMDPairingProhibitedError";
    break;
  case -0x17ffff7d:
    pcVar1 = "kAMDProhibitedBySupervision";
    break;
  case -0x17ffff7c:
    pcVar1 = "kAMDDeviceDisconnectedError";
    break;
  case -0x17ffff7b:
    pcVar1 = "kAMDTooBigError";
    break;
  case -0x17ffff7a:
    pcVar1 = "kAMDPackagePatchFailedError";
    break;
  case -0x17ffff79:
    pcVar1 = "kAMDIncorrectArchitectureError";
    break;
  case -0x17ffff78:
    pcVar1 = "kAMDPluginCopyFailedError";
    break;
  case -0x17ffff77:
    pcVar1 = "kAMDBreadcrumbFailedError";
    break;
  case -0x17ffff76:
    pcVar1 = "kAMDBreadcrumbUnlockError";
    break;
  case -0x17ffff75:
    pcVar1 = "kAMDGeoJSONCaptureFailedError";
    break;
  case -0x17ffff74:
    pcVar1 = "kAMDNewsstandArtworkCaptureFailedError";
    break;
  case -0x17ffff73:
    pcVar1 = "kAMDMissingCommandError";
    break;
  case -0x17ffff72:
    pcVar1 = "kAMDNotEntitledError";
    break;
  case -0x17ffff71:
    pcVar1 = "kAMDMissingPackagePathError";
    break;
  case -0x17ffff70:
    pcVar1 = "kAMDMissingContainerPathError";
    break;
  case -0x17ffff6f:
    pcVar1 = "kAMDMissingApplicationIdentifierError";
    break;
  case -0x17ffff6e:
    pcVar1 = "kAMDMissingAttributeValueError";
    break;
  case -0x17ffff6d:
    pcVar1 = "kAMDLookupFailedError";
    break;
  case -0x17ffff6c:
    pcVar1 = "kAMDDictCreationFailedError";
    break;
  case -0x17ffff6b:
    pcVar1 = "kAMDUserDeniedPairingError";
    break;
  case -0x17ffff6a:
    pcVar1 = "kAMDPairingDialogResponsePendingError";
    break;
  case -0x17ffff69:
    pcVar1 = "kAMDInstallProhibitedError";
    break;
  case -0x17ffff68:
    pcVar1 = "kAMDUninstallProhibitedError";
    break;
  case -0x17ffff67:
    pcVar1 = "kAMDFMiPProtectedError";
    break;
  case -0x17ffff66:
    pcVar1 = "kAMDMCProtected";
    break;
  case -0x17ffff65:
    pcVar1 = "kAMDMCChallengeRequired";
    break;
  case -0x17ffff64:
    pcVar1 = "kAMDMissingBundleVersionError";
    break;
  case -0x17ffff63:
    pcVar1 = "kAMDAppBlacklistedError";
    break;
  case -0x17ffff62:
    pcVar1 = 
    "This app contains an app extension with an illegal bundle identifier. App extension bundle identifiers must have a prefix consisting of their containing application\'s bundle identifier followed by a \'.\'."
    ;
    break;
  case -0x17ffff61:
    pcVar1 = 
    "If an app extension defines the XPCService key in its Info.plist, it must have a dictionary value."
    ;
    break;
  case -0x17ffff60:
    pcVar1 = 
    "App extensions must define the NSExtension key with a dictionary value in their Info.plist.";
    break;
  case -0x17ffff5f:
    pcVar1 = 
    "If an app extension defines the CFBundlePackageType key in its Info.plist, it must have the value \"XPC!\"."
    ;
    break;
  case -0x17ffff5e:
    pcVar1 = 
    "App extensions must define either NSExtensionMainStoryboard or NSExtensionPrincipalClass keys in the NSExtension dictionary in their Info.plist."
    ;
    break;
  case -0x17ffff5d:
    pcVar1 = 
    "If an app extension defines the NSExtensionContextClass key in the NSExtension dictionary in its Info.plist, it must have a string value containing one or more characters."
    ;
    break;
  case -0x17ffff5c:
    pcVar1 = 
    "If an app extension defines the NSExtensionContextHostClass key in the NSExtension dictionary in its Info.plist, it must have a string value containing one or more characters."
    ;
    break;
  case -0x17ffff5b:
    pcVar1 = 
    "If an app extension defines the NSExtensionViewControllerHostClass key in the NSExtension dictionary in its Info.plist, it must have a string value containing one or more characters."
    ;
    break;
  case -0x17ffff5a:
    pcVar1 = 
    "This app contains an app extension that does not define the NSExtensionPointIdentifier key in its Info.plist. This key must have a reverse-DNS format string value."
    ;
    break;
  case -0x17ffff59:
    pcVar1 = 
    "This app contains an app extension that does not define the NSExtensionPointIdentifier key in its Info.plist with a valid reverse-DNS format string value."
    ;
    break;
  case -0x17ffff58:
    pcVar1 = 
    "If an app extension defines the NSExtensionAttributes key in the NSExtension dictionary in its Info.plist, it must have a dictionary value."
    ;
    break;
  case -0x17ffff57:
    pcVar1 = 
    "If an app extension defines the NSExtensionPointName key in the NSExtensionAttributes dictionary in the NSExtension dictionary in its Info.plist, it must have a string value containing one or more characters."
    ;
    break;
  case -0x17ffff56:
    pcVar1 = 
    "If an app extension defines the NSExtensionPointVersion key in the NSExtensionAttributes dictionary in the NSExtension dictionary in its Info.plist, it must have a string value containing one or more characters."
    ;
    break;
  case -0x17ffff55:
    pcVar1 = 
    "This app or a bundle it contains does not define the CFBundleName key in its Info.plist with a string value containing one or more characters."
    ;
    break;
  case -0x17ffff54:
    pcVar1 = 
    "This app or a bundle it contains does not define the CFBundleDisplayName key in its Info.plist with a string value containing one or more characters."
    ;
    break;
  case -0x17ffff53:
    pcVar1 = 
    "This app or a bundle it contains defines the CFBundleShortVersionStringKey key in its Info.plist with a non-string value or a zero-length string value."
    ;
    break;
  case -0x17ffff52:
    pcVar1 = 
    "This app or a bundle it contains defines the RunLoopType key in the XPCService dictionary in its Info.plist with a non-string value or a zero-length string value."
    ;
    break;
  case -0x17ffff51:
    pcVar1 = 
    "This app or a bundle it contains defines the ServiceType key in the XPCService dictionary in its Info.plist with a non-string value or a zero-length string value."
    ;
    break;
  case -0x17ffff50:
    pcVar1 = 
    "This application or a bundle it contains has the same bundle identifier as this application or another bundle that it contains. Bundle identifiers must be unique."
    ;
    break;
  case -0x17ffff4f:
    pcVar1 = 
    "This app contains an app extension that specifies an extension point identifier that is not supported on this version of iOS for the value of the NSExtensionPointIdentifier key in its Info.plist."
    ;
    break;
  case -0x17ffff4e:
    pcVar1 = 
    "This app contains multiple app extensions that are file providers. Apps are only allowed to contain at most a single file provider app extension."
    ;
    break;
  case -0x17ffff4d:
    pcVar1 = "kMobileHouseArrestMissingCommand";
    break;
  case -0x17ffff4c:
    pcVar1 = "kMobileHouseArrestUnknownCommand";
    break;
  case -0x17ffff4b:
    pcVar1 = "kMobileHouseArrestMissingIdentifier";
    break;
  case -0x17ffff4a:
    pcVar1 = "kMobileHouseArrestDictionaryFailed";
    break;
  case -0x17ffff49:
    pcVar1 = "kMobileHouseArrestInstallationLookupFailed";
    break;
  case -0x17ffff48:
    pcVar1 = "kMobileHouseArrestApplicationLookupFailed";
    break;
  case -0x17ffff47:
    pcVar1 = "kMobileHouseArrestMissingContainer";
    break;
  case -0x17ffff45:
    pcVar1 = "kMobileHouseArrestPathConversionFailed";
    break;
  case -0x17ffff44:
    pcVar1 = "kMobileHouseArrestPathMissing";
    break;
  case -0x17ffff43:
    pcVar1 = "kMobileHouseArrestInvalidPath";
    break;
  case -0x17ffff42:
    pcVar1 = "kAMDMismatchedApplicationIdentifierEntitlementError";
    break;
  case -0x17ffff41:
    pcVar1 = "kAMDInvalidSymlinkError";
    break;
  case -0x17ffff40:
    pcVar1 = "kAMDNoSpaceError";
    break;
  case -0x17ffff3f:
    pcVar1 = 
    "The WatchKit app extension must have, in its Info.plist\'s NSExtension dictionary\'s NSExtensionAttributes dictionary, the key WKAppBundleIdentifier with a value equal to the associated WatchKit app\'s bundle identifier."
    ;
    break;
  case -0x17ffff3e:
    pcVar1 = "This app is not a valid AppleTV Stub App";
    break;
  case -0x17ffff3d:
    pcVar1 = "kAMDBundleiTunesMetadataVersionMismatchError";
    break;
  case -0x17ffff3c:
    pcVar1 = "kAMDInvalidiTunesMetadataPlistError";
    break;
  case -0x17ffff3b:
    pcVar1 = "kAMDMismatchedBundleIDSigningIdentifierError";
    break;
  case -0x17ffff3a:
    pcVar1 = 
    "This app contains multiple WatchKit app extensions. Only a single WatchKit extension is allowed."
    ;
    break;
  case -0x17ffff39:
    pcVar1 = "A WatchKit app within this app is not a valid bundle.";
    break;
  case -0x17ffff38:
    pcVar1 = "kAMDDeviceNotSupportedByThinningError";
    break;
  case -0x17ffff37:
    pcVar1 = 
    "The UISupportedDevices key in this app\'s Info.plist does not specify a valid set of supported devices."
    ;
    break;
  case -0x17ffff36:
    pcVar1 = 
    "This app contains an app extension with an illegal bundle identifier. App extension bundle identifiers must have a prefix consisting of their containing application\'s bundle identifier followed by a \'.\', with no further \'.\' characters after the prefix."
    ;
    break;
  case -0x17ffff35:
    pcVar1 = "kAMDAppexBundleIDConflictWithOtherIdentifierError";
    break;
  case -0x17ffff34:
    pcVar1 = "kAMDBundleIDConflictWithOtherIdentifierError";
    break;
  case -0x17ffff33:
    pcVar1 = 
    "This app contains multiple WatchKit 1.0 apps. Only a single WatchKit 1.0 app is allowed.";
    break;
  case -0x17ffff32:
    pcVar1 = 
    "This app contains multiple WatchKit 2.0 apps. Only a single WatchKit 2.0 app is allowed.";
    break;
  case -0x17ffff31:
    pcVar1 = "The WatchKit app has an invalid stub executable.";
    break;
  case -0x17ffff30:
    pcVar1 = 
    "The WatchKit app has multiple app extensions. Only a single WatchKit extension is allowed in a WatchKit app, and only if this is a WatchKit 2.0 app."
    ;
    break;
  case -0x17ffff2f:
    pcVar1 = 
    "The WatchKit 2.0 app contains non-WatchKit app extensions. Only WatchKit app extensions are allowed in WatchKit apps."
    ;
    break;
  case -0x17ffff2e:
    pcVar1 = 
    "The WatchKit app has one or more embedded frameworks. Frameworks are only allowed in WatchKit app extensions in WatchKit 2.0 apps."
    ;
    break;
  case -0x17ffff2d:
    pcVar1 = "This app contains a WatchKit 1.0 app with app extensions. This is not allowed.";
    break;
  case -0x17ffff2c:
    pcVar1 = 
    "This app contains a WatchKit 2.0 app without an app extension. WatchKit 2.0 apps must contain a WatchKit app extension."
    ;
    break;
  case -0x17ffff2b:
    pcVar1 = 
    "The WatchKit app\'s Info.plist must have a WKCompanionAppBundleIdentifier key set to the bundle identifier of the companion app."
    ;
    break;
  case -0x17ffff2a:
    pcVar1 = "The WatchKit app\'s Info.plist contains a non-string key.";
    break;
  case -0x17ffff29:
    pcVar1 = 
    "The WatchKit app\'s Info.plist contains a key that is not in the allowlist of allowed keys for a WatchKit app."
    ;
    break;
  case -0x17ffff28:
    pcVar1 = 
    "The WatchKit 1.0 and a WatchKit 2.0 apps within this app must have have the same bundle identifier."
    ;
    break;
  case -0x17ffff27:
    pcVar1 = 
    "This app contains a WatchKit app with an invalid bundle identifier. The bundle identifier of a WatchKit app must have a prefix consisting of the companion app\'s bundle identifier, followed by a \'.\'."
    ;
    break;
  case -0x17ffff26:
    pcVar1 = 
    "This app contains a WatchKit app where the UIDeviceFamily key in its Info.plist does not specify the value 4 to indicate that it\'s compatible with the Apple Watch device type."
    ;
    break;
  case -0x17ffff25:
    pcVar1 = 
    "The device is out of storage for apps. Please remove some apps from the device and try again.";
    break;
  case -0x17ffff24:
    pcVar1 = 
    "This app or an app that it contains has a Siri Intents app extension that is missing the IntentsSupported array in the NSExtensionAttributes dictionary in the NSExtension dictionary in its Info.plist."
    ;
    break;
  case -0x17ffff23:
    pcVar1 = 
    "This app or an app that it contains has a Siri Intents app extension that does not correctly define the IntentsRestrictedWhileLocked key in the NSExtensionAttributes dictionary in the NSExtension dictionary in its Info.plist. The key\'s value must be an array of strings."
    ;
    break;
  case -0x17ffff22:
    pcVar1 = 
    "This app or an app that it contains has a Siri Intents app extension that declares values in its IntentsRestrictedWhileLocked key\'s array value that are not in its IntentsSupported key\'s array value (in the NSExtensionAttributes dictionary in the NSExtension dictionary in its Info.plist)."
    ;
    break;
  case -0x17ffff21:
    pcVar1 = 
    "This app or an app that it contains declares multiple Siri Intents app extensions that declare one or more of the same values in the IntentsSupported array in the NSExtensionAttributes dictionary in the NSExtension dictionary in their Info.plist. IntentsSupported must be distinct among a given Siri Intents extension type within an app."
    ;
    break;
  case -0x17ffff20:
    pcVar1 = 
    "The WatchKit 2.0 app, which expects to be compatible with watchOS versions earlier than 3.0, contains a non-WatchKit extension in a location that\'s not compatible with watchOS versions earlier than 3.0."
    ;
    break;
  case -0x17ffff1f:
    pcVar1 = 
    "The WatchKit 2.0 app, which expects to be compatible with watchOS versions earlier than 3.0, contains a framework in a location that\'s not compatible with watchOS versions earlier than 3.0."
    ;
    break;
  case -0x17ffff1e:
    pcVar1 = "kAMDMobileImageMounterDeviceLocked";
    break;
  case -0x17ffff1d:
    pcVar1 = "kAMDInvalidSINFError";
    break;
  case -0x17ffff1c:
    pcVar1 = "Multiple iMessage app extensions were found in this app. Only one is allowed.";
    break;
  case -0x17ffff1b:
    pcVar1 = "This iMessage application is missing its required iMessage app extension.";
    break;
  case -0x17ffff1a:
    pcVar1 = 
    "This iMessage application contains an app extension type other than an iMessage app extension. iMessage applications may only contain one iMessage app extension and may not contain other types of app extensions."
    ;
    break;
  case -0x17ffff19:
    pcVar1 = 
    "This app contains a WatchKit app with one or more Siri Intents app extensions that declare IntentsSupported that are not declared in any of the companion app\'s Siri Intents app extensions. WatchKit Siri Intents extensions\' IntentsSupported values must be a subset of the companion app\'s Siri Intents extensions\' IntentsSupported values."
    ;
    break;
  case -0x17ffff18:
    pcVar1 = "kAMDRequireCUPairingCodeError";
    break;
  case -0x17ffff17:
    pcVar1 = "kAMDRequireCUPairingBackoffError";
    break;
  case -0x17ffff16:
    pcVar1 = "kAMDCUPairingError";
    break;
  case -0x17ffff15:
    pcVar1 = "kAMDCUPairingContinueError";
    break;
  case -0x17ffff14:
    pcVar1 = "kAMDCUPairingResetError";
    break;
  case -0x17ffff13:
    pcVar1 = "kAMDRequireCUPairingError";
    break;
  case -0x17ffff12:
    pcVar1 = "kAMDPasswordRequiredError";
    break;
  case -0x17ffff11:
    pcVar1 = 
    "This app\'s Info.plist has too many items in the array for the key INAlternativeAppNames. A maximum of three is allowed."
    ;
    break;
  case -0x17ffff10:
    pcVar1 = 
    "The version of WatchKit used by this app is no longer supported on this version of watchOS.";
    break;
  case -0x17ffff0f:
    pcVar1 = "kAMDInternalError";
    break;
  case -0x17ffff0e:
    pcVar1 = 
    "This app contains a watch-only watch app. Watch-only apps cannot be embedded within a companion app."
    ;
    break;
  case -0x17ffff0d:
    pcVar1 = 
    "This app is watch-only so it may not specify the key WKCompanionAppBundleIdentifier in its Info.plist."
    ;
    break;
  case -0x17ffff0c:
    pcVar1 = "Watch-only apps must have a MinimumOSVersion of 6.0 or later.";
    break;
  case -0x17ffff0b:
    pcVar1 = "kAMDRemoteCommunicationFailed";
    break;
  case -0x17ffff0a:
    pcVar1 = 
    "This WatchKit app contains the WKApplication key in its Info.plist, but also has a WatchKit Extension. Apps with the WKApplication key should not contain a WatchKit Extension."
    ;
    break;
  case -0x17ffff09:
    pcVar1 = "This WatchKit app has both WKApplication and WKWatchKitApp Info.plist keys.";
    break;
  case -0x17ffff08:
    pcVar1 = 
    "This app clip is missing the \"com.apple.developer.parent-application-identifiers\" entitlement."
    ;
    break;
  case -0x17ffff07:
    pcVar1 = 
    "This app clip\'s bundle identifier is not prefixed by its parent app\'s bundle identifier.";
    break;
  case -0x17ffff06:
    pcVar1 = 
    "This app clip has the \"com.apple.security.application-groups\" entitlement, which is not allowed for app clips."
    ;
    break;
  case -0x17ffff05:
    pcVar1 = 
    "This app clip has the \"keychain-access-groups\" entitlement, which is not allowed for app clips."
    ;
    break;
  case -0x17ffff04:
    pcVar1 = 
    "This app clip has at least one active plugin. App clips aren\'t allowed to contain any active plugins."
    ;
    break;
  case -0x17ffff03:
    pcVar1 = 
    "This app clip contains an embedded watch app. App clips aren\'t allowed to contain embedded watch apps."
    ;
    break;
  case -0x17ffff02:
    pcVar1 = 
    "This app clip has an illegal bundle identifier. An app clip\'s bundle identifier must have a prefix consisting of its parent application\'s bundle identifier followed by a \'.\', with no further \'.\' characters after the prefix."
    ;
    break;
  case -0x17ffff01:
    pcVar1 = 
    "An app clip must have exactly one item in the \"com.apple.developer.parent-application-identifiers\" entitlement\'s array value, and that item must be equal to the parent app\'s \"application-identifier\" entitlement\'s value."
    ;
    break;
  case -0x17ffff00:
    pcVar1 = 
    "This WatchKit app must be deleted before it can be replaced with an app that contains a WatchKit extension."
    ;
    break;
  case -0x17fffeff:
    pcVar1 = 
    "This app contains an app extension that defines either a NSExtensionMainStoryboard or NSExtensionPrincipalClass key, which is not allowed for that type of app extension."
    ;
    break;
  case -0x17fffefe:
    pcVar1 = 
    "This app has the ITSWatchOnlyContainer key set in its Info.plist, which identifies it as a shell app surrounding a Watch-only app; these are not installable."
    ;
    break;
  case -0x17fffefd:
    pcVar1 = 
    "This app defines both WKWatchOnly and WKRunsIndependentlyOfCompanionApp in its Info.plist and/or its WatchKit extension\'s Info.plist. Having both defined is not allowed."
    ;
    break;
  case -0x17fffefc:
    pcVar1 = "App clip installation is not supported on this platform.";
    break;
  case -0x17fffefb:
    pcVar1 = "kAMDMobileImageMounterTATSUDeclinedAuthorization";
    break;
  case -0x17fffefa:
    pcVar1 = "kAMDMobileImageMounterCredentialsFailed";
    break;
  case -0x17fffef9:
    pcVar1 = "kAMDMobileImageMounterNetworkError";
    break;
  case -0x17fffef8:
    pcVar1 = "kAMDMobileImageMounterNetworkUnauthorizedError";
    break;
  case -0x17fffef7:
    pcVar1 = "kAMDMobileImageMounterNetworkForbiddenError";
    break;
  case -0x17fffef6:
    pcVar1 = "kAMDMobileImageMounterNetworkNotFoundError";
    break;
  case -0x17fffef5:
    pcVar1 = "kAMDMobileImageMounterNetworkProxyAuthNeededError";
    break;
  case -0x17fffef4:
    pcVar1 = "kAMDMobileImageMounterNetworkTimedOutError";
    break;
  case -0x17fffef3:
    pcVar1 = "kAMDMobileImageMounterNetworkInternalServerError";
    break;
  case -0x17fffef2:
    pcVar1 = "kAMDMobileImageMounterNetworkNotReachableError";
    break;
  case -0x17fffef1:
    pcVar1 = "kAMDMobileImageMounterPersonalizedBundleMissingVariantError";
    break;
  case -0x17fffef0:
    pcVar1 = "kAMDMobileImageMounterPersonalizedBundleHostMountError";
    break;
  case -0x17fffeef:
    pcVar1 = "kAMDMobileImageMounterPersonalizedVariantAlreadyMountedError";
    break;
  case -0x17fffeee:
    pcVar1 = "kAMDRemoteConnectError";
    break;
  case -0x17fffeed:
    pcVar1 = "kAMDRemoteServicesUnsupportedByHostError";
    break;
  case -0x17fffeec:
    pcVar1 = "kAMDMobileImageMounterPersonalizedBundleManifestError";
    break;
  case -0x17fffeeb:
    pcVar1 = "kAMDMobileImageMounterDevicePropertyQueryFailure";
    break;
  case -0x17fffeea:
    pcVar1 = 
    "This app clip has at least one disallowed active plugin. App clips are only allowed to contain certain active plugins."
    ;
    break;
  case -0x17fffee9:
    pcVar1 = "kAMDMobileImageMounterTATSUInvalidResponse";
    break;
  case -0x17fffee8:
  case -0x17fffee7:
    pcVar1 = 
    "This app contains a DriverKit bundle which has an illegal bundle identifier. A DriverKit bundle identifier must have a prefix consisting of its parent application\'s bundle identifier followed by a \'.\', with no further \'.\' characters after the prefix."
    ;
    break;
  case -0x17fffee6:
    pcVar1 = 
    "This app contains a DriverKit bundle which is missing the \"com.apple.developer.driverkit\" entitlement."
    ;
    break;
  case -0x17fffee5:
    pcVar1 = 
    "App extensions must define the EXAppExtensionAttributes key with a dictionary value in their Info.plist."
    ;
    break;
  case -0x17fffee4:
    pcVar1 = "kAMDMobileImageMounterDiskImageRestricted";
    break;
  case -0x17fffee3:
    pcVar1 = 
    "This app clip contains a DriverKit bundle. App clips aren\'t allowed to contain DriverKit bundles."
    ;
    break;
  case -0x17fffee2:
    pcVar1 = 
    "App extensions implemented using the Objective-C ExtensionKit interfaces must define the EXPrincipalClass key with a string value in the NSExtensionAttributes dictionary in their Info.plist."
    ;
    break;
  case -0x17fffee1:
    pcVar1 = 
    "If an app extension defines the EXPrincipalClass key in the NSExtensionAttributes dictionary in its Info.plist, it must have a string value containing one or more characters."
    ;
    break;
  case -0x17fffee0:
    pcVar1 = 
    "This app contains an ExtensionKit-based app extension with an unreadable bundle executable.";
    break;
  case -0x17fffedf:
    pcVar1 = 
    "App extensions implemented using the Swift ExtensionKit interfaces require a __swift5_entry section in the bundle executable. This section must not be present in extensions implemented using the Objective-C ExtensionKit interfaces."
    ;
    break;
  case -0x17fffedc:
    pcVar1 = "kAMDMobileImageMounterExistingTransferInProgress";
    break;
  case -0x17fffedb:
    pcVar1 = "kAMDMobileImageMounterTATSUInvalidRequest";
    break;
  case -0x17fffeda:
    pcVar1 = "kAMDMobileImageMounterInternalAuthorizationFailure";
    break;
  default:
    if (param_1 == 0) {
      return "kAMDSuccess";
    }
  case -0x17ffff46:
  case -0x17fffede:
  case -0x17fffedd:
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

