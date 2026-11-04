// rea decompile_all
// name: _handleImageDataRequest
// address: 0xd65f0
// body: available
// range: 0xd65f0-0xd6874 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd66cd to 0xca89e _handleStreamedImageFileRequest (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xd6870 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleImageDataRequest(AMRestoreMuxedDeviceMessage*, __CFString const*) */

ulong _handleImageDataRequest(AMRestoreMuxedDeviceMessage *param_1,__CFString *param_2)

{
  long *plVar1;
  __AMRestoreModeDevice *p_Var2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  __CFString *p_Var7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int extraout_EDX;
  char *pcVar12;
  bool bVar13;
  double dVar14;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  plVar1 = *(long **)(param_1 + 0x10);
  p_Var2 = (__AMRestoreModeDevice *)plVar1[2];
  lVar6 = _CFDictionaryGetValue(plVar1[3]);
  if (lVar6 == 0) {
    _AMRLog(3,&cf_receivedimagedatarequestbuthavenoimagetorestore);
    uVar9 = 10;
  }
  else {
    p_Var7 = (__CFString *)_CFDictionaryGetValue(lVar6,&cf_ImageFile);
    lVar6 = _CFDictionaryGetValue(lVar6,&cf_ImagePassword);
    if (p_Var7 != (__CFString *)0x0) {
      lVar8 = _CFStringGetLength(p_Var7);
      if (lVar8 != 0) {
        cVar3 = _imageDataRequestUsesStreamedFile
                          ((__CFDictionary *)plVar1[3],*(__CFDictionary **)(param_1 + 8));
        if (cVar3 != '\0') {
          _AMRLog(6,&cf_Handlingsynchronous__imagedatarequestforencryptedimage__,param_2,p_Var7);
          if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
            uVar9 = _handleStreamedImageFileRequest(param_1,p_Var7,'\0');
            return uVar9;
          }
          goto LAB_000d6870;
        }
        lVar8 = _CFDictionaryGetValue
                          (*(undefined8 *)(param_1 + 8),&cf_WillSendImageVerificationProgress);
        bVar13 = true;
        if (lVar8 != 0) {
          lVar10 = _CFGetTypeID(lVar8);
          lVar11 = _CFBooleanGetTypeID();
          if (lVar10 == lVar11) {
            cVar3 = _CFBooleanGetValue(lVar8);
            bVar13 = cVar3 == '\0';
          }
        }
        _AMRestoreModeDeviceProgressAsync(p_Var2,0xd,0,(__CFString *)0x0);
        dVar14 = (double)_asrConnectTimeout((__CFDictionary *)plVar1[3]);
        iVar4 = _AMRestoreModeDeviceConnectToPortInternal(p_Var2,0x3039,dVar14,9);
        if (iVar4 == -1) {
          uVar9 = 2;
        }
        else {
          pcVar12 = local_438;
          ___bzero(pcVar12,0x400);
          if (lVar6 == 0) {
            pcVar12 = (char *)0x0;
          }
          else {
            _CFStringGetCString(lVar6,pcVar12,0x400,0x8000100);
          }
          (**(code **)(*plVar1 + 0x10))(plVar1);
          uVar5 = _runASRServer(p_Var2,iVar4,p_Var7,pcVar12,(__CFDictionary *)plVar1[3],'\0');
          (**(code **)(*plVar1 + 0x18))(plVar1);
          _AMRestoreCloseTransferSocket(iVar4,uVar5);
          uVar5 = _processASRResult((__AMRestoreModeDevice *)plVar1[3],
                                    (__CFDictionary *)(ulong)uVar5,extraout_EDX);
          uVar9 = (ulong)uVar5;
          if ((bool)(uVar5 == 0 & bVar13)) {
            _AMRestoreModeDeviceProgressAsync(p_Var2,0xe,0,(__CFString *)0x0);
          }
        }
        goto LAB_000d6709;
      }
    }
    _AMRLog(3,&cf_missingimagepathfor__,param_2);
    uVar9 = 1;
  }
LAB_000d6709:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar9;
  }
LAB_000d6870:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

