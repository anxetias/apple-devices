// rea decompile_all
// name: __EncodedDataCreate
// address: 0x241d39
// body: available
// range: 0x241d39-0x241dd1 inclusive
// range: 0x241de8-0x241e1d inclusive
// range: 0x241e80-0x241fb4 inclusive
// range: 0x241fcb-0x241fcf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x241fcb to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__EncodedDataCreate(uint param_1,uint param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 local_48;
  byte local_40 [8];
  long local_38;
  
  uVar12 = (ulong)param_2;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if ((param_6 == 0 || param_4 == 0) || param_3 != 0) {
    local_48 = param_3;
    pvVar2 = _calloc(1,0x38);
    iVar1 = 0;
    if (pvVar2 != (void *)0x0) {
      *(undefined4 *)((long)pvVar2 + 0x10) = 1;
      pbVar10 = (byte *)((long)pvVar2 + 0x1c);
      if (param_1 == 0x103) {
LAB_00241dbc:
        *(int *)((long)pvVar2 + 0x14) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x00241dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(&DAT_00241fd0 + *(int *)(&DAT_00241fd0 + (ulong)param_6 * 4)))(pbVar10);
        return uVar3;
      }
      if (param_1 < 4) {
        if (param_2 < 0x1f) {
          *(byte *)((long)pvVar2 + 0x1c) =
               (byte)(param_1 << 6) | (byte)param_2 | (param_5 != 0) << 5;
          pbVar4 = (byte *)((long)pvVar2 + 0x1d);
        }
        else {
          local_40[0] = 0;
          local_40[1] = 0;
          local_40[2] = 0;
          local_40[3] = 0;
          local_40[4] = 0;
          local_40[5] = 0;
          local_40[6] = 0;
          local_40[7] = 0;
          uVar5 = 0xffffffffffffffff;
          do {
            uVar8 = uVar5;
            uVar11 = (uint)uVar12;
            local_40[uVar8 + 1] = (byte)uVar12 & 0x7f;
            uVar12 = uVar12 >> 7;
            uVar5 = uVar8 + 1;
          } while (0x7f < uVar11);
          pbVar4 = pbVar10;
          if (uVar5 < 0xf) {
            *(byte *)((long)pvVar2 + 0x1c) = (param_5 != 0) << 5 | (byte)(param_1 << 6) | 0x1f;
            pbVar4 = (byte *)((long)pvVar2 + 0x1d);
            if (uVar5 != 0) {
              do {
                *pbVar4 = local_40[uVar8 + 1] | 0x80;
                pbVar4 = pbVar4 + 1;
                iVar1 = (int)uVar8;
                uVar8 = uVar8 - 1;
              } while (iVar1 != 0);
            }
            *pbVar4 = local_40[0];
            pbVar4 = pbVar4 + 1;
          }
        }
        iVar1 = (int)((long)pbVar4 - (long)pbVar10);
        if (iVar1 != 0) {
          pbVar10 = pbVar10 + ((long)pbVar4 - (long)pbVar10 & 0xffffffff);
          pbVar4 = pbVar10;
          if (param_4 < 0x80) {
            if (iVar1 != 0x10) {
              *pbVar10 = (byte)param_4;
              pbVar4 = pbVar10 + 1;
            }
          }
          else {
            local_40[0] = 0;
            local_40[1] = 0;
            local_40[2] = 0;
            local_40[3] = 0;
            local_40[4] = 0;
            local_40[5] = 0;
            local_40[6] = 0;
            local_40[7] = 0;
            lVar6 = 0;
            uVar12 = (ulong)param_4;
            do {
              local_40[lVar6] = (byte)uVar12;
              lVar6 = lVar6 + 1;
              uVar11 = (uint)uVar12;
              uVar12 = uVar12 >> 8;
            } while (0xff < uVar11);
            if ((uint)lVar6 < 0x10U - iVar1) {
              *pbVar10 = (byte)lVar6 | 0x80;
              pbVar9 = pbVar10 + 1;
              do {
                pbVar4 = pbVar9 + 1;
                *pbVar9 = *(byte *)((long)&local_48 + lVar6 + 7);
                lVar6 = lVar6 + -1;
                pbVar9 = pbVar4;
              } while (lVar6 != 0);
            }
          }
          iVar7 = (int)((long)pbVar4 - (long)pbVar10);
          if (iVar7 != 0) {
            pbVar10 = pbVar10 + ((long)pbVar4 - (long)pbVar10 & 0xffffffff);
            iVar1 = iVar1 + iVar7;
            goto LAB_00241dbc;
          }
        }
      }
      _free(pvVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

