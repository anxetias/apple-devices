// rea decompile_all
// name: _convertLibAuthInstallErrorToString
// address: 0x128514
// body: available
// range: 0x128514-0x1286fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * _convertLibAuthInstallErrorToString(int param_1)

{
  char *pcVar1;
  
  if (param_1 < 0xc1c) {
    switch(param_1) {
    case 1:
      return "kAMAuthInstallErrorBadParameter";
    case 2:
      return "kAMAuthInstallErrorAllocation";
    case 3:
      return "kAMAuthInstallErrorConversion";
    case 4:
      return "kAMAuthInstallErrorFile";
    case 5:
      return "kAMAuthInstallErrorHash";
    case 6:
      return "kAMAuthInstallErrorCrypto";
    case 7:
      return "kAMAuthInstallErrorBadBuildIdentity";
    case 8:
      return "kAMAuthInstallErrorEntryNotFound";
    case 9:
      return "kAMAuthInstallErrorInvalidImg3Object";
    case 10:
      return "kAMAuthInstallErrorInvalidFlsObject";
    case 0xb:
      return "kAMAuthInstallErrorServerNotReachable";
    case 0xc:
      return "kAMAuthInstallErrorServerTimedOut";
    case 0xd:
      return "kAMAuthInstallErrorUnimplemented";
    case 0xe:
      return "kAMAuthInstallErrorInternal";
    case 0xf:
      return "kAMAuthInstallErrorInvalidBbfwFile";
    case 0x10:
      return "kAMAuthInstallErrorNetwork";
    case 0x11:
      return "kAMAuthInstallErrorBadResponse";
    case 0x12:
      return "kAMAuthInstallErrorFusingFailed";
    case 0x13:
      return "kAMAuthInstallErrorBBProvisioningFailed";
    case 0x14:
      return "kAMAuthInstallErrorAppleConnectNotFound";
    case 0x15:
      return "kAMAuthInstallErrorAppleConnectCanceled";
    case 0x16:
      return "kAMAuthInstallErrorAppleConnectAuthFailed";
    case 0x17:
      return "kAMAuthInstallErrorInvalidImg4Object";
    case 0x18:
      return "kAMAuthInstallErrorProvisioningAckFailed";
    case 0x19:
      return "kAMAuthInstallErrorUpdaterOperation";
    }
    if (param_1 == 99) {
      return "kAMAuthInstallErrorGeneric";
    }
    goto switchD_00128565_caseD_dae;
  }
  if (param_1 < 0xdac) {
    if (param_1 == 0xc1c) {
      return "kAMAuthInstallErrorServer_begin";
    }
    if (param_1 == 0xc61) {
      return "kAMAuthInstallTATSUApImg4SigningKeyNotFound";
    }
    if (param_1 == 0xc7a) {
      return "kAMAuthInstallTATSUDeclinedAuthorization";
    }
    goto switchD_00128565_caseD_dae;
  }
  switch(param_1) {
  case 0xdac:
    pcVar1 = "kAMAuthInstallErrorHTTPInternalServerError";
    break;
  case 0xdad:
    pcVar1 = "kAMAuthInstallErrorHTTPUnauthorized";
    break;
  case 0xdaf:
    pcVar1 = "kAMAuthInstallErrorHTTPForbidden";
    break;
  case 0xdb0:
    pcVar1 = "kAMAuthInstallErrorHTTPNotFound";
    break;
  case 0xdb3:
    pcVar1 = "kAMAuthInstallErrorHTTPProxyAuthNeeded";
    break;
  default:
    if (param_1 == 3999) {
      return "kAMAuthInstallErrorServer_end";
    }
  case 0xdae:
  case 0xdb1:
  case 0xdb2:
switchD_00128565_caseD_dae:
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

