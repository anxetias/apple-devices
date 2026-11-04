// rea decompile_all
// name: _AMAuthInstallApImg4DecodeRestoreInfo
// address: 0x279043
// body: available
// range: 0x279043-0x279391 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x27938d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApImg4DecodeRestoreInfo(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_2b0;
  undefined1 local_2a0 [16];
  undefined1 local_290 [8];
  undefined1 local_288 [16];
  undefined1 local_278 [8];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  long local_250;
  long local_248;
  long local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  long *local_220;
  ulong local_218;
  long local_210;
  long local_208;
  undefined1 local_200 [440];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_2b0 = 1;
  if ((param_1 != 0) && (*param_2 != 0)) {
    uVar3 = _CFDataGetBytePtr();
    uVar1 = _CFDataGetLength(param_1);
    iVar2 = _Img4DecodeInit(uVar3,uVar1,local_200);
    if (iVar2 == 0) {
      iVar2 = _DERDecodeSeqContentInit(local_48,local_260);
      if (iVar2 == 0) {
        local_228 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        local_250 = *(long *)PTR__kCFBooleanFalse_00441108;
        local_248 = *(long *)PTR__kCFBooleanTrue_00441110;
        local_220 = param_2;
        do {
          while (iVar2 = _DERDecodeSeqNext(local_260,local_290), iVar2 == 0) {
            iVar2 = _DERDecodeItem(local_288,local_278);
            if ((((iVar2 == 0) &&
                 (iVar2 = _DERDecodeSeqContentInit(local_270,local_2a0), iVar2 == 0)) &&
                (iVar2 = _DERDecodeSeqNext(local_2a0,&local_240), iVar2 == 0)) &&
               (local_240 == 0x16)) {
              lVar4 = _CFStringCreateWithBytes(local_228,local_238,local_230,0x8000100,0);
              if ((lVar4 != 0) &&
                 (local_208 = lVar4, iVar2 = _DERDecodeSeqNext(local_2a0,&local_240),
                 lVar4 = local_208, iVar2 == 0)) {
                if (local_240 == 1) {
                  local_218 = local_218 & 0xffffffffffffff00;
                  iVar2 = _DERParseBoolean(&local_238,&local_218);
                  if (iVar2 != 0) {
LAB_00279352:
                    uStack_2b0 = 0x17;
                    goto LAB_00279330;
                  }
                  lVar4 = local_248;
                  if ((char)local_218 != '\0') {
                    lVar4 = local_250;
                  }
                  if (lVar4 != 0) {
                    lVar5 = *local_220;
LAB_00279313:
                    _CFDictionarySetValue(lVar5,local_208,lVar4);
                  }
                }
                else if (local_240 == 2) {
                  local_218 = 0;
                  iVar2 = _DERParseInteger64(&local_238,&local_218);
                  if (iVar2 != 0) goto LAB_00279352;
                  lVar4 = _CFNumberCreate(local_228,4,&local_218);
                  if (lVar4 != 0) {
                    lVar5 = *local_220;
                    goto LAB_00279313;
                  }
                }
                else {
                  if (local_240 == 4) {
                    lVar4 = _CFDataCreate(local_228,local_238,local_230);
                  }
                  else {
                    if (local_240 != 0x16) goto LAB_00279324;
                    lVar4 = _CFStringCreateWithBytes(local_228,local_238,local_230,0x8000100,0);
                  }
                  if (lVar4 != 0) {
                    local_210 = lVar4;
                    _CFDictionarySetValue(*local_220,local_208,lVar4);
                  }
                }
                _SafeRelease();
                lVar4 = local_208;
              }
LAB_00279324:
              _SafeRelease(lVar4);
            }
          }
        } while (iVar2 != 1);
        uStack_2b0 = 0;
        goto LAB_00279330;
      }
      _AMSupportLogInternal
                (3,"AMAuthInstallApImg4DecodeRestoreInfo",
                 "can\'t parse top-level restoreinfo sequence");
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallApImg4DecodeRestoreInfo",
                        "Img4DecodeInit img4 decode failed.");
    }
    uStack_2b0 = 99;
  }
LAB_00279330:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uStack_2b0;
}

