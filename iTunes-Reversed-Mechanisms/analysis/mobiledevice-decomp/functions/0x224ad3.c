// rea decompile_all
// name: __crack_chain_with_anchor
// address: 0x224ad3
// body: available
// range: 0x224ad3-0x224bab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __crack_chain_with_anchor(ulong *param_1,ulong param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ushort uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  undefined8 local_68;
  ulong uStack_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong uStack_40;
  undefined4 local_34;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uVar7 = *param_1;
  uVar8 = param_1[1];
  local_50 = ~param_2;
  uVar6 = 1;
  uVar5 = 0x10;
  local_34 = param_3;
  do {
    local_48 = uVar7;
    uStack_40 = uVar8;
    iVar2 = _DERDecodeItem(&local_48,&local_68);
    if (iVar2 != 0) goto LAB_00224b9b;
    if (CARRY8(local_58,uStack_60)) {
LAB_00224ba2:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = (local_58 + uStack_60) - uVar7;
    if (((0x1ffff < uVar3) || (uVar8 < uVar3)) || ((ushort)local_34 <= uVar6)) goto LAB_00224b9b;
    if (local_50 < uVar5) goto LAB_00224ba2;
    *(ulong *)(param_2 + 8 + uVar5) = uVar3;
    *(ulong *)(param_2 + uVar5) = uVar7;
    if (local_58 + uStack_60 < uVar7) goto LAB_00224ba2;
    bVar9 = uVar8 < uVar3;
    uVar8 = uVar8 - uVar3;
    if (bVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar7 = uVar7 + uVar3;
    uVar5 = uVar5 + 0x10;
    uVar6 = uVar6 + 1;
  } while (uVar8 != 0);
  uVar4 = 0;
  if ((ushort)local_34 != uVar6) {
LAB_00224b9b:
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

