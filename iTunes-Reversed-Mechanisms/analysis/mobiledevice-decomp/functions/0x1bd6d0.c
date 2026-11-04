// rea decompile_all
// name: _amai_unzOpenCurrentFile3
// address: 0x1bd6d0
// body: available
// range: 0x1bd6d0-0x1bdcfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bdcf7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _amai_unzOpenCurrentFile3
              (undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,byte *param_5
              )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  void *pvVar15;
  uLongf *puVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  byte bVar22;
  byte *pbVar23;
  bool bVar24;
  bool bVar25;
  long local_a0;
  long local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  long local_80;
  byte *local_78;
  int local_6c;
  byte local_68 [12];
  int local_5c;
  ulong local_58;
  undefined8 local_50;
  long local_48 [2];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar8 = -0x66;
  if ((param_1 == (undefined8 *)0x0) || (param_1[0xe] == 0)) goto LAB_001bd928;
  local_90 = param_3;
  local_88 = param_2;
  if (param_1[0x24] != 0) {
    _amai_unzCloseCurrentFile(param_1);
  }
  lVar13 = (*(code *)param_1[4])(param_1[7],param_1[8],param_1[0xb] + param_1[0x23],0);
  if (lVar13 == 0) {
    local_78 = param_5;
    local_5c = param_4;
    local_6c = _ziplocal_getLong(param_1,param_1[8],local_48);
    local_80 = local_48[0];
    iVar8 = _ziplocal_getShort(param_1,param_1[8],&local_58);
    iVar9 = _ziplocal_getShort(param_1,param_1[8],local_68);
    iVar10 = _ziplocal_getShort(param_1,param_1[8],&local_58);
    local_50 = CONCAT44(local_50._4_4_,0xffffffff);
    uVar12 = 0xffffffff;
    if (iVar10 == 0) {
      uVar11 = 0;
      if (local_80 != 0x4034b50) {
        uVar11 = 0xffffff99;
      }
      uVar12 = 0xffffffff;
      if (iVar9 == 0 && (iVar8 == 0 && local_6c == 0)) {
        uVar12 = uVar11;
      }
      if ((iVar9 == 0 && (iVar8 == 0 && local_6c == 0)) && local_80 == 0x4034b50) {
        uVar12 = 0xffffff99;
        if ((local_58 == param_1[0x15]) &&
           (uVar12 = 0xffffff99, (local_58 & 0xfffffffffffffff7) == 0)) {
          uVar12 = 0;
        }
      }
    }
    iVar8 = _ziplocal_getLong(param_1,param_1[8],&local_58);
    iVar9 = _ziplocal_getLong(param_1,param_1[8],&local_58);
    if (((iVar9 == 0) &&
        (uVar12 = -(uint)(iVar8 != 0) | uVar12, uVar11 = local_50._4_4_,
        local_50 = CONCAT44(local_50._4_4_,uVar12), uVar12 == 0)) &&
       (local_50 = (ulong)local_50._4_4_ << 0x20, local_58 != param_1[0x17])) {
      uVar17 = 0xffffff99;
      if ((local_68[0] & 8) != 0) {
        uVar17 = 0;
      }
      local_50 = CONCAT44(uVar11,uVar17);
    }
    iVar9 = _ziplocal_getLong(param_1,param_1[8],&local_58);
    iVar8 = -1;
    if (((iVar9 == 0) && (iVar8 = (int)local_50, (int)local_50 == 0)) &&
       ((iVar8 = 0, local_58 != param_1[0x18] && (iVar8 = -0x67, (local_68[0] & 8) != 0)))) {
      iVar8 = 0;
    }
    iVar9 = _ziplocal_getLong(param_1,param_1[8],&local_58);
    bVar24 = true;
    if (iVar9 == 0 && iVar8 == 0) {
      if (local_58 == param_1[0x19]) {
        bVar24 = false;
      }
      else {
        bVar24 = (local_68[0] & 8) == 0;
      }
    }
    iVar8 = _ziplocal_getShort(param_1,param_1[8],&local_a0);
    bVar25 = false;
    if ((iVar8 == 0) && (bVar25 = false, !bVar24)) {
      bVar25 = local_a0 == param_1[0x1a];
    }
    iVar8 = _ziplocal_getShort(param_1,param_1[8],&local_98);
    if (iVar8 == 0) {
      iVar8 = -0x67;
      if (!bVar25) goto LAB_001bd928;
      lVar13 = param_1[0x23];
      puVar14 = _malloc(0x120);
      if (puVar14 != (undefined8 *)0x0) {
        local_50 = lVar13;
        pvVar15 = _malloc(0x4000);
        *puVar14 = pvVar15;
        puVar14[0x11] = lVar13 + local_a0 + 0x1e;
        *(int *)(puVar14 + 0x12) = (int)local_98;
        puVar14[0x13] = 0;
        *(int *)(puVar14 + 0x23) = local_5c;
        if (pvVar15 == (void *)0x0) {
          _free(puVar14);
        }
        else {
          puVar14[0x10] = 0;
          if (local_88 != (undefined4 *)0x0) {
            *local_88 = *(undefined4 *)(param_1 + 0x15);
          }
          if (local_90 != (undefined4 *)0x0) {
            *local_90 = 6;
            switch((uint)param_1[0x14] & 6) {
            case 0:
              goto switchD_001bda06_caseD_0;
            case 2:
              uVar17 = 9;
              break;
            case 4:
              uVar17 = 2;
              break;
            case 6:
              uVar17 = 1;
            }
            *local_90 = uVar17;
          }
switchD_001bda06_caseD_0:
          puVar14[0x15] = param_1[0x17];
          iVar8 = 0;
          puVar14[0x14] = 0;
          lVar13 = param_1[0x15];
          puVar14[0x21] = lVar13;
          puVar14[0x20] = param_1[8];
          uVar1 = param_1[1];
          uVar2 = param_1[2];
          uVar3 = param_1[3];
          uVar4 = param_1[4];
          uVar5 = param_1[5];
          uVar6 = param_1[6];
          uVar7 = param_1[7];
          puVar14[0x18] = *param_1;
          puVar14[0x19] = uVar1;
          puVar14[0x1a] = uVar2;
          puVar14[0x1b] = uVar3;
          puVar14[0x1c] = uVar4;
          puVar14[0x1d] = uVar5;
          puVar14[0x1e] = uVar6;
          puVar14[0x1f] = uVar7;
          puVar14[0x22] = param_1[0xb];
          puVar14[6] = 0;
          if (local_5c == 0 && lVar13 == 8) {
            puVar14[1] = 0;
            *(undefined4 *)(puVar14 + 2) = 0;
            puVar14[9] = 0;
            puVar14[10] = 0;
            puVar14[0xb] = 0;
            iVar9 = _inflateInit2_((z_streamp)(puVar14 + 1),-0xf,"1.2.12",0x70);
            if (iVar9 != 0) {
              _free(puVar14);
              iVar8 = iVar9;
              goto LAB_001bd928;
            }
            puVar14[0x10] = 1;
            local_50 = param_1[0x23];
          }
          pbVar23 = local_78;
          uVar1 = param_1[0x19];
          puVar14[0x16] = param_1[0x18];
          puVar14[0x17] = uVar1;
          puVar14[0xf] = (local_98 + local_a0 & 0xffffffffU) + 0x1e + local_50;
          *(undefined4 *)(puVar14 + 2) = 0;
          param_1[0x24] = puVar14;
          if (local_78 == (byte *)0x0) goto LAB_001bd928;
          puVar16 = _get_crc_table();
          param_1[0x29] = puVar16;
          param_1[0x26] = 0x12345678;
          param_1[0x27] = 0x23456789;
          param_1[0x28] = 0x34567890;
          bVar22 = *pbVar23;
          if (bVar22 != 0) {
            uVar18 = 0x12345678;
            lVar13 = 0x23456789;
            uVar19 = 0x34567890;
            do {
              pbVar23 = pbVar23 + 1;
              uVar18 = uVar18 >> 8 ^ puVar16[(byte)((byte)uVar18 ^ bVar22)];
              param_1[0x26] = uVar18;
              lVar13 = ((uVar18 & 0xff) + lVar13) * 0x8088405 + 1;
              param_1[0x27] = lVar13;
              uVar19 = uVar19 >> 8 ^
                       puVar16[((uint)uVar19 ^ (uint)((ulong)lVar13 >> 0x18) & 0xff) & 0xff];
              param_1[0x28] = uVar19;
              bVar22 = *pbVar23;
            } while (bVar22 != 0);
          }
          lVar13 = (*(code *)param_1[4])
                             (param_1[7],param_1[8],
                              *(long *)(param_1[0x24] + 0x110) + *(long *)(param_1[0x24] + 0x78),0);
          if (lVar13 == 0) {
            uVar18 = (*(code *)param_1[1])(param_1[7],param_1[8],local_48,0xc);
            iVar8 = -0x68;
            if (0xb < uVar18) {
              lVar13 = param_1[0x29];
              uVar18 = param_1[0x28];
              uVar19 = param_1[0x26];
              lVar21 = param_1[0x27];
              lVar20 = 0;
              do {
                uVar12 = (uint)uVar18;
                bVar22 = (byte)((uVar12 & 0xfffd ^ 3) * (uVar12 | 2) >> 8) ^
                         *(byte *)((long)local_48 + lVar20);
                *(byte *)((long)local_48 + lVar20) = bVar22;
                uVar19 = uVar19 >> 8 ^ *(ulong *)(lVar13 + (ulong)(byte)((byte)uVar19 ^ bVar22) * 8)
                ;
                param_1[0x26] = uVar19;
                lVar21 = ((uVar19 & 0xff) + lVar21) * 0x8088405 + 1;
                param_1[0x27] = lVar21;
                uVar18 = uVar18 >> 8 ^
                         *(ulong *)(lVar13 + (ulong)(((uint)((ulong)lVar21 >> 0x18) & 0xff ^ uVar12)
                                                    & 0xff) * 8);
                param_1[0x28] = uVar18;
                lVar20 = lVar20 + 1;
              } while (lVar20 != 0xc);
              *(long *)(param_1[0x24] + 0x78) = *(long *)(param_1[0x24] + 0x78) + 0xc;
              *(undefined4 *)(param_1 + 0x25) = 1;
              iVar8 = 0;
            }
            goto LAB_001bd928;
          }
        }
      }
      iVar8 = -0x68;
      goto LAB_001bd928;
    }
  }
  iVar8 = -0x67;
LAB_001bd928:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

