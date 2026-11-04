// rea decompile_all
// name: _AMAuthInstallApImg4CopyPayloadVersionProperty
// address: 0x1a0ab3
// body: available
// range: 0x1a0ab3-0x1a0d4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a0d4a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4CopyPayloadVersionProperty
              (undefined8 param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long *local_d0;
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
  local_d8 = 0;
  local_e0 = 0;
  if ((param_2 == 0) || (param_4 == (long *)0x0)) {
    iVar2 = 1;
    lVar5 = 0;
    lVar4 = 0;
    lVar1 = 0;
    if (param_4 == (long *)0x0) goto LAB_001a0c7b;
    goto LAB_001a0c73;
  }
  local_d0 = param_4;
  iVar2 = _AMAuthInstallApImg4CopyPayload(param_1,param_2,&local_d8);
  if (iVar2 == 0) {
    local_108 = _CFDataGetBytePtr(local_d8);
    local_100 = _CFDataGetLength(local_d8);
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    iVar2 = _DERImg4DecodePayload(&local_108);
    if (iVar2 != 0) {
      _AMAuthInstallLog(3,"AMAuthInstallApImg4CopyPayloadVersionProperty",
                        "failed to decode img4 payload, error:%d",iVar2);
      iVar2 = 0x17;
      goto LAB_001a0d10;
    }
    lVar4 = _AMSupportCopyDataFromAsciiEncodedHex(param_1,local_a8,uStack_a0);
    if (lVar4 == 0) {
      iVar2 = 3;
      goto LAB_001a0d10;
    }
    lVar5 = _CFDataCreateMutableCopy(param_1,0,lVar4);
    iVar2 = 2;
    lVar1 = lVar4;
    if (lVar5 == 0) {
      lVar5 = 0;
      param_4 = local_d0;
      goto LAB_001a0c73;
    }
    local_f8 = _CFDataGetMutableBytePtr(lVar5);
    local_f0 = _CFDataGetLength(lVar5);
    if (param_3 == 1) {
      uVar7 = 0x74626d73;
    }
    else {
      if (param_3 != 2) {
        _AMAuthInstallLog(3,"AMAuthInstallApImg4CopyPayloadVersionProperty",
                          "unsupported property type: %d\n",param_3);
        iVar2 = 1;
        param_4 = local_d0;
        goto LAB_001a0c73;
      }
      uVar7 = 0x74626d72;
    }
    iVar3 = _Img4DecodeGetPayloadVersionPropertyString
                      (&local_f8,uVar7 | 0xe000000000000000,&local_e0,&local_e8);
    if (iVar3 != 0) {
      _AMAuthInstallLog(3,"AMAuthInstallApImg4CopyPayloadVersionProperty",
                        "failed to parse version property: %d, error:%d",uVar7,iVar3);
      iVar2 = 0x17;
      param_4 = local_d0;
      goto LAB_001a0c73;
    }
    lVar6 = _AMSupportCopyDataFromAsciiEncodedHex(param_1,local_e0,local_e8);
    param_4 = local_d0;
    if (lVar6 == 0) goto LAB_001a0c73;
    iVar2 = 0;
  }
  else {
LAB_001a0d10:
    lVar5 = 0;
    param_4 = local_d0;
    lVar1 = 0;
LAB_001a0c73:
    lVar4 = lVar1;
    lVar6 = 0;
  }
  *param_4 = lVar6;
LAB_001a0c7b:
  _SafeRelease(lVar5);
  _SafeRelease(lVar4);
  _SafeRelease(local_d8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

