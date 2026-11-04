// rea decompile_all
// name: _DERParseSequenceContentToObject
// address: 0x2d274
// body: available
// range: 0x2d274-0x2d57d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2d575 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _DERParseSequenceContentToObject
                (ulong *param_1,ushort param_2,ulong param_3,ulong *param_4,ulong param_5,
                ulong param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ushort *puVar9;
  byte *pbVar10;
  ushort uVar11;
  ushort uVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = 0;
  if (param_6 != 0) {
    if (param_5 < param_6) goto LAB_0002d570;
    ___bzero(param_4,param_6);
  }
  uVar4 = *param_1;
  uVar5 = param_1[1] + uVar4;
  if (CARRY8(param_1[1],uVar4)) {
LAB_0002d56b:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar5 < uVar4) {
LAB_0002d570:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_48 = uVar4;
  local_40 = uVar5;
  if (param_2 != 0) {
    puVar6 = (ulong *)(param_5 + (long)param_4);
    uVar11 = 0;
    do {
      uVar5 = local_40;
      uVar4 = local_48;
      local_58 = 0xaaaaaaaaaaaaaaaa;
      local_68 = 0xaaaaaaaa;
      uStack_64 = 0xaaaaaaaa;
      uStack_60 = 0xaaaaaaaa;
      uStack_5c = 0xaaaaaaaa;
      uVar2 = _DERDecodeSeqNext(&local_48,&local_68);
      if ((int)uVar2 != 0) {
        if (((int)uVar2 != 1) || (uVar2 = 0, param_2 <= uVar11)) goto LAB_0002d521;
        pbVar10 = (byte *)(param_3 + (ulong)uVar11 * 0x18 + 0x10);
        lVar8 = (ulong)param_2 - (ulong)uVar11;
        goto LAB_0002d4ec;
      }
      uVar2 = 2;
      if (param_2 <= uVar11) goto LAB_0002d521;
      puVar9 = (ushort *)(param_3 + 0x10 + (ulong)uVar11 * 0x18);
      uVar12 = uVar11;
      while( true ) {
        uVar11 = uVar12 + 1;
        if (~param_3 < (ulong)((long)(short)uVar12 * 0x18)) goto LAB_0002d56b;
        uVar12 = *puVar9;
        if (((uVar12 & 2) != 0) || (CONCAT44(uStack_64,local_68) == *(long *)(puVar9 + -4))) break;
        if (((uVar12 & 1) == 0) || (puVar9 = puVar9 + 0xc, uVar12 = uVar11, param_2 <= uVar11))
        goto LAB_0002d521;
      }
      if ((uVar12 & 4) == 0) {
        uVar3 = *(ulong *)(puVar9 + -8);
        uVar2 = 7;
        if ((0xffffffffffffffef < uVar3) || (param_5 < uVar3 + 0x10)) goto LAB_0002d521;
        if (~(ulong)param_4 < uVar3) goto LAB_0002d56b;
        puVar7 = (ulong *)(uVar3 + (long)param_4);
        if ((puVar6 <= puVar7) || (puVar7 < param_4)) goto LAB_0002d570;
        *(undefined4 *)puVar7 = uStack_60;
        *(undefined4 *)((long)puVar7 + 4) = uStack_5c;
        *(undefined4 *)(puVar7 + 1) = (undefined4)local_58;
        *(undefined4 *)((long)puVar7 + 0xc) = local_58._4_4_;
        if ((uVar12 & 8) != 0) {
          if (CONCAT44(uStack_5c,uStack_60) <= uVar4) {
            if (((puVar6 < puVar7 + 2) || (uVar5 < uVar4)) || (uVar5 - uVar4 < puVar7[1]))
            goto LAB_0002d570;
            *puVar7 = uVar4;
            uVar2 = 3;
            goto LAB_0002d521;
          }
          if (puVar6 < puVar7 + 2) goto LAB_0002d570;
          uVar2 = CONCAT44(uStack_5c,uStack_60) - uVar4;
          uVar3 = uVar2 + puVar7[1];
          if (CARRY8(uVar2,puVar7[1])) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((uVar5 < uVar4) || (uVar5 - uVar4 < uVar3)) goto LAB_0002d570;
          *puVar7 = uVar4;
          puVar7[1] = uVar3;
        }
      }
      if (param_2 == uVar11) {
        if ((CARRY8(CONCAT44(uStack_5c,uStack_60),local_58)) ||
           (uVar4 = CONCAT44(uStack_5c,uStack_60) + local_58, uVar5 = param_1[1] + *param_1,
           CARRY8(param_1[1],*param_1))) goto LAB_0002d56b;
        break;
      }
      uVar4 = local_48;
      uVar5 = local_40;
    } while (uVar11 <= param_2);
  }
  uVar2 = (ulong)((uint)(uVar4 != uVar5) * 3);
  goto LAB_0002d521;
  while( true ) {
    pbVar10 = pbVar10 + 0x18;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) break;
LAB_0002d4ec:
    if ((*pbVar10 & 1) == 0) {
      uVar2 = 5;
      break;
    }
  }
LAB_0002d521:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

