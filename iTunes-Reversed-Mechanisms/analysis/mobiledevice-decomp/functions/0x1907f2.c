// rea decompile_all
// name: _outputStreamProc
// address: 0x1907f2
// body: available
// range: 0x1907f2-0x190a61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x190a5d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _outputStreamProc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x70) != 0) goto LAB_001909e1;
  uVar2 = *(ulong *)(param_2 + 0x30);
  uVar3 = 0;
  if (0xfffffffffffffffd < uVar2) {
    uVar1 = 0;
LAB_00190833:
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + uVar1;
    goto LAB_001909e1;
  }
  if ((long)uVar2 < 0) {
    pcVar4 = "invalid block ID in write thread %lld";
    uVar1 = 0;
    uVar3 = 0x147;
    goto LAB_001909c2;
  }
  if (*(int *)(param_1 + 4) == 1) {
    uVar1 = _pcWrite(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48),
                     *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x38));
    if (-1 < (long)uVar1) {
      if (uVar1 == *(ulong *)(param_2 + 0x38)) goto LAB_00190833;
      pcVar4 = "Truncated block payload (%lld/%llu bytes written)";
      uVar3 = 0x150;
      uVar2 = uVar1;
      goto LAB_001909c2;
    }
    pcVar4 = "writing block";
    uVar3 = 0x14e;
LAB_00190987:
    uVar1 = 0;
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                  ,"outputStreamProc",uVar3,0x25,0,pcVar4);
  }
  else {
    local_48 = pshufb(*(undefined1 (*) [16])(param_2 + 0x38),_DAT_00330d10);
    uVar1 = _pcWrite(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48),local_48,0x10);
    if ((long)uVar1 < 0) {
      pcVar4 = "writing block header";
      uVar3 = 0x159;
      goto LAB_00190987;
    }
    if (uVar1 == 0x10) {
      uVar2 = _pcWrite(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48),
                       *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x38));
      if (-1 < (long)uVar2) {
        uVar1 = uVar2 + 0x10;
        if (uVar2 == *(ulong *)(param_2 + 0x38)) {
          *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + uVar1;
          uVar3 = 0;
          goto LAB_001909e1;
        }
        pcVar4 = "Truncated block payload (%lld/%llu bytes read)";
        uVar3 = 0x161;
        goto LAB_001909c2;
      }
      _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                    ,"outputStreamProc",0x15f,0x25,0,"writing block payload");
      uVar1 = 0x10;
    }
    else {
      pcVar4 = "Truncated block header (%lld/16 bytes written)";
      uVar3 = 0x15b;
      uVar2 = uVar1;
LAB_001909c2:
      _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                    ,"outputStreamProc",uVar3,0x25,0,pcVar4,uVar2);
    }
  }
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + uVar1;
  LOCK();
  if (*(int *)(param_1 + 0x70) == 0) {
    *(int *)(param_1 + 0x70) = 1;
  }
  UNLOCK();
  uVar3 = 0xffffffff;
LAB_001909e1:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

