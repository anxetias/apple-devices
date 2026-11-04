// rea decompile_all
// name: _afc_transfer_missing
// address: 0x151d94
// body: available
// range: 0x151d94-0x151ee5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x151ee1 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _afc_transfer_missing
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined1 local_980 [144];
  undefined1 local_8f0 [4];
  ushort local_8ec;
  undefined8 local_8c0;
  undefined4 local_85c;
  char local_858 [1040];
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_85c = param_5;
  _snprintf(local_448,0x400,"%s%c%s",param_2,0x2f,param_1);
  _snprintf(local_858,0x400,"%s%c%s",param_4,0x2f,param_1);
  uVar2 = _afc_stat(param_3,local_858,local_980);
  if ((int)uVar2 == 8) {
    iVar1 = _lstat_INODE64(local_448,local_8f0);
    if (iVar1 == 0) {
      if ((local_8ec & 0xf000) == 0xa000) {
        uVar2 = _copy_symlink(param_3,local_448,local_858);
      }
      else {
        uVar2 = 8;
        if ((local_8ec & 0xf000) == 0x8000) {
          uVar2 = _copy_touch_file(0,0,0,param_3,local_448,local_858,local_8c0,(undefined1)local_85c
                                  );
        }
      }
    }
    else {
      piVar3 = ___error();
      uVar2 = (ulong)(*piVar3 != 2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

