// rea decompile_all
// name: _BrotliClusterHistogramsCommand
// address: 0x80aa1
// body: available
// range: 0x80aa1-0x80e28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _BrotliClusterHistogramsCommand
               (long param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
               undefined8 *param_6,long param_7)

{
  size_t sVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar14;
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  int iVar17;
  int *local_60;
  void *local_48;
  long local_40;
  void *local_38;
  long lVar16;
  
  if (param_3 == 0) {
    local_48 = (void *)_BrotliAllocate(param_1,0xc018);
    if (*(int *)(param_1 + 0x18) != 0) {
      return;
    }
    pvVar4 = (void *)0x0;
    local_40 = 0;
    uVar8 = 0;
  }
  else {
    sVar1 = param_3 * 4;
    pvVar4 = (void *)_BrotliAllocate(param_1,sVar1);
    local_40 = _BrotliAllocate(param_1,sVar1);
    local_48 = (void *)_BrotliAllocate(param_1,0xc018);
    if (*(int *)(param_1 + 0x18) != 0) {
      return;
    }
    _memset_pattern16(pvVar4,&DAT_0032b3e0,sVar1);
    lVar10 = 0;
    uVar8 = 0;
    do {
      _memcpy((void *)(param_5 + lVar10),(void *)(param_2 + lVar10),0xb10);
      uVar12 = _BrotliPopulationCostCommand((void *)(param_2 + lVar10));
      *(undefined8 *)(param_5 + 0xb08 + lVar10) = uVar12;
      *(int *)(param_7 + uVar8 * 4) = (int)uVar8;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0xb10;
    } while (param_3 != uVar8);
    uVar8 = 0;
    uVar9 = 0;
    uVar11 = param_3;
    do {
      auVar3 = _DAT_0032b310;
      uVar7 = 0x40;
      if (uVar11 < 0x40) {
        uVar7 = uVar11;
      }
      lVar10 = uVar7 + (uVar7 == 0);
      uVar7 = param_3 - uVar9;
      if (0x3f < uVar7) {
        uVar7 = 0x40;
      }
      lVar5 = lVar10 + -1;
      auVar13._8_4_ = (int)lVar5;
      auVar13._0_8_ = lVar5;
      auVar13._12_4_ = (int)((ulong)lVar5 >> 0x20);
      lVar5 = local_40 + 4 + uVar8 * 4;
      auVar13 = auVar13 ^ _DAT_0032b310;
      uVar6 = 0;
      auVar15 = _DAT_0032b300;
      do {
        bVar2 = auVar13._0_4_ < SUB164(auVar15 ^ auVar3,0);
        iVar14 = auVar13._4_4_;
        iVar17 = SUB164(auVar15 ^ auVar3,4);
        if ((bool)(~(iVar14 < iVar17 || iVar17 == iVar14 && bVar2) & 1)) {
          *(int *)(lVar5 + -4 + uVar6 * 4) = (int)uVar6 + (int)uVar9;
        }
        if (iVar14 >= iVar17 && (iVar17 != iVar14 || !bVar2)) {
          *(int *)(lVar5 + uVar6 * 4) = (int)uVar9 + 1 + (int)uVar6;
        }
        uVar6 = uVar6 + 2;
        lVar16 = auVar15._8_8_;
        auVar15._0_8_ = auVar15._0_8_ + 2;
        auVar15._8_8_ = lVar16 + 2;
      } while (((int)lVar10 + 1U & 0xfe) != uVar6);
      lVar10 = _BrotliHistogramCombineCommand
                         (param_5,pvVar4,param_7 + uVar9 * 4,local_40 + uVar8 * 4,local_48,uVar7,
                          uVar7,param_4,0x800);
      uVar8 = uVar8 + lVar10;
      uVar9 = uVar9 + 0x40;
      uVar11 = uVar11 - 0x40;
    } while (uVar9 < param_3);
  }
  local_60 = (int *)(param_1 + 0x18);
  uVar11 = (uVar8 >> 1) * uVar8;
  if (uVar8 << 6 < uVar11) {
    uVar11 = uVar8 << 6;
  }
  if (uVar11 < 0x800) {
    local_38 = local_48;
  }
  else {
    uVar9 = 0x800;
    do {
      uVar7 = uVar9;
      uVar9 = uVar7 * 2;
    } while (uVar7 <= uVar11);
    local_38 = (void *)_BrotliAllocate(param_1,uVar7 * 0x18);
    if (*(int *)(param_1 + 0x18) == 0) {
      _memcpy(local_38,local_48,0xc000);
    }
    _BrotliFree(param_1,local_48);
  }
  if (*local_60 == 0) {
    uVar12 = _BrotliHistogramCombineCommand
                       (param_5,pvVar4,param_7,local_40,local_38,uVar8,param_3,param_4,uVar11);
    _BrotliFree(param_1,local_38);
    _BrotliFree(param_1,pvVar4);
    _BrotliHistogramRemapCommand(param_2,param_3,local_40,uVar12,param_5,param_7);
    _BrotliFree(param_1,local_40);
    uVar12 = _BrotliHistogramReindexCommand(param_1,param_5,param_7,param_3);
    *param_6 = uVar12;
  }
                    /* WARNING: Read-only address (ram,0x0032b300) is written */
                    /* WARNING: Read-only address (ram,0x0032b310) is written */
  return;
}

