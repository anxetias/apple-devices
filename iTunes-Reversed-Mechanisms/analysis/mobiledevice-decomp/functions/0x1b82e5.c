// rea decompile_all
// name: __DEREncoderEncodeHeader
// address: 0x1b82e5
// body: available
// range: 0x1b82e5-0x1b83fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b83f8 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__DEREncoderEncodeHeader(char param_1,byte param_2,uint param_3,undefined8 *param_4,int *param_5)

{
  undefined8 uVar1;
  byte *pbVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  byte abStack_41 [9];
  long local_38;
  byte *pbVar7;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar1 = 1;
  if (param_5 != (int *)0x0 && param_4 != (undefined8 *)0x0) {
    pbVar2 = _malloc(0x10);
    if (pbVar2 == (byte *)0x0) {
      uVar1 = 2;
    }
    else {
      *pbVar2 = param_1 << 6 | param_2 | 0x20;
      if (param_3 < 0x80) {
        pbVar2[1] = (byte)param_3;
        pbVar7 = pbVar2 + 2;
      }
      else {
        abStack_41[1] = 0;
        abStack_41[2] = 0;
        abStack_41[3] = 0;
        abStack_41[4] = 0;
        abStack_41[5] = 0;
        abStack_41[6] = 0;
        abStack_41[7] = 0;
        abStack_41[8] = 0;
        uVar5 = 0;
        uVar10 = (ulong)param_3;
        do {
          uVar4 = uVar5;
          abStack_41[uVar4 + 1] = (byte)uVar10;
          uVar5 = uVar4 + 1;
          uVar9 = (uint)uVar10;
          uVar10 = uVar10 >> 8;
        } while (0xff < uVar9);
        pbVar7 = pbVar2 + 1;
        if (uVar4 < 0xe) {
          pbVar2[1] = (char)uVar4 + 0x81;
          pbVar8 = pbVar2 + 2;
          do {
            pbVar7 = pbVar8 + 1;
            *pbVar8 = abStack_41[uVar5];
            uVar5 = uVar5 - 1;
            pbVar8 = pbVar7;
          } while (uVar5 != 0);
        }
      }
      iVar3 = (int)(pbVar2 + 1);
      iVar6 = (int)pbVar7 - iVar3;
      if (iVar6 == 0) {
        _free(pbVar2);
        uVar1 = 3;
      }
      else {
        *param_5 = (iVar3 + iVar6) - (int)pbVar2;
        *param_4 = pbVar2;
        uVar1 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

