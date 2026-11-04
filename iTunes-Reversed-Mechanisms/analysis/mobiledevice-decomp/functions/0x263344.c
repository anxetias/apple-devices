// rea decompile_all
// name: _AMSupportPlatformCopyLocalIPAddressString
// address: 0x263344
// body: available
// range: 0x263344-0x263492 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26348e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportPlatformCopyLocalIPAddressString(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  hostent *phVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uStack_130;
  char local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_128,0x100);
  iVar1 = _gethostname(local_128,0x100);
  if (iVar1 == 0) {
    phVar2 = _gethostbyname(local_128);
    if (phVar2 == (hostent *)0x0) {
      pcVar3 = _hstrerror(*(int *)PTR__h_errno_00441338);
      pcVar7 = "gethostbyname() failed: %s";
      goto LAB_00263472;
    }
    pcVar3 = _addr2ascii(2,*phVar2->h_addr_list,4,(char *)0x0);
    if (pcVar3 == (char *)0x0) {
      piVar6 = ___error();
      pcVar3 = _strerror(*piVar6);
      pcVar7 = "addr2ascii() failed: %s";
      goto LAB_00263472;
    }
    lVar4 = _CFStringCreateWithCString(param_1,pcVar3,0x8000100);
    if (lVar4 != 0) {
      uVar5 = _CFRetain(lVar4);
      *param_2 = uVar5;
      uStack_130 = 0;
      goto LAB_002633f2;
    }
    uStack_130 = 3;
  }
  else {
    piVar6 = ___error();
    pcVar3 = _strerror(*piVar6);
    pcVar7 = "gethostname() failed: %s";
LAB_00263472:
    _AMSupportLogInternal(3,"AMSupportPlatformCopyLocalIPAddressString",pcVar7,pcVar3);
    uStack_130 = 99;
  }
  lVar4 = 0;
LAB_002633f2:
  _AMSupportSafeRelease(lVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uStack_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

