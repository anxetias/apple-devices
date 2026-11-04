// rea decompile_all
// name: _unzlocal_GetCurrentFileInfoInternal
// address: 0x1bd02d
// body: available
// range: 0x1bd02d-0x1bd47d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _unzlocal_GetCurrentFileInfoInternal
              (long param_1,void *param_2,undefined8 *param_3,long param_4,ulong param_5,
              long param_6,ulong param_7,long param_8,ulong param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  uint local_f0 [2];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  undefined8 local_88;
  long local_80;
  undefined8 *local_78;
  void *local_70;
  long local_68;
  ulong local_60;
  long local_58;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (param_1 == 0) {
    iVar13 = -0x66;
  }
  else {
    local_78 = param_3;
    local_70 = param_2;
    local_68 = param_4;
    local_60 = param_5;
    local_58 = param_6;
    lVar10 = (**(code **)(param_1 + 0x20))
                       (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x68),0);
    iVar13 = -1;
    if (lVar10 == 0) {
      iVar1 = _ziplocal_getLong(param_1,*(undefined8 *)(param_1 + 0x40),&local_80);
      iVar13 = -1;
      if ((iVar1 == 0) && (iVar13 = -0x67, local_80 == 0x2014b50)) {
        iVar13 = 0;
      }
    }
    local_4c = _ziplocal_getShort(param_1,*(undefined8 *)(param_1 + 0x40),local_110);
    local_48 = _ziplocal_getShort(param_1,*(undefined8 *)(param_1 + 0x40),local_108);
    local_44 = _ziplocal_getShort(param_1,*(undefined8 *)(param_1 + 0x40),local_100);
    local_40 = _ziplocal_getShort(param_1,*(undefined8 *)(param_1 + 0x40),local_f8);
    uVar2 = _ziplocal_getLong(param_1,*(undefined8 *)(param_1 + 0x40),local_f0);
    local_94 = local_f0[0] >> 0x10 & 0x1f;
    local_90 = (local_f0[0] >> 0x15 & 0xf) - 1;
    local_8c = (local_f0[0] >> 0x19) + 0x7bc;
    local_98 = local_f0[0] >> 0xb & 0x1f;
    local_9c = local_f0[0] >> 5 & 0x3f;
    local_a0 = local_f0[0] * 2 & 0x3e;
    uVar3 = _ziplocal_getLong(param_1,*(undefined8 *)(param_1 + 0x40),local_e8);
    uVar4 = _ziplocal_getLong(param_1,*(undefined8 *)(param_1 + 0x40),local_e0);
    uVar5 = _ziplocal_getLong(param_1,*(undefined8 *)(param_1 + 0x40),local_d8);
    uVar6 = _ziplocal_getShort(param_1,*(undefined8 *)(param_1 + 0x40),&local_d0);
    local_3c = _ziplocal_getShort(param_1,*(undefined8 *)(param_1 + 0x40),&local_c8);
    local_38 = _ziplocal_getShort(param_1,*(undefined8 *)(param_1 + 0x40),&local_c0);
    local_34 = _ziplocal_getShort(param_1,*(undefined8 *)(param_1 + 0x40),local_b8);
    uVar7 = _ziplocal_getShort(param_1,*(undefined8 *)(param_1 + 0x40),local_b0);
    uVar8 = _ziplocal_getLong(param_1,*(undefined8 *)(param_1 + 0x40),local_a8);
    uVar9 = _ziplocal_getLong(param_1,*(undefined8 *)(param_1 + 0x40),&local_88);
    auVar15._4_4_ = uVar7;
    auVar15._0_4_ = uVar9 | uVar8;
    auVar15._12_4_ = local_38;
    auVar15._8_4_ = local_34;
    auVar16._4_4_ = uVar6 | uVar5 | uVar4 | uVar3 | uVar2;
    auVar16._0_4_ = local_3c;
    auVar16._12_4_ = local_44;
    auVar16._8_4_ = local_40;
    if (local_48 != 0 || local_4c != 0) {
      iVar13 = -1;
    }
    if (auVar16 != (undefined1  [16])0x0 || auVar15 != (undefined1  [16])0x0) {
      iVar13 = -1;
    }
    uVar14 = local_d0;
    if ((local_68 != 0) && (iVar13 == 0)) {
      uVar14 = local_60;
      if (local_d0 < local_60) {
        *(undefined1 *)(local_68 + local_d0) = 0;
        uVar14 = local_d0;
      }
      iVar13 = 0;
      if (local_60 != 0 && local_d0 != 0) {
        uVar11 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),local_68
                            ,uVar14);
        iVar13 = -(uint)(uVar11 != uVar14);
      }
      uVar14 = local_d0 - uVar14;
    }
    if ((local_58 != 0) && (iVar13 == 0)) {
      uVar11 = param_7;
      if (local_c8 < param_7) {
        uVar11 = local_c8;
      }
      if (uVar14 == 0) {
        iVar1 = 0;
        uVar14 = 0;
      }
      else {
        lVar10 = (**(code **)(param_1 + 0x20))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),uVar14,1
                           );
        if (lVar10 == 0) {
          uVar14 = 0;
        }
        iVar1 = -(uint)(lVar10 != 0);
      }
      iVar13 = iVar1;
      if (param_7 != 0 && local_c8 != 0) {
        uVar12 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),local_58
                            ,uVar11);
        iVar13 = -1;
        if (uVar12 == uVar11) {
          iVar13 = iVar1;
        }
      }
      local_c8 = local_c8 - uVar11;
    }
    if ((param_8 != 0) && (iVar13 == 0)) {
      uVar11 = param_9;
      if (local_c0 < param_9) {
        *(undefined1 *)(param_8 + local_c0) = 0;
        uVar11 = local_c0;
      }
      if (local_c8 + uVar14 == 0) {
        iVar1 = 0;
      }
      else {
        lVar10 = (**(code **)(param_1 + 0x20))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                            local_c8 + uVar14,1);
        iVar1 = -(uint)(lVar10 != 0);
      }
      iVar13 = iVar1;
      if (param_9 != 0 && local_c0 != 0) {
        uVar14 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_8,
                            uVar11);
        iVar13 = -1;
        if (uVar14 == uVar11) {
          iVar13 = iVar1;
        }
      }
    }
    if ((local_70 != (void *)0x0) && (iVar13 == 0)) {
      _memcpy(local_70,local_110,0x88);
    }
    if ((local_78 != (undefined8 *)0x0) && (iVar13 == 0)) {
      *local_78 = local_88;
      iVar13 = 0;
    }
  }
  return iVar13;
}

