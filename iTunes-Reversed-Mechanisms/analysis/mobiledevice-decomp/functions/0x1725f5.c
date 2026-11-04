// rea decompile_all
// name: _unzOpenCurrentFile
// address: 0x1725f5
// body: available
// range: 0x1725f5-0x172a49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _unzOpenCurrentFile(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  void *pvVar18;
  uint uVar19;
  bool bVar20;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  byte local_50 [8];
  long local_48;
  long local_40;
  ulong local_38;
  
  if (param_1 == (undefined8 *)0x0) {
    return -0x66;
  }
  if (param_1[0x12] == 0) {
    return -0x66;
  }
  if (param_1[0x28] != 0) {
    _unzCloseCurrentFile(param_1);
  }
  pcVar15 = (code *)param_1[4];
  if (pcVar15 == (code *)0x0) {
    pcVar15 = (code *)param_1[10];
  }
  lVar16 = (*pcVar15)(param_1[7],param_1[0xc],param_1[0xf] + param_1[0x27]);
  if (lVar16 == 0) {
    uVar10 = _unz64local_getLong(param_1,param_1[0xc],&local_70);
    local_48 = CONCAT44(local_48._4_4_,uVar10);
    iVar11 = _unz64local_getShort(param_1,param_1[0xc],&local_38);
    iVar12 = _unz64local_getShort(param_1,param_1[0xc],local_50);
    iVar13 = _unz64local_getShort(param_1,param_1[0xc],&local_38);
    local_40._0_4_ = 0xffffffff;
    uVar19 = 0xffffffff;
    if (iVar13 == 0) {
      uVar14 = 0;
      if (local_70 != 0x4034b50) {
        uVar14 = 0xffffff99;
      }
      uVar19 = 0xffffffff;
      if (iVar12 == 0 && (iVar11 == 0 && (int)local_48 == 0)) {
        uVar19 = uVar14;
      }
      if (((iVar12 == 0 && (iVar11 == 0 && (int)local_48 == 0)) && local_70 == 0x4034b50) &&
         (((local_38 != param_1[0x19] || (0xc < local_38)) ||
          (uVar19 = 0, (0x1101UL >> (local_38 & 0x3f) & 1) == 0)))) {
        uVar19 = 0xffffff99;
      }
    }
    iVar11 = _unz64local_getLong(param_1,param_1[0xc],&local_38);
    iVar12 = _unz64local_getLong(param_1,param_1[0xc],&local_38);
    if (((iVar12 == 0) && (local_40._0_4_ = -(uint)(iVar11 != 0) | uVar19, (uint)local_40 == 0)) &&
       ((local_40._0_4_ = 0, local_38 != param_1[0x1b] &&
        (local_40._0_4_ = 0xffffff99, (local_50[0] & 8) != 0)))) {
      local_40._0_4_ = 0;
    }
    iVar11 = _unz64local_getLong(param_1,param_1[0xc],&local_38);
    uVar19 = 0xffffffff;
    if (((iVar11 == 0) && (uVar19 = (uint)local_40, (uint)local_40 == 0 && local_38 != 0xffffffff))
       && ((uVar19 = 0, local_38 != param_1[0x1c] && (uVar19 = 0xffffff99, (local_50[0] & 8) != 0)))
       ) {
      uVar19 = 0;
    }
    iVar11 = _unz64local_getLong(param_1,param_1[0xc],&local_38);
    uVar14 = 0xffffffff;
    if ((((iVar11 == 0) && (uVar14 = uVar19, uVar19 == 0 && local_38 != 0xffffffff)) &&
        (uVar14 = 0, local_38 != param_1[0x1d])) && (uVar14 = 0xffffff99, (local_50[0] & 8) != 0)) {
      uVar14 = 0;
    }
    iVar11 = _unz64local_getShort(param_1,param_1[0xc],&local_60);
    if ((iVar11 == 0) && (uVar14 == 0)) {
      bVar20 = local_60 == param_1[0x1e];
    }
    else {
      bVar20 = false;
    }
    iVar11 = _unz64local_getShort(param_1,param_1[0xc],&local_68);
    if (iVar11 == 0) {
      if (!bVar20) {
        return -0x67;
      }
      local_40 = local_60;
      lVar16 = param_1[0x27];
      puVar17 = _malloc(0x140);
      lVar9 = local_40;
      iVar11 = -0x68;
      if (puVar17 == (undefined8 *)0x0) {
        return -0x68;
      }
      local_48 = local_68;
      lVar1 = local_40 + lVar16;
      local_58 = lVar16;
      pvVar18 = _malloc(0x4000);
      lVar16 = local_48;
      *puVar17 = pvVar18;
      puVar17[0x11] = lVar1 + 0x1e;
      *(int *)(puVar17 + 0x12) = (int)local_48;
      puVar17[0x13] = 0;
      *(undefined4 *)(puVar17 + 0x27) = 0;
      if (pvVar18 != (void *)0x0) {
        puVar17[0x10] = 0;
        puVar17[0x16] = param_1[0x1b];
        puVar17[0x14] = 0;
        puVar17[0x15] = 0;
        lVar1 = param_1[0x19];
        puVar17[0x25] = lVar1;
        puVar17[0x24] = param_1[0xc];
        uVar2 = param_1[1];
        uVar3 = param_1[2];
        uVar4 = param_1[3];
        uVar5 = param_1[4];
        uVar6 = param_1[5];
        uVar7 = param_1[6];
        uVar8 = param_1[7];
        puVar17[0x19] = *param_1;
        puVar17[0x1a] = uVar2;
        puVar17[0x1b] = uVar3;
        puVar17[0x1c] = uVar4;
        puVar17[0x1d] = uVar5;
        puVar17[0x1e] = uVar6;
        puVar17[0x1f] = uVar7;
        puVar17[0x20] = uVar8;
        uVar2 = param_1[9];
        puVar17[0x21] = param_1[8];
        puVar17[0x22] = uVar2;
        puVar17[0x23] = param_1[10];
        puVar17[0x26] = param_1[0xf];
        puVar17[6] = 0;
        if (lVar1 == 8) {
          puVar17[1] = 0;
          *(undefined4 *)(puVar17 + 2) = 0;
          puVar17[9] = 0;
          puVar17[10] = 0;
          puVar17[0xb] = 0;
          iVar11 = _inflateInit2_((z_streamp)(puVar17 + 1),-0xf,"1.2.12",0x70);
          if (iVar11 != 0) goto LAB_00172a26;
          puVar17[0x10] = 8;
          local_58 = param_1[0x27];
        }
        else if (lVar1 == 0xc) {
          *(undefined4 *)(puVar17 + 0x27) = 1;
        }
        uVar2 = param_1[0x1d];
        puVar17[0x17] = param_1[0x1c];
        puVar17[0x18] = uVar2;
        puVar17[0xf] = (lVar16 + lVar9 & 0xffffffffU) + local_58 + 0x1e;
        *(undefined4 *)(puVar17 + 2) = 0;
        param_1[0x28] = puVar17;
        *(undefined4 *)(param_1 + 0x29) = 0;
        return 0;
      }
LAB_00172a26:
      _free(puVar17);
      return iVar11;
    }
  }
  return -0x67;
}

