// rea decompile_all
// name: _AMRestoreReverseProxyConnect
// address: 0xd1179
// body: available
// range: 0xd1179-0xd1207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMRestoreReverseProxyConnect(RPSocksProxy*, unsigned short, void const*) */

long _AMRestoreReverseProxyConnect(RPSocksProxy *param_1,ushort param_2,void *param_3)

{
  int iVar1;
  __AMRestoreModeDevice *p_Var2;
  long lVar3;
  long lVar4;
  
  p_Var2 = (__AMRestoreModeDevice *)_CFDictionaryGetValue(param_3,&cf_device);
  lVar3 = _CFDictionaryGetValue(param_3,&cf_connections);
  lVar4 = 0;
  iVar1 = _AMRestoreModeDeviceConnectToPortInternal(p_Var2,param_2,0.0,0);
  if (iVar1 != -1) {
    lVar4 = _RPSocksProxyCreateConnectionWithSocket(param_1,iVar1);
    if (lVar4 != 0 && lVar3 != 0) {
      _CFArrayAppendValue(lVar3,lVar4);
    }
  }
  return lVar4;
}

