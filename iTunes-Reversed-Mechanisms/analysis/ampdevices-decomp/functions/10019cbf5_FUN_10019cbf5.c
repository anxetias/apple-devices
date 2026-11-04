// name: FUN_10019cbf5
// address: 10019cbf5

int FUN_10019cbf5(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,undefined8 *param_7,undefined8 *param_8,undefined8 param_9,
                 undefined8 param_10,uint param_11,undefined8 param_12,undefined4 *param_13,
                 long param_14,undefined8 param_15,long param_16)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      FUN_10069a3c2(uVar7);
    }
LAB_10019d07e:
    FUN_1001782e9(0,0);
  }
  else {
    if (param_5 == 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        FUN_10069a34c(uVar7);
      }
      goto LAB_10019d07e;
    }
    if (param_7 == (undefined8 *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        FUN_10069a2d6(uVar7);
      }
      goto LAB_10019d07e;
    }
    *param_7 = 0;
    if (param_8 != (undefined8 *)0x0) {
      *param_8 = 0;
    }
    FUN_1001c62d9(param_4,0x148);
    if (param_6 == 0) {
LAB_10019ccba:
      if (param_14 == 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          FUN_100699fa6(uVar7);
        }
        FUN_1001782e9(0,0);
      }
      *(long *)(param_4 + 0xe8) = param_14;
      *(undefined8 *)(param_4 + 0xf0) = param_15;
      if (param_16 == 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          FUN_10069a01c(uVar7);
        }
        FUN_1001782e9(0,0);
      }
      *(long *)(param_4 + 0xf8) = param_16;
      *(undefined8 **)(param_4 + 0x128) = param_8;
      *(undefined8 **)(param_4 + 0x120) = param_7;
      *(undefined8 *)(param_4 + 0x130) = param_9;
      *(uint *)(param_4 + 0x44) = param_11;
      *(undefined8 *)(param_4 + 0xb0) = 0xffffffffffffffff;
      *(undefined8 *)(param_4 + 0x20) = param_10;
      uVar7 = 0x40000;
      if ((param_11 >> 0x14 & 1) == 0) {
        uVar7 = 0x10000;
      }
      *(undefined4 *)(param_4 + 0x48) = 0xffffdc8e;
      *(undefined8 *)(param_4 + 0x110) = uVar7;
      *(undefined8 *)(param_4 + 0x30) = param_1;
      *(undefined8 *)(param_4 + 0x38) = param_2;
      uVar7 = FUN_1001705fc(param_5);
      *(undefined8 *)(param_4 + 0x90) = uVar7;
      uVar7 = FUN_1001705fc(param_6);
      *(undefined8 *)(param_4 + 0x98) = uVar7;
      *(undefined8 *)(param_4 + 200) = param_12;
      if (param_13 != (undefined4 *)0x0) {
        *(undefined8 *)(param_4 + 0xe0) = *(undefined8 *)(param_13 + 4);
        uVar1 = param_13[1];
        uVar2 = param_13[2];
        uVar3 = param_13[3];
        *(undefined4 *)(param_4 + 0xd0) = *param_13;
        *(undefined4 *)(param_4 + 0xd4) = uVar1;
        *(undefined4 *)(param_4 + 0xd8) = uVar2;
        *(undefined4 *)(param_4 + 0xdc) = uVar3;
      }
      *(long *)(param_4 + 0x68) = param_4;
      if (param_3 == 0) {
        param_3 = DAT_100890758;
      }
      *(long *)(param_4 + 8) = param_3;
      lVar8 = FUN_100171c60(param_5);
      if (lVar8 == 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          FUN_10069a1ea(uVar7);
        }
LAB_10019d129:
        lVar9 = 0;
        FUN_1001782e9(0,0);
        iVar6 = -0x32;
        lVar10 = 0;
      }
      else {
        lVar9 = FUN_100174812(lVar8);
        if (lVar9 == 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_10069a174(uVar7);
          }
          goto LAB_10019d129;
        }
        lVar10 = FUN_10017478a(lVar8);
        if (lVar10 == 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_10069a0fe(uVar7);
          }
          lVar10 = 0;
          FUN_1001782e9(0,0);
          iVar6 = -0x32;
        }
        else {
          if ((param_11 & 0x40) != 0) {
            local_138[0] = 0;
            lVar11 = FUN_100174746(lVar8);
            if (((lVar11 != 0) && (lVar12 = FUN_1001737f8(lVar11), lVar12 < 0x100)) &&
               (cVar4 = FUN_10017393c(lVar11,local_138,0x100,0x600), cVar4 == '\0')) {
              local_138[0] = 0;
            }
            cVar4 = FUN_1001a4623(local_138,0);
            if (cVar4 == '\0') {
              iVar6 = -0xcc0;
              goto LAB_10019d13e;
            }
          }
          uVar5 = *(uint *)(param_4 + 0x44);
          if ((uVar5 & 0x21) == 1) {
            FUN_100171b23(param_5,PTR_cf_Accept_Encoding_10083c4b8,PTR_cf_gzip_10083c518);
            uVar5 = *(uint *)(param_4 + 0x44);
          }
          if ((uVar5 >> 0xb & 1) != 0) {
            uVar7 = FUN_100197d52(lVar8);
            FUN_100171b23(param_5,PTR_cf_Cookie_10083c4e0,uVar7);
            FUN_10017060f(uVar7);
          }
          lVar11 = FUN_1001748e1(lVar8);
          lVar12 = FUN_100174925(lVar8);
          if (lVar12 != 0 && lVar11 != 0) {
            FUN_100171d32(param_5,0,lVar11,lVar12,
                          *(undefined8 *)PTR__kCFHTTPAuthenticationSchemeBasic_10082d5c0,0);
          }
          FUN_10017060f(lVar11);
          FUN_10017060f(lVar12);
          uVar5 = *(uint *)(param_4 + 0x44);
          if ((uVar5 & 0xc) == 0) {
            FUN_100164329(param_5,0);
            uVar5 = *(uint *)(param_4 + 0x44);
          }
          if ((uVar5 & 4) == 0) {
            uVar7 = _CFNetworkCopySystemProxySettings();
            *(undefined8 *)(param_4 + 0x88) = uVar7;
          }
          iVar6 = FUN_1001ed4fd(*(undefined8 *)(param_4 + 8),FUN_10019d30b,param_4,0);
          if (iVar6 != -0x80) {
            if (iVar6 == 0) {
              FUN_10017060f(lVar8);
              FUN_10017060f(lVar9);
              FUN_10017060f(lVar10);
              iVar6 = 0;
              goto LAB_10019d08d;
            }
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 != '\0') {
              FUN_10069a092(iVar6,uVar7);
            }
          }
        }
      }
LAB_10019d13e:
      if (*(long *)(param_4 + 0x18) != 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          FUN_10069a260(uVar7);
        }
        FUN_1001782e9(0,0);
      }
      FUN_10017060f(lVar8);
      FUN_10017060f(lVar9);
      FUN_10017060f(lVar10);
      FUN_10017060f(*(undefined8 *)(param_4 + 0x90));
      *(undefined8 *)(param_4 + 0x90) = 0;
      FUN_10017060f(*(undefined8 *)(param_4 + 0x98));
      *(undefined8 *)(param_4 + 0x98) = 0;
      FUN_10017060f(*(undefined8 *)(param_4 + 0x88));
      *(undefined8 *)(param_4 + 0x88) = 0;
      FUN_10017060f(*(undefined8 *)(param_4 + 0xa8));
      *(undefined8 *)(param_4 + 0xa8) = 0;
      goto LAB_10019d08d;
    }
    uVar7 = FUN_100171a6c(param_5,PTR_cf_Content_Length_10083c4d0);
    cVar4 = FUN_1001672b9(uVar7,param_4 + 0xa0);
    if (cVar4 != '\0') {
      FUN_10017060f(uVar7);
      goto LAB_10019ccba;
    }
    uVar13 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar13,0x10);
    if (cVar4 != '\0') {
      FUN_100699f30(uVar13);
    }
    FUN_1001782e9(0,0);
    FUN_10017060f(uVar7);
  }
  iVar6 = -0x32;
LAB_10019d08d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

