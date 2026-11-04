// rea decompile_all
// name: _AMSupportCreateDigest
// address: 0x3edd
// body: available
// range: 0x3edd-0x417e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x417a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMSupportCreateDigest(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  void *local_48;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_40 = 0;
  local_48 = (void *)0x0;
  if (param_1 == 0) {
    pcVar9 = &cf__s_srcURLisNULL;
LAB_00003f97:
    uVar6 = 1;
LAB_00003fa6:
    _AMSupportCreateErrorInternal
              (param_4,&cf_AMSupportErrorDomain,uVar6,0,pcVar9,"AMSupportCreateDigest");
    lVar4 = 0;
  }
  else {
    if (param_3 == (undefined8 *)0x0) {
      pcVar9 = &cf__s_digestInfoisNULL;
      goto LAB_00003f97;
    }
    lVar4 = _CFDataCreateMutable(0,*param_3);
    if (lVar4 == 0) {
      pcVar9 = &cf__s_failedtoallocatedigest;
      uVar6 = 2;
      goto LAB_00003fa6;
    }
    _CFDataSetLength(lVar4,*param_3);
    iVar3 = _AMSupportDigestInitContext(param_3,&local_48);
    if (iVar3 == 0) {
      puVar5 = _malloc(0x10);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = param_3;
        puVar5[1] = local_48;
        cVar2 = _AMSupportReadChunks(param_1,"rb",param_2,__digestChunks,puVar5,&local_40);
        pvVar1 = local_48;
        if (cVar2 == '\0') {
          pcVar9 = &cf__s_failedtoreadfileinchunks;
          iVar3 = 4;
          lVar7 = local_40;
        }
        else {
          uVar6 = _CFDataGetMutableBytePtr(lVar4);
          iVar3 = _AMSupportDigestFinal(param_3,pvVar1,uVar6);
          if (iVar3 == 0) {
            lVar7 = _CFDataGetLength(lVar4);
            if (lVar7 == 0) {
              pcVar9 = &cf__s_failedtocreatedigest;
              iVar3 = 3;
            }
            else {
              lVar8 = _CFDataCreateCopy(0,lVar4);
              if (lVar8 != 0) goto LAB_00003fb7;
              pcVar9 = &cf__s_failedtocopydigest;
              iVar3 = 2;
            }
          }
          else {
            pcVar9 = &cf__s_failedtofinalizedigest;
          }
          lVar7 = 0;
        }
        lVar8 = 0;
        _AMSupportCreateErrorInternal
                  (param_4,&cf_AMSupportErrorDomain,iVar3,lVar7,pcVar9,"AMSupportCreateDigest");
        goto LAB_00003fb7;
      }
      pcVar9 = &cf__s_failedtoallocateparams;
      iVar3 = 2;
    }
    else {
      pcVar9 = &cf__s_failedtoinitdigest;
    }
    _AMSupportCreateErrorInternal
              (param_4,&cf_AMSupportErrorDomain,iVar3,0,pcVar9,"AMSupportCreateDigest");
  }
  lVar8 = 0;
  puVar5 = (undefined8 *)0x0;
LAB_00003fb7:
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (puVar5 != (undefined8 *)0x0) {
    _free(puVar5);
  }
  if (local_48 != (void *)0x0) {
    _free(local_48);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar8;
}

