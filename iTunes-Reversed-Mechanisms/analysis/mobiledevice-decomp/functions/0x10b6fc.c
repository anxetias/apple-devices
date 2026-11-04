// rea decompile_all
// name: AMBootedOSDeviceProxy::GetLockdownUInt64WithDefault
// address: 0x10b6fc
// body: available
// range: 0x10b6fc-0x10b780 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMBootedOSDeviceProxy::GetLockdownUInt64WithDefault(__CFString const*, unsigned long long, bool)
    */

ulong AMBootedOSDeviceProxy::GetLockdownUInt64WithDefault
                (__CFString *param_1,ulonglong param_2,bool param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined7 in_register_00000011;
  ulong local_28;
  
  lVar3 = CopyLockdownValue(param_1,SUB81(param_2,0));
  local_28 = CONCAT71(in_register_00000011,param_3);
  if (lVar3 != 0) {
    local_28 = 0;
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFNumberGetTypeID();
    if (lVar4 == lVar5) {
      _CFNumberGetValue(lVar3,4,&local_28);
      uVar1 = local_28;
    }
    else {
      lVar5 = _CFBooleanGetTypeID();
      uVar1 = CONCAT71(in_register_00000011,param_3);
      if (lVar4 == lVar5) {
        bVar2 = _CFBooleanGetValue(lVar3);
        uVar1 = (ulong)bVar2;
      }
    }
    local_28 = uVar1;
    _CFRelease(lVar3);
  }
  return local_28;
}

