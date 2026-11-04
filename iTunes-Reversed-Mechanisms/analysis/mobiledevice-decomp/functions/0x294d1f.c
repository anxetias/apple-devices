// rea decompile_all
// name: __AMAuthInstallMonetLocalCreateStitchData
// address: 0x294d1f
// body: available
// range: 0x294d1f-0x2957f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2957f4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallMonetLocalCreateStitchData
              (long param_1,CC_LONG param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  byte bVar1;
  int iVar2;
  CC_LONG aCVar3 [2];
  ulong *data;
  long lVar4;
  CC_LONG CVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  uchar *puVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long lStack_1c0;
  undefined1 local_1b0 [112];
  undefined8 *local_140;
  ulong local_138;
  long local_130;
  long local_128;
  uint local_11c;
  CC_LONG local_118 [2];
  ulong *local_110;
  CC_LONG local_108 [2];
  undefined8 local_100;
  CC_LONG local_f8;
  CC_LONG local_f4;
  long local_f0;
  long local_e8;
  uchar *local_e0;
  long local_d8;
  byte local_c9;
  ulong local_c8;
  uchar local_c0 [56];
  ulong local_88;
  uchar local_80 [40];
  ulong local_58;
  uchar local_50 [24];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_108[0] = 0;
  local_108[1] = 0;
  local_100._0_4_ = 0;
  local_100._4_4_ = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_1b0._104_8_ = &cf_bb_monet_rom_enandprog_private;
  if (param_2 == 1) {
    local_1b0._104_8_ = &cf_bb_monet_rom_dbl_private;
  }
  iVar8 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  local_140 = param_5;
  local_f8 = param_2;
  local_e8 = param_4;
  if (iVar8 == 0x3b0e1) {
LAB_00294de4:
    piVar10 = (int *)_CFDataGetBytePtr(param_3);
    iVar8 = 0x20;
  }
  else if ((((iVar8 == 0x7f0e1) || (iVar8 == 0xe50e1)) || (iVar8 == 0x1440e1)) ||
          (((iVar8 == 0x1720e1 || (iVar8 == 0x19f0e1)) ||
           ((iVar8 == 0x1fe0e1 || (iVar8 == 0x2af0e1)))))) {
    piVar10 = (int *)_CFDataGetBytePtr(param_3);
    iVar8 = 0x30;
  }
  else {
    if (((iVar8 == 0x7f50e1) || (iVar8 == 0x9540e1)) || (iVar8 == 0x9210e1)) goto LAB_00294de4;
    piVar10 = (int *)_CFDataGetBytePtr(param_3);
    iVar8 = 0x14;
  }
  iVar2 = *piVar10;
  uVar11 = _CFGetAllocator(param_1);
  local_d8 = _CFDataCreateMutable(uVar11,0);
  if (local_d8 != 0) {
    iVar6 = *(int *)(*(long *)(param_1 + 0x30) + 4);
    local_f0 = param_1;
    if ((((((iVar6 != 0x3b0e1) && (iVar6 != 0x7f0e1)) && (iVar6 != 0xe50e1)) &&
         ((iVar6 != 0x1440e1 && (iVar6 != 0x1720e1)))) && (iVar6 != 0x19f0e1)) &&
       (((iVar6 != 0x1fe0e1 && (iVar6 != 0x2af0e1)) && (iVar6 != 0x9540e1)))) {
      iVar6 = _AMAuthInstallMonetLocalCreateDigestForKey
                        (param_1,&cf_bb_monet_ticket_root_public,local_108);
      if (iVar6 != 0) {
        uVar11 = 0;
        lVar12 = 0;
        lVar22 = local_d8;
        goto LAB_00295534;
      }
      local_e0 = (uchar *)_CFDataGetBytePtr(local_108);
      uVar11 = _CFDataGetLength(local_108);
      lVar22 = local_d8;
      _CFDataAppendBytes(local_d8,local_e0,uVar11);
      local_e0 = (uchar *)_CFDataGetBytePtr(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
      uVar11 = _CFDataGetLength(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
      _CFDataAppendBytes(lVar22,local_e0,uVar11);
      iVar6 = _CFDataGetLength(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
      uVar17 = (ulong)(uint)(iVar2 - (iVar6 + iVar8));
      _CFDataIncreaseLength(lVar22,uVar17);
      lVar12 = _CFDataGetMutableBytePtr(lVar22);
      lVar22 = _CFDataGetLength(lVar22);
      _memset((void *)((lVar12 + lVar22) - uVar17),0xff,uVar17);
    }
    lVar22 = local_f0;
    uVar11 = _CFGetAllocator(local_f0);
    lVar12 = _CFDataCreateMutable(uVar11,iVar8);
    if (lVar12 != 0) {
      _CFDataSetLength(lVar12,iVar8);
      iVar8 = *(int *)(*(long *)(lVar22 + 0x30) + 4);
      if (((((iVar8 == 0x3b0e1) || (iVar8 == 0x7f0e1)) || (iVar8 == 0xe50e1)) ||
          ((iVar8 == 0x1440e1 || (iVar8 == 0x1720e1)))) ||
         ((iVar8 == 0x19f0e1 || ((iVar8 == 0x1fe0e1 || (iVar8 == 0x2af0e1)))))) {
LAB_00294f9e:
        _SafeRelease(lVar12);
        if (local_e8 == 0) {
          uVar11 = 0;
          _AMAuthInstallLog(3,"_AMAuthInstallMonetLocalCreateStitchData",
                            "hashSectionDigestData is NULL");
          iVar6 = 1;
          lVar22 = local_d8;
          goto LAB_00295534;
        }
        lVar12 = _CFDataCreateMutableCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
      }
      else if (iVar8 == 0x7f50e1) {
LAB_00294f25:
        CVar5 = piVar10[1];
        _CC_SHA256_Init((CC_SHA256_CTX *)local_1b0);
        lVar4 = local_d8;
        lVar13 = 2;
        do {
          uVar7 = piVar10[lVar13];
          *(uint *)(local_1b0 + lVar13 * 4) =
               uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 10);
        local_1b0._4_4_ = 0;
        local_1b0._0_4_ = CVar5;
        pvVar14 = (void *)_CFDataGetBytePtr(local_d8);
        CVar5 = _CFDataGetLength(lVar4);
        _CC_SHA256_Update((CC_SHA256_CTX *)local_1b0,pvVar14,CVar5);
        puVar15 = (uchar *)_CFDataGetMutableBytePtr(lVar12);
        _CC_SHA256_Final(puVar15,(CC_SHA256_CTX *)local_1b0);
      }
      else {
        if (iVar8 == 0x9540e1) goto LAB_00294f9e;
        if (iVar8 == 0x9210e1) goto LAB_00294f25;
        __SHA1Partial_Init(piVar10 + 2,piVar10[1],(CC_SHA1_CTX *)local_1b0);
        lVar13 = local_d8;
        pvVar14 = (void *)_CFDataGetBytePtr(local_d8);
        CVar5 = _CFDataGetLength(lVar13);
        _CC_SHA1_Update((CC_SHA1_CTX *)local_1b0,pvVar14,CVar5);
        puVar15 = (uchar *)_CFDataGetMutableBytePtr(lVar12);
        _CC_SHA1_Final(puVar15,(CC_SHA1_CTX *)local_1b0);
      }
      uVar7 = *(uint *)(*(long *)(lVar22 + 0x30) + 4);
      local_138 = (ulong)uVar7;
      local_f4 = 0x28;
      local_110 = &local_88;
      lStack_1c0 = 0x20;
      local_e0 = local_80;
      CVar5 = 0x28;
      if (local_138 != 0x3b0e1) {
        if (((((uVar7 == 0x7f0e1) || (uVar7 == 0xe50e1)) || (uVar7 == 0x1440e1)) ||
            ((uVar7 == 0x1720e1 || (uVar7 == 0x19f0e1)))) || (uVar7 == 0x1fe0e1)) {
LAB_00295050:
          local_110 = &local_c8;
          lStack_1c0 = 0x30;
          local_e0 = local_c0;
          CVar5 = 0x38;
        }
        else if (((uVar7 != 0x9540e1) && (CVar5 = local_f4, uVar7 != 0x7f50e1)) &&
                (uVar7 != 0x9210e1)) {
          if (uVar7 == 0x2af0e1) goto LAB_00295050;
          local_110 = &local_58;
          lStack_1c0 = 0x14;
          local_e0 = local_50;
          CVar5 = 0x1c;
        }
      }
      local_f4 = CVar5;
      local_c9 = local_f8 != 2;
      local_130 = lStack_1c0;
      local_e8 = lVar12;
      lVar12 = _CFDataGetBytePtr(*(undefined8 *)(*(long *)(lVar22 + 0x30) + 0x10));
      local_11c = (uint)*(byte *)(lVar12 + 3);
      lVar12 = _CFDataGetBytePtr(*(undefined8 *)(*(long *)(lVar22 + 0x30) + 0x10));
      bVar1 = *(byte *)(lVar12 + 2);
      puVar16 = (uint *)_CFDataGetBytePtr(*(undefined8 *)(*(long *)(lVar22 + 0x30) + 0x10));
      uVar7 = *puVar16;
      piVar10 = (int *)_CFDataGetBytePtr(*(undefined8 *)(*(long *)(lVar22 + 0x30) + 0x10));
      iVar8 = *piVar10;
      uVar11 = _CFGetAllocator(lVar22);
      local_128 = _CFDataCreateMutable(uVar11,0);
      lVar22 = local_130;
      if (local_128 == 0) {
        iVar6 = 2;
      }
      else {
        _CFDataSetLength(local_128,local_130);
        lVar12 = _CFDataGetLength(local_e8);
        if (lVar12 == lVar22) {
          uVar17 = local_138 << 0x20;
          uVar24 = (ulong)local_c9;
          uVar23 = (uint)bVar1 * 0x100 + local_11c;
          uVar11 = _CFDataGetBytePtr(local_e8);
          ___memcpy_chk(local_e0,uVar11,local_130,0x30);
          lVar22 = local_f0;
          CVar5 = local_f4;
          data = local_110;
          uVar21 = local_1b0._104_8_;
          *local_110 = (uVar24 << 0x38) + 0x3536363636363636;
          iVar2 = *(int *)(*(long *)(local_f0 + 0x30) + 4);
          if (iVar2 == 0x3b0e1) {
LAB_00295210:
            _CC_SHA256(local_110,local_f4,local_e0);
          }
          else if (((((iVar2 == 0x7f0e1) || (iVar2 == 0xe50e1)) || (iVar2 == 0x1440e1)) ||
                   ((iVar2 == 0x1720e1 || (iVar2 == 0x19f0e1)))) ||
                  ((iVar2 == 0x1fe0e1 || (iVar2 == 0x2af0e1)))) {
            _CC_SHA384(local_110,local_f4,local_e0);
          }
          else {
            if (((iVar2 == 0x7f50e1) || (iVar2 == 0x9540e1)) || (iVar2 == 0x9210e1))
            goto LAB_00295210;
            _CC_SHA1(local_110,local_f4,local_e0);
          }
          lVar12 = local_128;
          uVar17 = ((iVar8 << 0x18 | (uVar7 & 0xff00) << 8 | uVar23) | uVar17) ^ 0x5c5c5c5c5c5c5c5c;
          *data = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                  (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                  (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                  (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
          iVar8 = *(int *)(*(long *)(lVar22 + 0x30) + 4);
          if (iVar8 == 0x3b0e1) {
LAB_002952a9:
            puVar15 = (uchar *)_CFDataGetMutableBytePtr(local_128);
            _CC_SHA256(data,CVar5,puVar15);
          }
          else if ((((iVar8 == 0x7f0e1) || (iVar8 == 0xe50e1)) || (iVar8 == 0x1440e1)) ||
                  (((iVar8 == 0x1720e1 || (iVar8 == 0x19f0e1)) ||
                   ((iVar8 == 0x1fe0e1 || (iVar8 == 0x2af0e1)))))) {
            puVar15 = (uchar *)_CFDataGetMutableBytePtr(local_128);
            _CC_SHA384(data,CVar5,puVar15);
          }
          else {
            if (((iVar8 == 0x7f50e1) || (iVar8 == 0x9540e1)) || (iVar8 == 0x9210e1))
            goto LAB_002952a9;
            puVar15 = (uchar *)_CFDataGetMutableBytePtr(local_128);
            _CC_SHA1(data,CVar5,puVar15);
          }
          uVar11 = _CFRetain(lVar12);
          _SafeRelease(lVar12);
          iVar8 = *(int *)(*(long *)(local_f0 + 0x30) + 4);
          if (((((iVar8 == 0x7f0e1) || (iVar8 == 0xe50e1)) || (iVar8 == 0x1440e1)) ||
              ((iVar8 == 0x1720e1 || (iVar8 == 0x19f0e1)))) ||
             ((iVar8 == 0x2af0e1 || (iVar8 == 0x1fe0e1)))) {
            iVar6 = __AMAuthInstallMonetLocalCreateECCSignature(local_f0,uVar21,uVar11,&local_100);
            lVar12 = local_e8;
          }
          else {
            local_c8 = 0;
            iVar6 = _AMAuthInstallCryptoGetRsaKeyLength(local_f0,uVar21,&local_88);
            if (iVar6 == 0) {
              uVar7 = _CFDataGetLength(uVar11);
              lVar22 = local_f0;
              if (uVar7 < (int)local_88 - 3U) {
                uVar18 = _CFGetAllocator(local_f0);
                uVar18 = _CFDataCreateMutable(uVar18,0);
                _CFDataAppendBytes(uVar18,&_kLeadingBytes,2);
                iVar8 = _CFDataGetLength(uVar11);
                uVar17 = (ulong)(((int)local_88 - iVar8) - 3);
                _CFDataIncreaseLength(uVar18,uVar17);
                lVar12 = _CFDataGetMutableBytePtr(uVar18);
                _memset((void *)(lVar12 + 2),0xff,uVar17);
                _CFDataAppendBytes(uVar18,&_kCentralBytes,1);
                uVar19 = _CFDataGetBytePtr(uVar11);
                uVar20 = _CFDataGetLength(uVar11);
                _CFDataAppendBytes(uVar18,uVar19,uVar20);
                uVar19 = _CFDataGetBytePtr(uVar18);
                uVar9 = _CFDataGetLength(uVar18);
                iVar6 = _AMAuthInstallCryptoCreateRsaCustomSignature
                                  (lVar22,uVar21,uVar19,uVar9,&local_c8);
                if (iVar6 == 0) {
                  local_100 = _CFRetain(local_c8);
                  iVar6 = 0;
                }
              }
              else {
                uVar18 = 0;
                _AMAuthInstallLog(3,"_AMAuthInstallMonetLocalCreateSignature",
                                  "data to be signed is too large");
                iVar6 = 1;
              }
            }
            else {
              uVar18 = 0;
            }
            lVar12 = local_e8;
            _SafeRelease(uVar18);
            _SafeRelease(local_c8);
          }
          uVar21 = local_100;
          lVar22 = local_d8;
          if (iVar6 == 0) {
            uVar18 = _CFDataGetBytePtr(local_100);
            uVar21 = _CFDataGetLength(uVar21);
            lVar22 = local_d8;
            _CFDataAppendBytes(local_d8,uVar18,uVar21);
            iVar6 = __AMAuthInstallMonetLocalCopyCertChain(local_f0,local_f8,local_118);
            aCVar3 = local_118;
            if (iVar6 == 0) {
              uVar21 = _CFDataGetBytePtr(local_118);
              uVar18 = _CFDataGetLength(aCVar3);
              _CFDataAppendBytes(lVar22,uVar21,uVar18);
              uVar21 = _CFRetain(lVar22);
              *local_140 = uVar21;
              iVar6 = 0;
            }
          }
          goto LAB_00295534;
        }
        iVar6 = 1;
      }
      _SafeRelease(local_128);
      uVar11 = 0;
      lVar22 = local_d8;
      lVar12 = local_e8;
      goto LAB_00295534;
    }
  }
  uVar11 = 0;
  lVar12 = 0;
  iVar6 = 2;
  lVar22 = local_d8;
LAB_00295534:
  _SafeRelease(local_108);
  _SafeRelease(lVar12);
  _SafeRelease(lVar22);
  _SafeRelease(uVar11);
  _SafeRelease(local_100);
  _SafeRelease(local_118);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

