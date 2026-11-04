// rea decompile_all
// name: _AMAuthInstallBasebandVinylStitchFirmware
// address: 0x283232
// body: available
// range: 0x283232-0x28350f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x28350b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandVinylStitchFirmware
              (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  long local_88;
  long local_80;
  undefined1 local_78;
  long local_70;
  long local_68;
  char local_59;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar3 = 1;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_00283429;
  lVar5 = param_3;
  if (param_3 == 0) {
    lVar5 = param_2;
  }
  local_78 = param_3 == 0 && param_2 != 0;
  lVar4 = 0;
  local_88 = param_1;
  local_80 = param_5;
  if ((param_5 == 0) || (param_4 == 0)) {
LAB_002834e7:
    uVar7 = 0;
LAB_002833f3:
    pcVar8 = (cfstringStruct *)0x0;
  }
  else {
    uVar7 = 0;
    pcVar8 = (cfstringStruct *)0x0;
    local_70 = param_5;
    local_68 = param_4;
    if (lVar5 != 0) {
      iVar3 = _BbfwReaderStart(lVar5,__VinylBBFWReaderCB,&local_88);
      if (iVar3 != 0) {
        lVar4 = 0;
        _AMAuthInstallLog(3,"_VinylStitchInternal","Failed to copy unperso\'d Vinyl files");
        goto LAB_002834e7;
      }
      if (*(long *)(*(long *)(param_1 + 0x30) + 0xa0) == 0) {
        lVar4 = 0;
        uVar7 = 0;
        pcVar8 = (cfstringStruct *)0x0;
LAB_00283465:
        lVar5 = local_70;
        iVar3 = __VinylPopulateDstEntry
                          (pcVar8,&cf__update_main_ticket_der,local_68,&cf_EuiccMainTicket,local_70)
        ;
        if (iVar3 == 0) {
          iVar3 = __VinylPopulateDstEntry
                            (pcVar8,&cf__update_gold_ticket_der,local_68,&cf_EuiccGoldTicket,lVar5);
        }
        goto LAB_002833f6;
      }
      local_59 = '\0';
      iVar3 = _AMAuthInstallVinylIsLegacyChipId(param_1);
      if (iVar3 != 0) {
LAB_002834dd:
        lVar4 = 0;
        goto LAB_002834e7;
      }
      if (local_59 != '\0') {
        pcVar8 = &cf_vinyl;
        lVar4 = 0;
        uVar7 = 0;
        goto LAB_00283465;
      }
      if (*(long *)(*(long *)(param_1 + 0x30) + 0x98) == 0) {
        iVar3 = 8;
        goto LAB_002834dd;
      }
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar4 = _CFDataCreateMutableCopy(uVar1,0);
      if (lVar4 == 0) {
        lVar4 = 0;
        iVar3 = 2;
        goto LAB_002834e7;
      }
      if ((*(long *)(*(long *)(param_1 + 0x30) + 0xa8) == 0) ||
         (cVar2 = _AMAuthInstallVinylCheckVinylFwLdrVerLegacy(), cVar2 != '\0')) {
        pcVar8 = (cfstringStruct *)__CopyHexStringFromData(uVar1,lVar4);
        uVar7 = 0;
      }
      else {
        uVar7 = _CFDataGetBytePtr(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xa8));
        lVar5 = _CFDataGetLength(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xa8));
        _CFDataAppendBytes(lVar4,uVar7,lVar5 + -1);
        uVar7 = _CFDataGetBytePtr(lVar4);
        uVar6 = _CFDataGetLength(lVar4);
        iVar3 = _AMSupportDigestSha256(uVar7,uVar6,local_58);
        if (iVar3 != 0) {
          _AMAuthInstallLog(3,"_VinylStitchInternal","failed to compute digest");
          iVar3 = 5;
          goto LAB_002834e7;
        }
        uVar7 = _CFDataCreate(uVar1,local_58,0x20);
        pcVar8 = (cfstringStruct *)__CopyHexStringFromData(uVar1,uVar7);
      }
      if (pcVar8 != (cfstringStruct *)0x0) goto LAB_00283465;
      iVar3 = 2;
      goto LAB_002833f3;
    }
  }
LAB_002833f6:
  _AMAuthInstallLog(6,"_VinylStitchInternal","%d",iVar3);
  _SafeRelease(lVar4);
  _SafeRelease(pcVar8);
  _SafeRelease(uVar7);
LAB_00283429:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

