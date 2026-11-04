// rea decompile_all
// name: _BbfwReaderCopyFileData
// address: 0x2a30f2
// body: available
// range: 0x2a30f2-0x2a323f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a323b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _BbfwReaderCopyFileData(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStackY_4e0;
  undefined1 local_4c0 [56];
  undefined4 local_488;
  undefined4 uStack_484;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = _AMAuthInstallSupportCopyAllocator();
  pvVar3 = (void *)0x0;
  iVar1 = _amai_unzGetCurrentFileInfo(param_1,local_4c0,local_438,0x400,0,0,0,0);
  uStackY_4e0 = 0xf;
  if (iVar1 == 0) {
    pvVar3 = _malloc(CONCAT44(uStack_484,local_488));
    uStackY_4e0 = 2;
    if (pvVar3 != (void *)0x0) {
      iVar1 = _amai_unzOpenCurrentFile(param_1);
      if (iVar1 == 0) {
        iVar1 = _amai_unzReadCurrentFile(param_1,pvVar3,local_488);
        if (CONCAT44(uStack_484,local_488) != (long)iVar1) {
          uStackY_4e0 = 4;
          goto LAB_002a3237;
        }
        iVar1 = _amai_unzCloseCurrentFile(param_1);
        if (iVar1 == 0) {
          lVar4 = _CFDataCreateWithBytesNoCopy
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,pvVar3,
                             CONCAT44(uStack_484,local_488),uVar2);
          lVar6 = 0;
          if (lVar4 != 0) {
            uVar5 = _CFRetain(lVar4);
            *param_2 = uVar5;
            pvVar3 = (void *)0x0;
            uStackY_4e0 = 0;
            lVar6 = lVar4;
          }
          goto LAB_002a31ec;
        }
      }
      lVar6 = 0;
      uStackY_4e0 = 0xf;
      goto LAB_002a31ec;
    }
    pvVar3 = (void *)0x0;
  }
LAB_002a3237:
  lVar6 = 0;
LAB_002a31ec:
  _SafeRelease(lVar6);
  _SafeRelease(uVar2);
  _SafeFree(pvVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uStackY_4e0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

