// name: FUN_1001fab73
// address: 1001fab73

undefined4 FUN_1001fab73(long param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined1 local_4e0 [32];
  undefined8 local_4c0;
  undefined8 local_4b8;
  ulong local_4b0;
  undefined8 local_4a8;
  undefined4 local_498;
  undefined4 uStack_494;
  long local_490;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined4 local_454;
  ulong local_450;
  long local_448;
  ulong local_440;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001f02f4(*(undefined8 *)(param_1 + 0x428),local_4e0,0,0,0,0,0,0);
  if (iVar2 == 0) {
    if (CONCAT44(uStack_494,local_498) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_1001c63e1();
      if (lVar7 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_1006cc013(uVar6);
        }
        FUN_1001782e9(0,0);
        uVar3 = 0xffffff94;
        goto LAB_1001fac00;
      }
    }
    if (local_490 == 0) {
      local_490 = 0;
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_1001c63e1(local_490 + 1);
      if (lVar8 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_1006cc089(uVar6);
        }
        lVar8 = 0;
        FUN_1001782e9(0,0);
        uVar3 = 0xffffff94;
        goto LAB_1001fad72;
      }
    }
    iVar2 = FUN_1001f02f4(*(undefined8 *)(param_1 + 0x428),local_4e0,local_438,0x400,lVar7,
                          CONCAT44(uStack_494,local_498),lVar8,local_490 + 1);
    if (iVar2 == 0) {
      iVar2 = FUN_1001f10ee(*(undefined8 *)(param_1 + 0x428),&local_458,&local_454,1);
      if (iVar2 == 0) {
        lVar9 = 0;
        local_440 = param_2;
        iVar2 = FUN_1001f13a0(*(undefined8 *)(param_1 + 0x428),0,0);
        if (iVar2 < 1) {
LAB_1001fae1c:
          local_450 = CONCAT44(local_450._4_4_,iVar2);
          FUN_1001c62d9(&local_518,0x30);
          local_518 = local_470;
          uStack_510 = uStack_468;
          local_508 = local_460;
          local_4f8 = local_480;
          uStack_4f4 = uStack_47c;
          uStack_4f0 = uStack_478;
          uStack_4ec = uStack_474;
          local_500 = local_4c0;
          iVar2 = FUN_1001f5c1c(*(undefined8 *)(local_440 + 0x430),local_438,&local_518,lVar9,
                                local_450 & 0xffffffff,lVar7,local_498,lVar8,local_458,local_454,1,0
                               );
          if (iVar2 != 0) {
            local_440 = CONCAT44(local_440._4_4_,iVar2);
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              FUN_1006cc261(uVar6);
            }
            goto LAB_1001fb009;
          }
          local_450 = 5000000;
          if (local_4b0 < 5000000) {
            local_450 = local_4b0;
          }
          lVar10 = FUN_1001c63e1();
          uVar12 = local_4b0;
          if (lVar10 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              FUN_1006cc439(uVar6);
            }
            lVar10 = 0;
            FUN_1001782e9(0,0);
            uVar3 = 0xffffff94;
            goto LAB_1001fad75;
          }
          do {
            local_448 = lVar8;
            if (uVar12 == 0) {
LAB_1001fb076:
              iVar2 = FUN_1001f5f7b(*(undefined8 *)(local_440 + 0x430),local_4a8,local_4b8);
              if (iVar2 == 0) {
                FUN_1001f023e(*(undefined8 *)(param_1 + 0x428));
                uVar3 = 0;
                lVar8 = local_448;
                goto LAB_1001fad75;
              }
              local_440 = CONCAT44(local_440._4_4_,iVar2);
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              lVar8 = local_448;
              if (cVar1 != '\0') {
                FUN_1006cc3c3(uVar6);
              }
              goto LAB_1001fb00c;
            }
            uVar11 = local_450;
            if (uVar12 < local_450) {
              uVar11 = uVar12;
            }
            uVar5 = FUN_1001f1120(*(undefined8 *)(param_1 + 0x428),lVar10,uVar11);
            if ((int)uVar5 < 0) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                FUN_1006cc2d7(uVar6);
              }
              FUN_1001782e9(0,0);
              uVar3 = FUN_1001f7970((ulong)uVar5);
              lVar8 = local_448;
              goto LAB_1001fad75;
            }
            if (uVar5 == 0) goto LAB_1001fb076;
            iVar2 = FUN_1001f5d01(*(undefined8 *)(local_440 + 0x430),lVar10);
            uVar12 = uVar12 - uVar5;
            lVar8 = local_448;
          } while (iVar2 == 0);
          local_440 = CONCAT44(local_440._4_4_,iVar2);
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          lVar8 = local_448;
          if (cVar1 != '\0') {
            FUN_1006cc34d(uVar6);
          }
        }
        else {
          lVar9 = FUN_1001c63e1(iVar2);
          if (lVar9 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              FUN_1006cc4af(uVar6);
            }
            FUN_1001782e9(0,0);
            uVar3 = 0xffffff94;
            goto LAB_1001fad72;
          }
          iVar4 = FUN_1001f13a0(*(undefined8 *)(param_1 + 0x428),lVar9,iVar2);
          if (-1 < iVar4) goto LAB_1001fae1c;
          local_440 = CONCAT44(local_440._4_4_,iVar4);
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            FUN_1006cc1eb(uVar6);
          }
LAB_1001fb009:
          lVar10 = 0;
        }
LAB_1001fb00c:
        FUN_1001782e9(0,0);
        uVar3 = FUN_1001f7970(local_440 & 0xffffffff);
        goto LAB_1001fad75;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_1006cc175(uVar6);
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_1006cc0ff(uVar6);
      }
    }
    FUN_1001782e9(0,0);
    uVar3 = FUN_1001f7970(iVar2);
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006cbf9d(uVar6);
    }
    FUN_1001782e9(0,0);
    uVar3 = FUN_1001f7970(iVar2);
LAB_1001fac00:
    lVar8 = 0;
    lVar7 = 0;
  }
LAB_1001fad72:
  lVar9 = 0;
  lVar10 = 0;
LAB_1001fad75:
  FUN_1001c64c1(lVar7);
  FUN_1001c64c1(lVar9);
  FUN_1001c64c1(lVar8);
  FUN_1001c64c1(lVar10);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

