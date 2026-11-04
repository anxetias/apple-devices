// rea decompile_all
// name: _unz64local_GetCurrentFileInfoInternal
// address: 0x171703
// body: available
// range: 0x171703-0x171bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

uint _unz64local_GetCurrentFileInfoInternal
               (long param_1,void *param_2,long *param_3,long param_4,ulong param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  long lStack_d0;
  ulong local_c8;
  ulong auStack_c0 [7];
  undefined8 local_88;
  long local_78;
  long local_70;
  long *local_68;
  void *local_60;
  long local_58;
  ulong local_50;
  long local_48;
  uint local_40;
  uint local_3c;
  long local_38;
  
  auStack_c0[5] = 0;
  auStack_c0[6] = 0;
  auStack_c0[3] = 0;
  auStack_c0[4] = 0;
  auStack_c0[1] = 0;
  auStack_c0[2] = 0;
  local_c8 = 0;
  auStack_c0[0] = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_88 = 0;
  pcVar18 = *(code **)(param_1 + 0x20);
  if (pcVar18 == (code *)0x0) {
    pcVar18 = *(code **)(param_1 + 0x50);
  }
  local_68 = param_3;
  local_60 = param_2;
  local_58 = param_4;
  local_50 = param_5;
  lVar16 = (*pcVar18)(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),
                      *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x88),0);
  local_40 = 0xffffffff;
  if (lVar16 == 0) {
    iVar1 = _unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x60),&local_78);
    local_40 = 0xffffffff;
    if ((iVar1 == 0) && (local_40 = 0xffffff99, local_78 == 0x2014b50)) {
      local_40 = 0;
    }
  }
  uVar2 = _unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x60),&local_108);
  uVar3 = _unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_100);
  uVar4 = _unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x60),&local_f8);
  uVar5 = _unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_f0);
  local_3c = uVar5 | uVar4 | uVar3 | uVar2;
  iVar1 = _unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x60),&local_e8);
  local_88 = CONCAT44(((uint)local_e8 >> 0x19) + 0x7bc,((uint)local_e8 >> 0x15 & 0xf) - 1);
  auStack_c0[6] = CONCAT44((uint)local_e8 >> 0x10,(uint)local_e8 >> 0xb) & 0x1f0000001f;
  auStack_c0[5] = CONCAT44((uint)local_e8 >> 5,(uint)local_e8 * 2) & 0x3f0000003e;
  iVar6 = _unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_e0);
  iVar7 = _unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x60),&local_38);
  local_d8 = local_38;
  iVar8 = _unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x60),&local_38);
  lStack_d0 = local_38;
  iVar9 = _unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x60),&local_c8);
  iVar10 = _unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x60),auStack_c0);
  uVar3 = local_3c;
  iVar11 = _unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x60),auStack_c0 + 1);
  iVar12 = _unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x60),auStack_c0 + 2);
  iVar13 = _unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x60),auStack_c0 + 3);
  iVar14 = _unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x60),auStack_c0 + 4);
  iVar15 = _unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x60),&local_38);
  uVar21 = local_c8;
  uVar2 = 0xffffffff;
  if (((iVar15 == 0 && iVar14 == 0) && iVar13 == 0) &&
      ((iVar12 == 0 && iVar11 == 0) &&
      ((iVar10 == 0 && uVar3 == 0) &&
      (iVar9 == 0 && ((iVar8 == 0 && iVar7 == 0) && (iVar6 == 0 && iVar1 == 0)))))) {
    uVar2 = local_40;
  }
  if ((local_58 != 0) && (uVar2 == 0)) {
    uVar20 = local_50;
    if (local_c8 < local_50) {
      *(undefined1 *)(local_58 + local_c8) = 0;
      uVar20 = local_c8;
    }
    uVar2 = 0;
    if (local_50 != 0 && local_c8 != 0) {
      uVar17 = (**(code **)(param_1 + 8))
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),local_58,
                          uVar20);
      uVar2 = -(uint)(uVar17 != uVar20);
    }
    uVar21 = uVar21 - uVar20;
  }
  uVar20 = auStack_c0[0];
  if (auStack_c0[0] != 0 && uVar2 == 0) {
    uVar17 = 0;
    uVar2 = 0;
    if (uVar21 != 0) {
      pcVar18 = *(code **)(param_1 + 0x20);
      if (pcVar18 == (code *)0x0) {
        pcVar18 = *(code **)(param_1 + 0x50);
      }
      lVar16 = (*pcVar18)(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),uVar21,1);
      uVar2 = -(uint)(lVar16 != 0);
    }
    do {
      iVar1 = _unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x60),&local_70);
      iVar6 = _unz64local_getShort(param_1,*(undefined8 *)(param_1 + 0x60),&local_48);
      lVar16 = local_48;
      if (iVar6 != 0 || iVar1 != 0) {
        uVar2 = 0xffffffff;
      }
      if (local_70 == 1) {
        if (lStack_d0 == 0xffffffff) {
          iVar1 = _unz64local_getLong64(param_1,*(undefined8 *)(param_1 + 0x60),&lStack_d0);
          uVar2 = uVar2 | -(uint)(iVar1 != 0);
        }
        if (local_d8 == 0xffffffff) {
          iVar1 = _unz64local_getLong64(param_1,*(undefined8 *)(param_1 + 0x60),&local_d8);
          uVar2 = uVar2 | -(uint)(iVar1 != 0);
        }
        if (local_38 == 0xffffffff) {
          iVar1 = _unz64local_getLong64(param_1,*(undefined8 *)(param_1 + 0x60),&local_38);
          uVar2 = uVar2 | -(uint)(iVar1 != 0);
        }
        uVar20 = auStack_c0[0];
        lVar16 = local_48;
        if (auStack_c0[2] == 0xffff) {
          iVar1 = _unz64local_getLong(param_1,*(undefined8 *)(param_1 + 0x60),local_110);
          uVar2 = uVar2 | -(uint)(iVar1 != 0);
          uVar20 = auStack_c0[0];
          lVar16 = local_48;
        }
      }
      else {
        pcVar18 = *(code **)(param_1 + 0x20);
        if (pcVar18 == (code *)0x0) {
          pcVar18 = *(code **)(param_1 + 0x50);
        }
        lVar19 = (*pcVar18)(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),local_48
                            ,1);
        uVar2 = uVar2 | -(uint)(lVar19 != 0);
      }
      uVar17 = uVar17 + lVar16 + 4;
    } while (uVar17 < uVar20);
  }
  if ((local_60 != (void *)0x0) && (uVar2 == 0)) {
    _memcpy(local_60,&local_108,0x88);
  }
  if ((local_68 != (long *)0x0) && (uVar2 == 0)) {
    *local_68 = local_38;
    uVar2 = 0;
  }
  return uVar2;
}

