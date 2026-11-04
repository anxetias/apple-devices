// rea decompile_all
// name: SERestoreInfo::IcefallDeviceInfo::IcefallDeviceInfo
// address: 0x24d7d8
// body: available
// range: 0x24d7d8-0x24da80 inclusive
// range: 0x24da83-0x24da87 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24da7c to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24da83 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallDeviceInfo::IcefallDeviceInfo(__CFDictionary const* const&) */

void __thiscall
SERestoreInfo::IcefallDeviceInfo::IcefallDeviceInfo
          (IcefallDeviceInfo *this,__CFDictionary **param_1)

{
  SEWrongDeviceInfo *this_00;
  long lVar1;
  IcefallDeviceInfo *local_150 [3];
  cfstringStruct *local_138;
  ulong local_130;
  IcefallDeviceInfo *local_128;
  uint local_120 [2];
  cfstringStruct *local_118;
  undefined8 local_110;
  IcefallDeviceInfo *local_108;
  undefined4 local_100;
  cfstringStruct *local_f8;
  undefined8 local_f0;
  IcefallDeviceInfo *local_e8;
  undefined4 local_e0;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  IcefallDeviceInfo *local_c8;
  undefined4 local_c0;
  cfstringStruct *local_b8;
  undefined8 local_b0;
  IcefallDeviceInfo *local_a8;
  undefined4 local_a0;
  cfstringStruct *local_98;
  undefined8 local_90;
  IcefallDeviceInfo *local_88;
  undefined4 local_80;
  cfstringStruct *local_78;
  undefined8 local_70;
  IcefallDeviceInfo *local_68;
  undefined4 local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  IcefallDeviceInfo *local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  *(undefined ***)this = &PTR__IcefallDeviceInfo_0044f000;
  local_150[0] = this + 0x28;
  local_150[1] = this + 0x40;
  local_150[2] = this + 0x58;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  local_138 = &cf_SE_ChipID;
  local_130 = _CFNumberGetTypeID();
  local_120[0] = 4;
  local_118 = &cf_SE_FactoryMode;
  local_128 = this + 0x90;
  local_110 = _CFBooleanGetTypeID();
  local_108 = this + 0x99;
  local_100 = 1;
  local_f8 = &cf_SE_ID;
  local_f0 = _CFDataGetTypeID();
  local_e0 = 0x18;
  local_d8 = &cf_SE_Nonce;
  local_e8 = this + 0x10;
  local_d0 = _CFDataGetTypeID();
  local_c8 = local_150[0];
  local_c0 = 0x14;
  local_b8 = &cf_SE_RootKeyIdentifier;
  local_b0 = _CFDataGetTypeID();
  local_a8 = local_150[1];
  local_a0 = 0x20;
  local_98 = &cf_SE_OsKeysIdentifier;
  local_90 = _CFDataGetTypeID();
  local_88 = local_150[2];
  local_80 = 0x20;
  local_78 = &cf_SE_BLFWKeysIdentifier;
  local_70 = _CFDataGetTypeID();
  local_60 = 0x20;
  local_58 = &cf_SE_IsDev;
  local_68 = this + 0x70;
  local_50 = _CFBooleanGetTypeID();
  local_48 = this + 10;
  local_40 = 1;
  *(undefined4 *)(this + 0x94) = 6;
  *(undefined2 *)(this + 0x98) = 7;
  lVar1 = 0x18;
  do {
    getValueFromCFDict(*param_1,*(__CFString **)((long)local_150 + lVar1),
                       *(ulong *)((long)local_150 + lVar1 + 8),
                       *(void **)((long)local_150 + lVar1 + 0x10),
                       *(uint *)((long)&local_138 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x118);
  if (*(int *)(this + 0x90) == 0x20211) {
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  this_00 = (SEWrongDeviceInfo *)___cxa_allocate_exception(0x48);
  SEWrongDeviceInfo::SEWrongDeviceInfo(this_00);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this_00,&SEWrongDeviceInfo::typeinfo,SEWrongDeviceInfo::~SEWrongDeviceInfo);
}

