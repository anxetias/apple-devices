// rea decompile_all
// name: _DERContentLengthOfEncodedSequence
// address: 0x2dda8
// body: available
// range: 0x2dda8-0x2df52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_DERContentLengthOfEncodedSequence
          (undefined8 *param_1,ulong param_2,uint param_3,ulong param_4,ulong *param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  ulong local_38;
  
  if (param_3 == 0) {
    local_38 = 0;
    uVar4 = 0;
  }
  else {
    puVar1 = (undefined8 *)((long)param_1 + param_2);
    local_38 = 0;
    uVar12 = 0;
    uVar9 = 0;
    do {
      if (~param_4 < uVar9 * 0x18) {
LAB_0002df45:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar7 = (ulong *)(uVar9 * 0x18 + param_4);
      uVar13 = *puVar7;
      uVar4 = 7;
      if ((0xffffffffffffffef < uVar13) || (param_2 < uVar13 + 0x10)) goto LAB_0002df2f;
      if (~(ulong)param_1 < uVar13) goto LAB_0002df45;
      puVar10 = (undefined8 *)(uVar13 + (long)param_1);
      uVar2 = (ushort)puVar7[2];
      if ((uVar2 >> 9 & 1) == 0) {
        if ((uVar2 & 1) != 0) {
          if ((puVar10 < param_1) || (puVar1 < puVar10 + 2)) goto LAB_0002df4e;
          if (puVar10[1] == 0) goto LAB_0002df11;
        }
        uVar13 = puVar7[1] & 0x1fffffffffffffff;
        uVar6 = 1;
        if (0x1e < uVar13) {
          do {
            uVar6 = uVar6 + 1;
            bVar14 = 0x7f < uVar13;
            uVar13 = uVar13 >> 7;
          } while (bVar14);
        }
        if (CARRY8(uVar12,uVar6)) goto LAB_0002df4a;
        if ((puVar10 < param_1) || (puVar1 < puVar10 + 2)) {
LAB_0002df4e:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar13 = puVar10[1];
        if ((uVar2 >> 8 & 1) == 0) {
LAB_0002dec0:
          uVar5 = 1;
          uVar11 = uVar13;
          if (0x7f < uVar13) {
            do {
              uVar5 = uVar5 + 1;
              bVar14 = 0xff < uVar11;
              uVar11 = uVar11 >> 8;
            } while (bVar14);
          }
        }
        else {
          if (uVar13 != 0) {
            uVar13 = uVar13 + (*(byte *)*puVar10 >> 7);
            goto LAB_0002dec0;
          }
          uVar5 = 1;
          uVar13 = 0;
        }
        uVar11 = uVar12 + uVar6 + uVar5;
        if ((CARRY8(uVar12 + uVar6,uVar5)) || (uVar12 = uVar11 + uVar13, CARRY8(uVar11,uVar13))) {
LAB_0002df4a:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      else {
        if ((puVar10 < param_1) || (puVar1 < puVar10 + 2)) goto LAB_0002df4e;
        bVar14 = CARRY8(uVar12,puVar10[1]);
        uVar12 = uVar12 + puVar10[1];
        if (bVar14) goto LAB_0002df4a;
      }
LAB_0002df11:
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar8;
    } while (uVar8 != param_3);
    uVar4 = 0;
    local_38 = uVar12;
  }
LAB_0002df2f:
  *param_5 = local_38;
  return uVar4;
}

