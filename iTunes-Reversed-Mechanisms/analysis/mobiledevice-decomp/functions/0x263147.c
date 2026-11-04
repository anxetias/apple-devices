// rea decompile_all
// name: _AMSupportPlatformCreateDataFromMappedFileURL
// address: 0x263147
// body: available
// range: 0x263147-0x263343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26333f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportPlatformCreateDataFromMappedFileURL
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  FILE *pFVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_128;
  undefined1 local_119;
  undefined8 local_118;
  long lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  code *pcStack_e0;
  undefined8 local_d8;
  undefined1 local_c8 [96];
  long local_68;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_e8 = 0;
  pcStack_e0 = (code *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_d8 = 0;
  ___bzero(local_c8,0x90);
  pFVar2 = (FILE *)_AMSupportPlatformOpenFileStreamWithURL(param_3,"rb");
  if (pFVar2 == (FILE *)0x0) {
    local_128 = 4;
LAB_0026325c:
    local_68 = 0;
LAB_0026325f:
    lVar3 = 0;
  }
  else {
    iVar1 = _fileno(pFVar2);
    _fstat_INODE64(iVar1,local_c8);
    local_128 = 2;
    if (local_68 < 0) goto LAB_0026325f;
    if (local_68 == 0) {
      local_119 = 0;
      local_128 = 0;
      uVar6 = _CFDataCreate(param_1,&local_119,0);
      *param_2 = uVar6;
      goto LAB_0026325c;
    }
    local_128 = 2;
    iVar1 = _fileno(pFVar2);
    lVar3 = _mmap(0,local_68,1,0x4002,iVar1,0);
    if (lVar3 + 1U < 2) {
      lVar3 = 0;
    }
    else {
      local_118 = 0;
      lStack_110 = local_68;
      pcStack_e0 = __MappedFileDeallocate;
      lVar4 = _CFAllocatorCreate(param_1);
      if (lVar4 != 0) {
        lVar5 = _CFDataCreateWithBytesNoCopy(param_1,lVar3,local_68,lVar4);
        lVar7 = 0;
        lVar8 = local_68;
        if (lVar5 != 0) {
          uVar6 = _CFRetain(lVar5);
          *param_2 = uVar6;
          local_128 = 0;
          lVar3 = 0;
          lVar7 = lVar5;
        }
        goto LAB_002632d1;
      }
    }
  }
  lVar4 = 0;
  lVar7 = 0;
  lVar8 = local_68;
LAB_002632d1:
  _AMSupportSafeRelease(lVar7);
  _AMSupportSafeRelease(lVar4);
  if (lVar3 != 0) {
    _munmap(lVar3,lVar8);
  }
  if (pFVar2 != (FILE *)0x0) {
    _fclose(pFVar2);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_128;
}

