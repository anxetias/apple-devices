// rea decompile_all
// name: _BrotliHistogramCombineCommand
// address: 0x1ffdcb
// body: available
// range: 0x1ffdcb-0x20007d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _BrotliHistogramCombineCommand
                (long param_1,long param_2,long param_3,long param_4,uint *param_5,ulong param_6,
                long param_7,ulong param_8,undefined8 param_9)

{
  double *pdVar1;
  int *piVar2;
  uint *puVar3;
  long *plVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  size_t sVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  double dVar20;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  long local_40;
  ulong local_38;
  
  local_40 = 0;
  if (param_6 == 0) {
LAB_0020006a:
    param_6 = 0;
  }
  else {
    uVar13 = 0;
    do {
      uVar19 = uVar13 + 1;
      local_38 = uVar19;
      for (; uVar19 < param_6; uVar19 = uVar19 + 1) {
        _BrotliCompareAndPushToQueueCommand
                  (param_1,param_2,*(undefined4 *)(param_4 + uVar13 * 4),
                   *(undefined4 *)(param_4 + uVar19 * 4),param_9,param_5,&local_40);
      }
      uVar13 = local_38;
    } while (local_38 != param_6);
    if (param_6 != 1) {
      uVar13 = 1;
      dVar20 = 0.0;
      do {
        if (dVar20 <= *(double *)(param_5 + 4)) {
          dVar20 = 1e+99;
          uVar13 = param_8;
        }
        else {
          uVar6 = *param_5;
          local_38 = (ulong)uVar6;
          uVar7 = param_5[1];
          lVar14 = param_1 + local_38 * 0xb10;
          lVar18 = (ulong)uVar7 * 0xb10;
          plVar4 = (long *)(param_1 + 0xb00 + local_38 * 0xb10);
          *plVar4 = *plVar4 + *(long *)(param_1 + 0xb00 + lVar18);
          lVar15 = 0;
          do {
            piVar2 = (int *)(lVar14 + lVar15 * 4);
            *piVar2 = *piVar2 + *(int *)(param_1 + lVar18 + lVar15 * 4);
            lVar15 = lVar15 + 1;
          } while (lVar15 != 0x2c0);
          *(undefined8 *)(lVar14 + 0xb08) = *(undefined8 *)(param_5 + 2);
          piVar2 = (int *)(param_2 + local_38 * 4);
          *piVar2 = *piVar2 + *(int *)(param_2 + (ulong)uVar7 * 4);
          if (param_7 != 0) {
            lVar14 = 0;
            do {
              if (*(uint *)(param_3 + lVar14 * 4) == uVar7) {
                *(uint *)(param_3 + lVar14 * 4) = uVar6;
              }
              lVar14 = lVar14 + 1;
            } while (param_7 != lVar14);
          }
          sVar16 = param_6 * 4;
          lVar14 = 0;
          do {
            sVar16 = sVar16 - 4;
            if (*(uint *)(param_4 + lVar14 * 4) == uVar7) {
              _memmove((void *)(param_4 + lVar14 * 4),(void *)(param_4 + lVar14 * 4 + 4),sVar16);
              break;
            }
            lVar14 = lVar14 + 1;
          } while (param_6 + (param_6 == 0) != lVar14);
          if (local_40 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            puVar17 = param_5;
            do {
              uVar6 = *puVar17;
              if ((((uVar6 != (uint)local_38) && (uVar8 = puVar17[1], uVar8 != uVar7)) &&
                  (uVar6 != uVar7)) && (uVar8 != (uint)local_38)) {
                dVar5 = *(double *)(param_5 + 4);
                pdVar1 = (double *)(puVar17 + 4);
                if ((dVar5 != *pdVar1) || (NAN(dVar5) || NAN(*pdVar1))) {
                  if (*pdVar1 <= dVar5 && dVar5 != *pdVar1) goto LAB_001fffa7;
LAB_001fffed:
                  *(undefined8 *)(param_5 + lVar14 * 6 + 4) = *(undefined8 *)(puVar17 + 4);
                  local_88 = *puVar17;
                  uStack_84 = puVar17[1];
                  uStack_80 = puVar17[2];
                  uStack_7c = puVar17[3];
                }
                else {
                  if (param_5[1] - *param_5 <= uVar8 - uVar6) goto LAB_001fffed;
LAB_001fffa7:
                  uVar9 = *(undefined8 *)(param_5 + 4);
                  uVar10 = *(undefined8 *)param_5;
                  uVar11 = *(undefined8 *)(param_5 + 2);
                  *(undefined8 *)(param_5 + 4) = *(undefined8 *)(puVar17 + 4);
                  uVar12 = *(undefined8 *)(puVar17 + 2);
                  *(undefined8 *)param_5 = *(undefined8 *)puVar17;
                  *(undefined8 *)(param_5 + 2) = uVar12;
                  *(undefined8 *)(param_5 + lVar14 * 6 + 4) = uVar9;
                  local_88 = (uint)uVar10;
                  uStack_84 = (uint)((ulong)uVar10 >> 0x20);
                  uStack_80 = (uint)uVar11;
                  uStack_7c = (uint)((ulong)uVar11 >> 0x20);
                }
                puVar3 = param_5 + lVar14 * 6;
                *puVar3 = local_88;
                puVar3[1] = uStack_84;
                puVar3[2] = uStack_80;
                puVar3[3] = uStack_7c;
                lVar14 = lVar14 + 1;
              }
              puVar17 = puVar17 + 6;
              local_40 = local_40 + -1;
            } while (local_40 != 0);
          }
          param_6 = param_6 - 1;
          if (param_6 == 0) goto LAB_0020006a;
          uVar19 = 0;
          local_40 = lVar14;
          do {
            _BrotliCompareAndPushToQueueCommand
                      (param_1,param_2,local_38 & 0xffffffff,*(undefined4 *)(param_4 + uVar19 * 4),
                       param_9,param_5,&local_40);
            uVar19 = uVar19 + 1;
          } while (param_6 != uVar19);
        }
      } while (uVar13 < param_6);
    }
  }
  return param_6;
}

