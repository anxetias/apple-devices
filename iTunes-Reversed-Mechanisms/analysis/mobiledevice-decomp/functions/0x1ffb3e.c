// rea decompile_all
// name: _BrotliCompareAndPushToQueueCommand
// address: 0x1ffb3e
// body: available
// range: 0x1ffb3e-0x1ffdca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliCompareAndPushToQueueCommand
               (long param_1,long param_2,uint param_3,uint param_4,ulong param_5,uint *param_6,
               ulong *param_7)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int local_b68 [704];
  long local_68;
  double local_58;
  uint *local_50;
  ulong local_48;
  double local_40;
  double local_38;
  
  if (param_3 == param_4) {
    return;
  }
  uVar4 = param_3;
  if (param_4 < param_3) {
    uVar4 = param_4;
  }
  if (param_3 < param_4) {
    param_3 = param_4;
  }
  uVar8 = (ulong)*(uint *)(param_2 + (ulong)uVar4 * 4);
  uVar2 = *(uint *)(param_2 + (ulong)param_3 * 4);
  uVar7 = (ulong)uVar2;
  local_40 = (double)uVar8;
  local_50 = param_6;
  local_48 = param_5;
  if (uVar8 < 0x100) {
    local_38 = (double)(&_kBrotliLog2Table)[uVar8];
  }
  else {
    local_38 = (double)_log2();
  }
  uVar8 = uVar8 + uVar7;
  dVar12 = (double)uVar7;
  if (uVar2 < 0x100) {
    dVar10 = (double)(&_kBrotliLog2Table)[uVar7];
  }
  else {
    local_58 = dVar12;
    dVar10 = (double)_log2(dVar12);
    dVar12 = local_58;
  }
  local_40 = local_40 * local_38 + dVar10 * dVar12;
  local_38 = (double)uVar8;
  if (uVar8 < 0x100) {
    dVar12 = (double)(&_kBrotliLog2Table)[uVar8];
  }
  else {
    dVar12 = (double)_log2(local_38);
  }
  lVar6 = (ulong)uVar4 * 0xb10;
  dVar10 = *(double *)(param_1 + 0xb08 + lVar6);
  lVar9 = (ulong)param_3 * 0xb10;
  dVar11 = *(double *)(param_1 + 0xb08 + lVar9);
  local_40 = ((local_40 - local_38 * dVar12) * 0.5 - dVar10) - dVar11;
  if (*(long *)(param_1 + 0xb00 + lVar6) != 0) {
    lVar9 = lVar9 + param_1;
    lVar3 = *(long *)(lVar9 + 0xb00);
    dVar11 = dVar10;
    if (lVar3 != 0) {
      if (*param_7 == 0) {
        local_38 = 1e+99;
      }
      else {
        local_38 = 0.0;
        if (0.0 <= *(double *)(local_50 + 4)) {
          local_38 = *(double *)(local_50 + 4);
        }
      }
      _memcpy(local_b68,(void *)(param_1 + lVar6),0xb10);
      local_68 = local_68 + lVar3;
      lVar6 = 0;
      do {
        auVar1 = *(undefined1 (*) [16])(lVar9 + lVar6 * 4);
        local_b68[lVar6] = local_b68[lVar6] + auVar1._0_4_;
        local_b68[lVar6 + 1] = local_b68[lVar6 + 1] + auVar1._4_4_;
        local_b68[lVar6 + 2] = local_b68[lVar6 + 2] + auVar1._8_4_;
        local_b68[lVar6 + 3] = local_b68[lVar6 + 3] + auVar1._12_4_;
        lVar6 = lVar6 + 4;
      } while (lVar6 != 0x2c0);
      dVar11 = (double)_BrotliPopulationCostCommand(local_b68);
      if (local_38 - local_40 <= dVar11) {
        return;
      }
    }
  }
  local_40 = local_40 + dVar11;
  uVar7 = *param_7;
  if (uVar7 == 0) {
LAB_001ffd95:
    if (uVar7 < local_48) {
      local_50[uVar7 * 6] = uVar4;
      local_50[uVar7 * 6 + 1] = param_3;
      *(double *)(local_50 + uVar7 * 6 + 2) = dVar11;
      *(double *)(local_50 + uVar7 * 6 + 4) = local_40;
      *param_7 = uVar7 + 1;
    }
  }
  else {
    dVar12 = *(double *)(local_50 + 4);
    if ((dVar12 != local_40) || (NAN(dVar12) || NAN(local_40))) {
      if (dVar12 <= local_40) goto LAB_001ffd95;
    }
    else if (local_50[1] - *local_50 <= param_3 - uVar4) goto LAB_001ffd95;
    if (uVar7 < local_48) {
      *(undefined8 *)(local_50 + uVar7 * 6 + 4) = *(undefined8 *)(local_50 + 4);
      uVar5 = *(undefined8 *)(local_50 + 2);
      *(undefined8 *)(local_50 + uVar7 * 6) = *(undefined8 *)local_50;
      *(undefined8 *)(local_50 + uVar7 * 6 + 2) = uVar5;
      *param_7 = *param_7 + 1;
    }
    *local_50 = uVar4;
    local_50[1] = param_3;
    *(double *)(local_50 + 2) = dVar11;
    *(double *)(local_50 + 4) = local_40;
  }
  return;
}

