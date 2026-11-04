// rea decompile_all
// name: _handleWaitMessage
// address: 0xd5f36
// body: available
// range: 0xd5f36-0xd6042 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleWaitMessage(AMRestoreMuxedDeviceMessage*) */

void _handleWaitMessage(AMRestoreMuxedDeviceMessage *param_1)

{
  __AMRestoreModeDevice *p_Var1;
  ulong in_RAX;
  __CFString *p_Var2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_38;
  
  p_Var1 = *(__AMRestoreModeDevice **)(*(long *)(param_1 + 0x10) + 0x10);
  local_38 = in_RAX;
  p_Var2 = (__CFString *)_CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_AsyncContextUUID);
  if (p_Var2 != (__CFString *)0x0) {
    _pthread_mutex_lock((pthread_mutex_t *)(p_Var1 + 0x1c8));
    lVar3 = _CFDictionaryGetValue(*(undefined8 *)(p_Var1 + 0x38),p_Var2);
    _CFRetain(p_Var2);
    if (*(long *)(p_Var1 + 0x40) != 0) {
      _CFRelease();
    }
    *(__CFString **)(p_Var1 + 0x40) = p_Var2;
    _pthread_mutex_unlock((pthread_mutex_t *)(p_Var1 + 0x1c8));
    if (lVar3 != 0) {
      lVar4 = _CFDictionaryGetValue(lVar3,&cf_OPS);
      iVar6 = 0;
      if (lVar4 != 0) {
        local_38 = local_38 & 0xffffffff;
        _CFNumberGetValue(lVar4,9,(long)&local_38 + 4);
        iVar6 = local_38._4_4_;
      }
      lVar3 = _CFDictionaryGetValue(lVar3,&cf_PROGRESS);
      iVar5 = 0;
      if (lVar3 != 0) {
        local_38 = local_38 & 0xffffffff00000000;
        _CFNumberGetValue(lVar3,9,&local_38);
        iVar5 = (int)local_38;
      }
      _AMRestoreModeDeviceProgressAsync(p_Var1,iVar6,iVar5,p_Var2);
    }
  }
  return;
}

