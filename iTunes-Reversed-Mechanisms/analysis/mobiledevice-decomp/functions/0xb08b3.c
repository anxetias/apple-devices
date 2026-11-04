// rea decompile_all
// name: _cfStringCompare
// address: 0xb08b3
// body: available
// range: 0xb08b3-0xb09e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb09dd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _cfStringCompare(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  byte local_828 [1024];
  byte local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_428,0x400);
  ___bzero(local_828,0x400);
  cVar4 = _CFStringGetFileSystemRepresentation(*param_1,local_428,0x400);
  if (cVar4 == '\0') {
    _dmlog("cfStringCompare",0x3a3,&cf__dCFStringGetFileSystemRepresentationfailed_);
  }
  uVar5 = _CFStringGetFileSystemRepresentation(*param_2,local_828,0x400);
  if ((char)uVar5 == '\0') {
    uVar5 = _dmlog("cfStringCompare",0x3a6,&cf__dCFStringGetFileSystemRepresentationfailed_);
  }
  lVar6 = 0;
  while( true ) {
    bVar1 = local_428[lVar6];
    bVar2 = local_828[lVar6];
    uVar7 = (uint)bVar2;
    if (bVar1 == 0) {
      uVar5 = 0xffffffff;
      if (bVar2 == 0) {
        uVar5 = 0;
      }
      goto LAB_000b09bf;
    }
    if (bVar2 == 0) break;
    uVar3 = (uint)bVar1;
    if (bVar1 == 0x2f) {
      uVar3 = 0xffffffff;
    }
    if (bVar2 == 0x2f) {
      uVar7 = 0xffffffff;
    }
    if ((int)uVar7 < (int)uVar3) {
      uVar5 = 1;
    }
    if ((int)uVar3 < (int)uVar7) {
      uVar5 = 0xffffffff;
    }
    lVar6 = lVar6 + 1;
    if (uVar7 != uVar3) {
LAB_000b09bf:
      if (*(long *)PTR____stack_chk_guard_004412b8 != local_28) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return uVar5;
    }
  }
  uVar5 = 1;
  goto LAB_000b09bf;
}

