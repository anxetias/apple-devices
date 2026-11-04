// rea decompile_all
// name: _AFCOperationCreatePacketHeaderDictionary
// address: 0xb87c6
// body: available
// range: 0xb87c6-0xb8922 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb891e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AFCOperationCreatePacketHeaderDictionary(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_98 [6];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  cfstringStruct *local_58;
  cfstringStruct *pcStack_50;
  cfstringStruct *local_48;
  cfstringStruct *pcStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar2 = *(long *)(param_1 + 0x58);
  uVar1 = _CFGetAllocator();
  local_48 = &cf_PacketType;
  pcStack_40 = &cf_PacketData;
  local_58 = &cf_AFCHeaderLength;
  pcStack_50 = &cf_PacketID;
  local_68 = 0x457cd0;
  uStack_64 = 0;
  uStack_60 = 0x457cf0;
  uStack_5c = 0;
  _AFCLockLock(*(undefined8 *)(param_1 + 0xf8));
  local_98[0] = _CFNumberCreate(uVar1,4,lVar2);
  local_98[1] = _CFNumberCreate(uVar1,4,lVar2 + 8);
  local_98[2] = _CFNumberCreate(uVar1,4,lVar2 + 0x10);
  local_98[3] = _CFNumberCreate(uVar1,4,lVar2 + 0x18);
  local_98[4] = _CFNumberCreate(uVar1,4,lVar2 + 0x20);
  local_98[5] = _CFDataCreate(uVar1,lVar2,*(undefined8 *)(lVar2 + 0x10));
  _AFCLockUnlock(*(undefined8 *)(param_1 + 0xf8));
  uVar1 = _CFGetAllocator(param_1);
  uVar1 = _CFDictionaryCreate(uVar1,&local_68,local_98,6,PTR__kCFTypeDictionaryKeyCallBacks_004411b0
                              ,PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  lVar2 = 0;
  do {
    _CFRelease(local_98[lVar2]);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 6);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

