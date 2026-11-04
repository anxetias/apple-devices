// rea decompile_all
// name: _AMSupportPlatformCreateDataFromFileURL
// address: 0x262877
// body: available
// range: 0x262877-0x2629cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2629cb to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportPlatformCreateDataFromFileURL(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  FILE *pFVar2;
  void *pvVar3;
  size_t sVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_f0;
  undefined1 local_c9;
  undefined1 local_c8 [96];
  size_t local_68;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  pFVar2 = (FILE *)_AMSupportPlatformOpenFileStreamWithURL(param_3,"rb");
  if (pFVar2 == (FILE *)0x0) {
    uStack_f0 = 4;
  }
  else {
    ___bzero(local_c8,0x90);
    iVar1 = _fileno(pFVar2);
    _fstat_INODE64(iVar1,local_c8);
    if (local_68 == 0) {
      local_c9 = 0;
      uStack_f0 = 0;
      uVar6 = _CFDataCreate(param_1,&local_c9,0);
      *param_2 = uVar6;
    }
    else {
      uVar6 = *(undefined8 *)PTR__kCFAllocatorMalloc_004410f0;
      pvVar3 = (void *)_CFAllocatorAllocate(uVar6,local_68,0);
      uStack_f0 = 2;
      if (pvVar3 != (void *)0x0) {
        sVar4 = _fread(pvVar3,1,local_68,pFVar2);
        if (sVar4 == local_68) {
          lVar5 = _CFDataCreateWithBytesNoCopy(param_1,pvVar3,local_68,uVar6);
          if (lVar5 != 0) {
            uVar6 = _CFRetain(lVar5);
            *param_2 = uVar6;
            _CFRelease(lVar5);
            uStack_f0 = 0;
          }
        }
        else {
          uStack_f0 = 4;
        }
      }
    }
    _fclose(pFVar2);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uStack_f0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

