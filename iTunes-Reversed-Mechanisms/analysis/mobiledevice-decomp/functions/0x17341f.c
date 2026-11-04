// rea decompile_all
// name: AMRManagedDiskImage::newRandomMountPoint
// address: 0x17341f
// body: available
// range: 0x17341f-0x17354b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x173547 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID AMRManagedDiskImage::newRandomMountPoint(ID param_1,SEL param_2)

{
  uint uVar1;
  size_t sVar2;
  char *pcVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  char local_818 [1024];
  char local_418 [1024];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_418,0x400);
  ___bzero(local_818,0x400);
  sVar2 = _confstr(0x10001,local_818,0x400);
  if (sVar2 - 0x400 < 0xfffffffffffffc01) {
    ___strlcpy_chk(local_818,"/tmp/",0x400,0x400);
  }
  uVar1 = _snprintf(local_418,0x400,"%s%sRestoreMount.XXXXXX",local_818,"/");
  if ((int)uVar1 < 1) {
    pcVar5 = &cf_snprintf__creatingtheshadowfilepathstringfailed_;
  }
  else if (uVar1 < 0x400) {
    pcVar3 = _mkdtemp(local_418);
    if (pcVar3 != (char *)0x0) {
      IVar4 = (*(code *)PTR__objc_msgSend_00441098)
                        (&_OBJC_CLASS___NSString,"stringWithUTF8String:",pcVar3);
      goto LAB_001734fa;
    }
    pcVar5 = &cf_mktemp__failedtochooseashadowfilepath;
  }
  else {
    pcVar5 = &cf_AskedtowriteafilepathgreaterthanMAXPATHLEN___;
  }
  IVar4 = 0;
  _AMRSafeLog(3,&cf___,pcVar5);
LAB_001734fa:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_18) {
    return IVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

