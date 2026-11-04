// rea decompile_all
// name: _compare_symlinks
// address: 0xb28c9
// body: available
// range: 0xb28c9-0xb2a06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb2a02 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _compare_symlinks(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int *piVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  char local_848 [1040];
  char local_438 [1040];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x401);
  ___bzero(local_848,0x401);
  sVar2 = _readlink(param_1,local_438,0x401);
  if (sVar2 == 0xffffffffffffffff) {
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    uVar7 = 0x415;
LAB_000b29d2:
    pcVar6 = &cf_readlinkfailedfor_s__s;
  }
  else {
    sVar3 = _readlink(param_2,local_848,0x401);
    if (sVar3 == 0xffffffffffffffff) {
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      uVar7 = 0x419;
      param_1 = param_2;
      goto LAB_000b29d2;
    }
    if (sVar2 == sVar3) {
      iVar1 = _memcmp(local_438,local_848,sVar2);
      if (iVar1 == 0) {
        uVar8 = CONCAT71((int7)(sVar2 >> 8),1);
        goto LAB_000b29dc;
      }
    }
    pcVar6 = &cf_symlinks__s__and___sdiffer;
    uVar7 = 0x41d;
    pcVar5 = param_2;
  }
  uVar8 = 0;
  _dmlog("compare_symlinks",uVar7,pcVar6,param_1,pcVar5);
LAB_000b29dc:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

