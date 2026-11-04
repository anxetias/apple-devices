// rea decompile_all
// name: __AMRUSBDeviceCopyNonceWithTag
// address: 0xe16a8
// body: available
// range: 0xe16a8-0xe18e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe18e3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRUSBDeviceCopyNonceWithTag(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  *param_4 = 0;
  if (param_2 == 0) {
    _AMRLog(3,&cf_deviceinfomustbeprovidedtoquerynonce);
    iVar2 = 1;
  }
  else if ((*(char *)(param_2 + 0x5f) == '\0') || ((*(uint *)(param_2 + 0x10) & 6) == 0)) {
    _AMRLog(7,&cf_devicesoftwaredoesnotsupportnoncegeneration);
    iVar2 = 0x30;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    iVar2 = __AMRUSBDeviceSendDeviceRequest(param_1,0x409,1,0,0,6,0x301,0x100,&local_138);
    if (iVar2 == 0) {
      local_140 = 0;
      if (local_138._1_1_ == '\x03') {
        lVar3 = _CFStringCreateWithBytes
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,(long)&local_138 + 2,
                           (byte)local_138 - 2,0x100,0);
        if (lVar3 == 0) {
          _AMRLog(3,&cf_nonceconversionfailure);
          iVar2 = 0x1f;
        }
        else {
          iVar2 = _copyKeyValuePairsFromIBootString(lVar3,&local_140);
          uVar1 = local_140;
          if (iVar2 == 0) {
            lVar4 = _CFDictionaryGetValue(local_140,param_3);
            *param_4 = lVar4;
            if (lVar4 == 0) {
              _AMRLog(7,&cf___tagnotfound,param_3);
              iVar2 = 6;
            }
            else {
              _CFRetain(lVar4);
              iVar2 = 0;
            }
            _CFRelease(uVar1);
          }
          _CFRelease(lVar3);
        }
      }
      else {
        _AMRLog(3,&cf_noncestringdescriptorhasunexpectedtype_d);
        iVar2 = 0x3b;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

