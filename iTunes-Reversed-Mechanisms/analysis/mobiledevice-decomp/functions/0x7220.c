// rea decompile_all
// name: __AMSupportPlatformConstantsInitialize
// address: 0x7220
// body: available
// range: 0x7220-0x7338 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7334 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __AMSupportPlatformConstantsInitialize(void)

{
  undefined8 uVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  size_t local_60 [10];
  
  local_60[9] = *(size_t *)PTR____stack_chk_guard_004412b8;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  __tempDirURL = _CFURLCreateWithFileSystemPath(uVar1,&cf__tmp,0);
  if (__tempDirURL == 0) {
    __AMSupportPlatformConstantsInitialize_cold_1();
    goto LAB_00007334;
  }
  local_60[7] = 0;
  local_60[8] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[0] = 0x20;
  iVar2 = _sysctlbyname("kern.osversion",local_60 + 5,local_60,(void *)0x0,0);
  if (iVar2 == 0) {
    local_60[0] = 0x20;
    iVar2 = _sysctlbyname("hw.product",local_60 + 1,local_60,(void *)0x0,0);
    if (((iVar2 != 0) &&
        (iVar2 = _sysctlbyname("hw.machine",local_60 + 1,local_60,(void *)0x0,0), iVar2 != 0)) ||
       (pcVar3 = (cfstringStruct *)
                 _CFStringCreateWithFormat(uVar1,0,&cf_mac__s__s,local_60 + 5,local_60 + 1),
       pcVar3 == (cfstringStruct *)0x0)) goto LAB_0000731c;
  }
  else {
LAB_0000731c:
    pcVar3 = __platformInfoStr;
    if (__platformInfoStr == (cfstringStruct *)0x0) {
      pcVar3 = &cf____;
    }
  }
  __platformInfoStr = pcVar3;
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_60[9]) {
    return;
  }
LAB_00007334:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

