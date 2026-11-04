// rea decompile_all
// name: _copyValueQueryResult
// address: 0xccec0
// body: available
// range: 0xccec0-0xccf4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _copyValueQueryResult(__AMRestoreModeDevice*, __CFString const*) */

undefined8 _copyValueQueryResult(__AMRestoreModeDevice *param_1,__CFString *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1[0x134] != (__AMRestoreModeDevice)0x0) {
    iVar1 = _AMRestoreModeDeviceConnectToPortInternal(param_1,0xf27e,0.0,4);
    if (-1 < iVar1) {
      uVar2 = _copyValueQueryResultUsingSocket(param_1,param_2,iVar1);
      _AMRLog(6,&cf_sock_3d__s,iVar1,"closed");
      _close(iVar1);
      return uVar2;
    }
    _AMRLog(3,&cf__s_unabletoconnecttodevice,"_copyValueQueryResult");
  }
  return 0;
}

