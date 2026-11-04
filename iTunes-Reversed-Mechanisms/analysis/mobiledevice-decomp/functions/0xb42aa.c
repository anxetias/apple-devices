// rea decompile_all
// name: _qsufsort
// address: 0xb42aa
// body: available
// range: 0xb42aa-0xb449f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb449b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void _qsufsort(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_838 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_838,0x800);
  uVar1 = 0;
  uVar2 = uVar1;
  if (0 < (long)param_4) {
    do {
      local_838[*(byte *)(param_3 + uVar1)] = local_838[*(byte *)(param_3 + uVar1)] + 1;
      uVar1 = uVar1 + 1;
      uVar2 = local_838[0];
    } while (param_4 != uVar1);
  }
  lVar4 = 1;
  do {
    uVar2 = uVar2 + local_838[lVar4];
    local_838[lVar4] = uVar2;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x100);
  _memmove(local_838 + 1,local_838,0x7f8);
  local_838[0] = 0;
  if (0 < (long)param_4) {
    uVar2 = 0;
    do {
      uVar1 = local_838[*(byte *)(param_3 + uVar2)];
      local_838[*(byte *)(param_3 + uVar2)] = uVar1 + 1;
      param_1[uVar1 + 1] = uVar2;
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
    *param_1 = param_4;
    if (0 < (long)param_4) {
      uVar2 = 0;
      do {
        *(ulong *)(param_2 + uVar2 * 8) = local_838[*(byte *)(param_3 + uVar2)];
        uVar2 = uVar2 + 1;
      } while (param_4 != uVar2);
    }
  }
  *(undefined8 *)(param_2 + param_4 * 8) = 0;
  lVar4 = 1;
  uVar2 = local_838[0];
  do {
    uVar1 = local_838[lVar4];
    if (uVar1 == uVar2 + 1) {
      param_1[uVar1] = 0xffffffffffffffff;
    }
    lVar4 = lVar4 + 1;
    uVar2 = uVar1;
  } while (lVar4 != 0x100);
  *param_1 = 0xffffffffffffffff;
  if (param_4 != 0) {
    lVar4 = 1;
    do {
      if (-1 < (long)param_4) {
        lVar3 = 0;
        lVar5 = 0;
        do {
          uVar2 = param_1[lVar5];
          if ((long)uVar2 < 0) {
            lVar3 = lVar3 - uVar2;
            lVar6 = lVar5 - uVar2;
          }
          else {
            if (lVar3 != 0) {
              param_1[lVar5 - lVar3] = -lVar3;
              uVar2 = param_1[lVar5];
            }
            lVar6 = *(long *)(param_2 + uVar2 * 8) + 1;
            _split(param_1,param_2,lVar5,lVar6 - lVar5,lVar4);
            lVar3 = 0;
          }
          lVar5 = lVar6;
        } while (lVar6 <= (long)param_4);
        if (lVar3 != 0) {
          param_1[lVar6 - lVar3] = -lVar3;
        }
      }
      lVar4 = lVar4 * 2;
    } while ((*param_1 ^ param_4) != 0xffffffffffffffff);
    if ((long)param_4 < 0) goto LAB_000b4479;
  }
  uVar2 = 0;
  do {
    param_1[*(long *)(param_2 + uVar2 * 8)] = uVar2;
    uVar2 = uVar2 + 1;
  } while (param_4 + 1 != uVar2);
LAB_000b4479:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

