// rea decompile_all
// name: __AMAuthInstallRembrandtLocalCreatePSIStitchData
// address: 0x29c400
// body: available
// range: 0x29c400-0x29cc7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x29cc6f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallRembrandtLocalCreatePSIStitchData
              (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  CC_LONG CVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  void *pvVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  ulong uVar18;
  uint unaff_R12D;
  size_t sVar19;
  CC_SHA512_CTX local_190;
  uint local_bc;
  undefined8 local_b8;
  ulong local_b0;
  uint *local_a8;
  undefined4 local_9c;
  void *local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uchar local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_90 = 0;
  uVar4 = *(int *)(*(long *)(param_1 + 0x30) + 4) - 0x5e;
  if (10 < uVar4) {
LAB_0029c478:
    _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData","invalid chipid");
    if (*(long *)(param_1 + 0x30) != 0) goto LAB_0029c49b;
    pcVar17 = "amai->bbParameters is NULL";
LAB_0029cb66:
    _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData",pcVar17);
    iVar5 = 1;
LAB_0029cb94:
    uVar7 = 0;
    lVar8 = 0;
    pvVar11 = (void *)0x0;
    goto LAB_0029c505;
  }
  if ((0x284U >> (uVar4 & 0x1f) & 1) == 0) {
    if ((0x401U >> (uVar4 & 0x1f) & 1) == 0) goto LAB_0029c478;
    local_9c = 0x68;
    unaff_R12D = 0x68;
  }
  else {
    local_9c = 0x100;
    unaff_R12D = 0x100;
  }
LAB_0029c49b:
  if (param_3 == (undefined8 *)0x0) {
    pcVar17 = "outPsiStitchDataData is NULL";
    goto LAB_0029cb66;
  }
  uVar7 = _CFGetAllocator(param_1);
  lVar8 = _CFDataCreateMutable(uVar7,0);
  if (lVar8 == 0) {
    _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData","stitchData is NULL");
    iVar5 = 2;
    goto LAB_0029cb94;
  }
  local_b8 = 0;
  uVar4 = *(int *)(*(long *)(param_1 + 0x30) + 4) - 0x5e;
  if ((10 < uVar4) || ((0x685U >> (uVar4 & 0x1f) & 1) == 0)) {
    _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData","invalid chipid");
    iVar5 = 99;
LAB_0029c502:
    uVar7 = 0;
    pvVar11 = (void *)0x0;
    goto LAB_0029c505;
  }
  local_bc = unaff_R12D;
  iVar5 = _AMAuthInstallRembrandtLocalCreateDigestForKey
                    (param_1,*(undefined8 *)(&DAT_0044bf38 + (ulong)uVar4 * 8),&local_b8);
  if (iVar5 != 0) goto LAB_0029c502;
  puVar9 = (uint *)_CFDataGetBytePtr(local_b8);
  uVar7 = _CFDataGetLength(local_b8);
  _CFDataAppendBytes(lVar8,puVar9,uVar7);
  local_78 = 0x706050403020100;
  uStack_70 = 0xf0e0d0c0b0a0908;
  local_88 = 0x13121110;
  uStack_84 = 0x17161514;
  uStack_80 = 0x1b1a1918;
  uStack_7c = 0x1f1e1d1c;
  _CFDataAppendBytes(lVar8,&local_88,0x20);
  uVar4 = *(int *)(*(long *)(param_1 + 0x30) + 4) - 0x5e;
  if (uVar4 < 0xb) {
    if ((0x284U >> (uVar4 & 0x1f) & 1) == 0) {
      if ((0x401U >> (uVar4 & 0x1f) & 1) == 0) goto LAB_0029c60f;
      local_a8 = (uint *)_CFDataGetBytePtr(param_2);
      uVar4 = *local_a8;
    }
    else {
      puVar9 = (uint *)_CFDataGetBytePtr(param_2);
      uVar4 = *puVar9;
    }
  }
  else {
LAB_0029c60f:
    uVar4 = _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData","invalid chipid");
  }
  uVar13 = (ulong)uVar4;
  local_98 = (void *)_CFDataGetLength(lVar8);
  lVar10 = _CFDataGetLength(lVar8);
  if ((long)uVar13 < lVar10 + 0xc) {
    uVar7 = _CFDataGetLength(lVar8);
    _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData",
                      "masteredReservationLength %d < CFDataGetLength(stitchData) %lld + snumLength %d"
                      ,uVar13,uVar7,0xc);
    iVar5 = 1;
    goto LAB_0029c502;
  }
  sVar19 = (uVar13 - (long)local_98) - 0xc;
  local_b0 = uVar13;
  if (sVar19 == 0) {
    local_98 = (void *)0x0;
  }
  else {
    pvVar11 = _malloc(sVar19);
    if (pvVar11 == (void *)0x0) {
      _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData","paddingBytes is NULL");
      iVar5 = 2;
      goto LAB_0029c502;
    }
    local_98 = pvVar11;
    _memset(pvVar11,0xff,sVar19);
    _CFDataAppendBytes(lVar8,local_98,sVar19);
  }
  uVar7 = _CFDataGetBytePtr(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
  uVar12 = _CFDataGetLength(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
  _CFDataAppendBytes(lVar8,uVar7,uVar12);
  lVar10 = _CFDataGetLength(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
  puVar3 = local_a8;
  if (lVar10 == 0xc) {
    uVar4 = *(int *)(*(long *)(param_1 + 0x30) + 4) - 0x5e;
    if (uVar4 < 0xb) {
      if ((0x284U >> (uVar4 & 0x1f) & 1) == 0) {
        if ((0x401U >> (uVar4 & 0x1f) & 1) == 0) goto LAB_0029c8b8;
        uVar4 = local_a8[1];
        _CC_SHA384_Init(&local_190);
        lVar10 = 2;
        do {
          uVar13 = *(ulong *)(puVar3 + lVar10 * 2 + -2);
          local_190.count[lVar10] =
               uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
               (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
               (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28
               | uVar13 << 0x38;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 10);
        local_190.count[1] = 0;
        local_190.count[0] = (ulong)uVar4;
        pvVar11 = (void *)_CFDataGetBytePtr(lVar8);
        CVar6 = _CFDataGetLength(lVar8);
        _CC_SHA384_Update(&local_190,pvVar11,CVar6);
        puVar14 = (undefined1 *)_CFDataGetBytePtr(lVar8);
        uVar1 = *puVar14;
        uVar7 = _CFDataGetLength(lVar8);
        _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData",
                          "STITCH ptr 0x%x STITCH data 0x%x",uVar1,uVar7);
        _CC_SHA384_Final(local_68,&local_190);
        _AMAuthInstallCryptoCreateEcdsaSignatureWithSHA384
                  (param_1,&cf_bb_rembrandt_gold_leaf_private,local_68,&local_90,&local_9c);
      }
      else {
        local_a8 = (uint *)CONCAT44(local_a8._4_4_,puVar9[1]);
        _CC_SHA256_Init((CC_SHA256_CTX *)&local_190);
        lVar10 = 2;
        do {
          uVar4 = puVar9[lVar10];
          *(uint *)((long)local_190.count + lVar10 * 4) =
               uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 10);
        local_190.count[0] = (ulong)local_a8 & 0xffffffff;
        pvVar11 = (void *)_CFDataGetBytePtr(lVar8);
        CVar6 = _CFDataGetLength(lVar8);
        _CC_SHA256_Update((CC_SHA256_CTX *)&local_190,pvVar11,CVar6);
        _CC_SHA256_Final(local_68,(CC_SHA256_CTX *)&local_190);
        _AMAuthInstallCryptoCreateRsaSignatureWithSHA256
                  (param_1,&cf_bb_rembrandt_gold_leaf_private,local_68,&local_90);
        uVar13 = _CFDataGetLength(local_90);
        uVar4 = local_bc;
        if (uVar13 != local_bc) {
          uVar12 = _CFDataGetLength(local_90);
          pcVar17 = "CFDataGetLength(signatureData) %lld != signatureLength %d";
          goto LAB_0029cbf8;
        }
      }
    }
    else {
LAB_0029c8b8:
      _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData","invalid chipid");
    }
    if (local_90 == 0) {
      uVar7 = 0;
      _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData","amai is NULL");
      goto LAB_0029cc44;
    }
    switch(*(undefined4 *)(*(long *)(param_1 + 0x30) + 4)) {
    case 0x5e:
    case 0x68:
      uVar7 = _CFDataGetBytePtr();
      uVar12 = _CFDataGetLength(local_90);
      _CFDataAppendBytes(lVar8,uVar7,uVar12);
      _CFDataAppendBytes(lVar8,&_kGoldLeafCertificate_ice18_EC,0x1cf);
      _CFDataAppendBytes(lVar8,&_kRootGoldCertificate_ice18_EC,0x1c2);
      uVar13 = _CFDataGetLength(lVar8);
      _CFDataIncreaseLength(lVar8,0x146f);
      lVar10 = _CFDataGetMutableBytePtr(lVar8);
      _memset((void *)((uVar13 & 0xffffffff) + lVar10),0xff,0x146f);
      lVar10 = _CFDataGetLength(local_90);
      lVar10 = local_b0 + lVar10 + 0x1800;
      break;
    default:
      _CFDataGetLength(lVar8);
      uVar7 = 0;
      goto LAB_0029ca56;
    case 0x60:
      uVar7 = _CFGetAllocator(param_1);
      uVar7 = _CFDataCreateMutableCopy(uVar7,0,local_90);
      lVar10 = _CFDataGetMutableBytePtr(uVar7);
      uVar13 = _CFDataGetLength(uVar7);
      if ((uVar13 & 0xfffffffe) != 0) {
        uVar2 = uVar13 >> 1;
        uVar18 = 0;
        do {
          uVar13 = uVar13 - 1;
          uVar1 = *(undefined1 *)(lVar10 + (uVar13 & 0xffffffff));
          *(undefined1 *)(lVar10 + (uVar13 & 0xffffffff)) = *(undefined1 *)(lVar10 + uVar18);
          *(undefined1 *)(lVar10 + uVar18) = uVar1;
          uVar18 = uVar18 + 1;
        } while ((uVar2 & 0x7fffffff) != uVar18);
      }
      uVar12 = _CFDataGetBytePtr(uVar7);
      uVar16 = _CFDataGetLength(uVar7);
      _CFDataAppendBytes(lVar8,uVar12,uVar16);
      _CFDataAppendBytes(lVar8,&_kRootGoldCertificate,0x21c);
      _CFDataAppendBytes(lVar8,&_kGoldLeafCertificate,0x31c);
      lVar10 = _CFDataGetLength(uVar7);
      lVar10 = local_b0 + lVar10 + 0x538;
      goto LAB_0029ca45;
    case 0x65:
    case 0x67:
      uVar7 = _CFDataGetBytePtr();
      uVar12 = _CFDataGetLength(local_90);
      _CFDataAppendBytes(lVar8,uVar7,uVar12);
      _CFDataAppendBytes(lVar8,&_kGoldLeafCertificate_x509,0x332);
      _CFDataAppendBytes(lVar8,&_kRootGoldCertificate_x509,0x33c);
      uVar13 = _CFDataGetLength(lVar8);
      _CFDataIncreaseLength(lVar8,0x118a);
      lVar10 = _CFDataGetMutableBytePtr(lVar8);
      _memset((void *)((uVar13 & 0xffffffff) + lVar10),0xff,0x118a);
      lVar10 = _CFDataGetLength(local_90);
      lVar10 = local_b0 + lVar10 + 0x17f8;
    }
    uVar7 = 0;
LAB_0029ca45:
    lVar15 = _CFDataGetLength(lVar8);
    if (lVar10 == lVar15) {
LAB_0029ca56:
      uVar12 = _CFRetain(lVar8);
      *param_3 = uVar12;
      iVar5 = 0;
      pvVar11 = local_98;
      goto LAB_0029c505;
    }
    uVar12 = _CFDataGetLength(lVar8);
    _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData",
                      "stitchData is %lld, expected size is %d",uVar12,lVar10);
  }
  else {
    uVar12 = _CFDataGetLength(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
    pcVar17 = "CFDataGetLength(amai->bbParameters->snum) %lld != snumLength %d";
    uVar4 = 0xc;
LAB_0029cbf8:
    uVar7 = 0;
    _AMAuthInstallLog(3,"_AMAuthInstallRembrandtLocalCreatePSIStitchData",pcVar17,uVar12,uVar4);
  }
LAB_0029cc44:
  iVar5 = 1;
  pvVar11 = local_98;
LAB_0029c505:
  _SafeRelease(lVar8);
  _SafeRelease(local_90);
  _SafeRelease(uVar7);
  _SafeFree(pvVar11);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

