// name: FUN_1002e1295
// address: 1002e1295

undefined1 FUN_1002e1295(ulong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined1 local_1d0 [8];
  ulong local_1c8;
  long local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  long local_1a0;
  ulong local_198;
  long local_190;
  byte local_188 [304];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != 0) {
    uVar4 = 0;
    goto LAB_1002e17f5;
  }
  FUN_1001c631b(&DAT_100741c50,local_188,0x126);
  uVar10 = 1;
  lVar5 = 0;
  do {
    uVar11 = uVar10 >> 1;
    uVar1 = uVar10 & 1;
    uVar10 = uVar11 ^ 0xb8;
    if (uVar1 == 0) {
      uVar10 = uVar11;
    }
    local_188[lVar5] = local_188[lVar5] ^ (byte)uVar10 ^ 0xc3;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x126);
  local_1b0 = 0;
  lVar5 = FUN_100170e14(0,local_188,0x126,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
  local_1c0 = lVar5;
  if (lVar5 == 0) {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_4a = "rsaPublicKeyData != nullptr";
LAB_1002e16e0:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
LAB_1002e1567:
    FUN_1001782e9(0,0);
    lVar6 = 0;
LAB_1002e1576:
    uVar4 = 0;
    lVar5 = 0;
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = FUN_100166547(0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140,
                          *(undefined8 *)PTR__kSecAttrKeyType_10082e908,
                          *(undefined8 *)PTR__kSecAttrKeyTypeRSA_10082e910,
                          *(undefined8 *)PTR__kSecAttrKeyClass_10082e8f8,
                          *(undefined8 *)PTR__kSecAttrKeyClassPublic_10082e900,0);
    if (lVar6 == 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_4a = "rsaPublicKeyAttributes != nullptr";
        goto LAB_1002e16e0;
      }
      goto LAB_1002e1567;
    }
    lVar5 = _SecKeyCreateWithData(lVar5,lVar6,&local_1b0);
    if (lVar5 == 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "rsaPublicKey != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1002e1576;
    }
    local_1a8 = lVar5;
    lVar5 = FUN_100165eef(0,param_2,0,0);
    if (lVar5 == 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "signatureFileData != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1002e1784:
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "signatureData != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar7 = 0;
LAB_1002e17b1:
      uVar4 = 0;
      lVar8 = 0;
      lVar5 = local_1a8;
    }
    else {
      local_190 = lVar6;
      lVar6 = FUN_100170ef7(lVar5);
      lVar7 = FUN_100170f3b(lVar5);
      lVar8 = FUN_1002e1c5d(lVar7,lVar6,local_1d0);
      if (lVar8 == 0) {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        lVar6 = local_190;
        if (cVar2 != '\0') {
          local_4a = "signatureHexStart != __null";
LAB_1002e174e:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
LAB_1002e1773:
        FUN_1001782e9(0,0);
        FUN_10017060f(lVar5);
        goto LAB_1002e1784;
      }
      lVar7 = FUN_1002e1c5d(lVar8,(lVar6 + lVar7) - lVar8,&local_1c8);
      lVar6 = local_190;
      if (lVar7 == 0) {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        lVar6 = local_190;
        if (cVar2 != '\0') {
          local_4a = "signatureHexEnd != __null";
          goto LAB_1002e174e;
        }
        goto LAB_1002e1773;
      }
      if ((local_1c8 & 1) != 0) {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          local_4a = "(signatureHexLength & 1) == 0";
          goto LAB_1002e174e;
        }
        goto LAB_1002e1773;
      }
      local_198 = local_1c8;
      lVar12 = (long)local_1c8 >> 1;
      local_1a0 = lVar5;
      lVar7 = FUN_100170ea9(0,lVar12);
      if (lVar7 == 0) {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        lVar5 = local_1a0;
        if (cVar2 != '\0') {
          local_4a = "signatureData != nullptr";
          goto LAB_1002e174e;
        }
        goto LAB_1002e1773;
      }
      local_1b8 = lVar12;
      FUN_10017103d(lVar7,lVar12);
      lVar5 = FUN_100170f7f(lVar7);
      if (local_198 == 0) {
        FUN_10017060f(local_1a0);
      }
      else {
        lVar6 = 0;
        local_198 = param_1;
        do {
          cVar2 = FUN_1001e0e4f(*(undefined1 *)(lVar8 + lVar6 * 2));
          bVar3 = FUN_1001e0e4f(*(undefined1 *)(lVar8 + 1 + lVar6 * 2));
          *(byte *)(lVar5 + lVar6) = cVar2 << 4 | bVar3;
          lVar6 = lVar6 + 1;
        } while (local_1b8 != lVar6);
        FUN_10017060f(local_1a0);
        param_1 = local_198;
        lVar6 = local_190;
      }
      lVar8 = FUN_100165eef(0,param_1,0,0);
      lVar5 = local_1a8;
      if (lVar8 == 0) {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "verifyFileData != nullptr";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1002e17b1;
      }
      uVar4 = _SecKeyVerifySignature
                        (local_1a8,
                         *(undefined8 *)
                          PTR__kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA1_10082e918,lVar8,lVar7
                         ,&local_1b0);
    }
  }
  FUN_10017060f(local_1b0);
  FUN_10017060f(lVar8);
  FUN_10017060f(lVar7);
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  FUN_10017060f(lVar6);
  FUN_10017060f(local_1c0);
LAB_1002e17f5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

