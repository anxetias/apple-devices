// rea decompile_all
// name: _AMRRestoreInitializeTADNotificationsExternal
// address: 0xc8cdf
// body: available
// range: 0xc8cdf-0xc8d69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRRestoreInitializeTADNotificationsExternal(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  
  __AMRestoreLoadAndCacheIOUSBLibBundle();
  iVar1 = __AMRestoreGetNumberOFDeviceIDsToMatch();
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      puVar3 = (undefined2 *)__AMRestoreGetDeviceIDToMatchAPOnly(iVar4);
      if ((puVar3 != (undefined2 *)0x0) &&
         (local_40 = param_1, local_38 = param_2,
         iVar2 = _libDFU_startDeviceDiscoveryForVIDPID(*puVar3,puVar3[1],&local_40), iVar2 != 0)) {
        _AMRLog(3,&cf__External_UnabletosetupTADdeviceconnectednotification_0x_x,iVar2);
        return iVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return 0;
}

