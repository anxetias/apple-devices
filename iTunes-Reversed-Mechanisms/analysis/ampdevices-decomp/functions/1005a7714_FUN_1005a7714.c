// name: FUN_1005a7714
// address: 1005a7714

byte FUN_1005a7714(long *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 local_708 [80];
  undefined1 local_6b8 [80];
  undefined8 local_668;
  long local_660;
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  int local_64a;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)((long)param_1 + 0x15a3) == '\0') {
    bVar2 = 0;
    goto LAB_1005a789b;
  }
  local_660 = 0;
  FUN_10017060f(param_1[0x2be]);
  lVar5 = FUN_100172473(DAT_1008c4d90,*param_1 + 0x14dd6,0x600);
  param_1[0x2be] = lVar5;
  lVar5 = FUN_1001705fc(lVar5);
  FUN_10017060f(param_1[0x2d5]);
  param_1[0x2d5] = lVar5;
  if ((param_1[700] == 0) && (FUN_1005aeaea(param_1), param_1[700] == 0)) {
    bVar8 = true;
LAB_1005a786e:
    iVar4 = FUN_10017d477(param_1 + 0x1a6,local_708,local_238);
    bVar9 = true;
    if (iVar4 == 0) {
      bVar9 = false;
      iVar3 = FUN_1001879bd(param_1 + 0x1a6,0,&local_668);
      if (iVar3 != -0x80) {
        if (iVar3 != 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          iVar4 = local_64a;
          goto joined_r0x0001005a7860;
        }
        do {
          iVar4 = FUN_100187bea(local_668,&local_658,local_6b8,local_238);
          bVar9 = iVar4 != 0;
          if (bVar9) break;
          cVar1 = FUN_10017fbfb(&local_658);
        } while (cVar1 != '\0');
        FUN_100187c42(local_668);
      }
    }
  }
  else {
    iVar3 = FUN_1005a79d6(param_1,&local_660);
    bVar8 = true;
    iVar4 = local_64a;
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        if (local_660 != 0) {
          lVar5 = FUN_100166c1b(param_1[700],&cf_MenuVersion);
          lVar6 = FUN_100166c1b(local_660,&cf_Version);
          if (lVar6 != 0 && lVar5 != 0) {
            cVar1 = FUN_100170633(lVar5,lVar6);
            bVar8 = cVar1 == '\0';
          }
          FUN_10017060f(local_660);
          goto LAB_1005a786e;
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        iVar4 = local_64a;
joined_r0x0001005a7860:
        local_64a = iVar3;
        if (cVar1 != '\0') {
          local_64c = 0x400;
          local_654 = "Assertion failure";
          local_658 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_658,0x12);
          iVar4 = local_64a;
        }
      }
    }
    local_64a = iVar4;
    bVar9 = false;
  }
  bVar2 = bVar8 | bVar9;
LAB_1005a789b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

