// rea decompile_all
// name: SERestoreInfo::P73BaseDeviceInfo::P73BaseDeviceInfo
// address: 0x24c22c
// body: available
// range: 0x24c22c-0x24c3ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24c3e6 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeviceInfo::P73BaseDeviceInfo(__CFDictionary const* const&) */

void __thiscall
SERestoreInfo::P73BaseDeviceInfo::P73BaseDeviceInfo
          (P73BaseDeviceInfo *this,__CFDictionary **param_1)

{
  long lVar1;
  P73BaseDeviceInfo *apPStack_f0 [3];
  cfstringStruct *local_d8;
  ulong local_d0;
  P73BaseDeviceInfo *local_c8;
  uint local_c0 [2];
  cfstringStruct *local_b8;
  undefined8 local_b0;
  P73BaseDeviceInfo *local_a8;
  undefined4 local_a0;
  cfstringStruct *local_98;
  undefined8 local_90;
  P73BaseDeviceInfo *local_88;
  undefined4 local_80;
  cfstringStruct *local_78;
  undefined8 local_70;
  P73BaseDeviceInfo *local_68;
  undefined4 local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  P73BaseDeviceInfo *local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  *(undefined ***)this = &PTR__P73BaseDeviceInfo_0044eec8;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  apPStack_f0[2] = this + 0x40;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  local_d8 = &cf_SE_ChipID;
  apPStack_f0[0] = (P73BaseDeviceInfo *)0x24c2c4;
  apPStack_f0[1] = this + 0x20;
  local_d0 = _CFNumberGetTypeID();
  local_c8 = this + 0x38;
  local_c0[0] = 4;
  local_b8 = &cf_SE_ID;
  apPStack_f0[0] = (P73BaseDeviceInfo *)0x24c2f6;
  local_b0 = _CFDataGetTypeID();
  local_a0 = 0x18;
  local_98 = &cf_SE_Nonce;
  apPStack_f0[0] = (P73BaseDeviceInfo *)0x24c324;
  local_a8 = this + 0x20;
  local_90 = _CFDataGetTypeID();
  local_88 = apPStack_f0[2];
  local_80 = 0x14;
  local_78 = &cf_SE_RootKeyIdentifier;
  apPStack_f0[0] = (P73BaseDeviceInfo *)0x24c350;
  local_70 = _CFDataGetTypeID();
  local_60 = 0x20;
  local_58 = &cf_SE_OSUPubKeyID;
  apPStack_f0[0] = (P73BaseDeviceInfo *)0x24c372;
  local_68 = this + 0x58;
  local_50 = _CFDataGetTypeID();
  local_40 = 0x20;
  apPStack_f0[0] = (P73BaseDeviceInfo *)0x24c389;
  local_48 = this + 0x70;
  init(this);
  lVar1 = 0x18;
  do {
    apPStack_f0[0] = (P73BaseDeviceInfo *)0x24c3b7;
    getValueFromCFDict(*param_1,*(__CFString **)((long)apPStack_f0 + lVar1),
                       *(ulong *)((long)apPStack_f0 + lVar1 + 8),
                       *(void **)((long)apPStack_f0 + lVar1 + 0x10),
                       *(uint *)((long)&local_d8 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0xb8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  apPStack_f0[0] = (P73BaseDeviceInfo *)&UNK_0024c3eb;
  ___stack_chk_fail();
}

