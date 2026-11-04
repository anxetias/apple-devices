// rea decompile_all
// name: _AMSupportReadChunks
// address: 0x417f
// body: available
// range: 0x417f-0x438c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4388 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportReadChunks
          (long param_1,long param_2,uint param_3,code *param_4,undefined8 param_5,
          undefined8 param_6)

{
  char cVar1;
  int iVar2;
  FILE *pFVar3;
  void *pvVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_40 = 0;
  if (param_1 == 0) {
    pcVar10 = &cf__s_srcURLisNULL;
LAB_00004298:
    uVar7 = 1;
  }
  else {
    if (param_2 == 0) {
      pcVar10 = &cf__s_flagsisNULL;
      goto LAB_00004298;
    }
    if (param_4 == (code *)0x0) {
      pcVar10 = &cf__s_callbackisNULL;
      goto LAB_00004298;
    }
    sVar8 = 0x100000;
    if (param_3 != 0) {
      sVar8 = (size_t)param_3;
    }
    pFVar3 = (FILE *)_AMSupportPlatformOpenFileStreamWithURL();
    if (pFVar3 != (FILE *)0x0) {
      pvVar4 = _malloc(sVar8);
      if (pvVar4 == (void *)0x0) {
        uVar9 = 0;
        _AMSupportCreateErrorInternal
                  (param_6,&cf_AMSupportErrorDomain,2,0,&cf__s_failedtoallocatechunkbuffer,
                   "AMSupportReadChunks");
      }
      else {
        do {
          iVar2 = _feof(pFVar3);
          if ((iVar2 == -1) || (sVar5 = _fread(pvVar4,1,sVar8,pFVar3), sVar5 == 0)) {
            iVar2 = _ferror(pFVar3);
            if (iVar2 == 0) {
              uVar9 = 1;
              goto LAB_00004365;
            }
            pcVar10 = &cf__s_failedtoreadfromfile_d;
            lVar6 = 0;
            goto LAB_0000432f;
          }
          cVar1 = (*param_4)(pvVar4,sVar5,param_5,&local_40);
        } while (cVar1 != '\0');
        pcVar10 = &cf__s_callbackfailed;
        lVar6 = local_40;
LAB_0000432f:
        uVar9 = 0;
        _AMSupportCreateErrorInternal
                  (param_6,&cf_AMSupportErrorDomain,4,lVar6,pcVar10,"AMSupportReadChunks");
LAB_00004365:
        _free(pvVar4);
        if (local_40 != 0) {
          _CFRelease();
        }
      }
      _fclose(pFVar3);
      goto LAB_000042b2;
    }
    pcVar10 = &cf__s_failedtoopenfile__;
    uVar7 = 4;
  }
  uVar9 = 0;
  _AMSupportCreateErrorInternal
            (param_6,&cf_AMSupportErrorDomain,uVar7,0,pcVar10,"AMSupportReadChunks");
LAB_000042b2:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

