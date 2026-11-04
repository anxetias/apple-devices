// name: FUN_100375976
// address: 100375976

int FUN_100375976(long param_1,undefined4 *param_2,long param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10036f8fa(*(undefined4 *)(param_1 + 0x20));
  if (lVar3 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x23;
    goto LAB_100375ad7;
  }
  lVar4 = FUN_10017076e(*(undefined8 *)(param_1 + 0x440));
  lVar5 = *(long *)(param_1 + 0x448);
  iVar2 = -0x589;
  if (lVar5 < lVar4) {
    while( true ) {
      *(long *)(param_1 + 0x448) = lVar5 + 1;
      lVar5 = FUN_100164a01(*(undefined8 *)(param_1 + 0x440));
      if (lVar5 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "name != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_100375ac9;
      }
      cVar1 = FUN_100170633(lVar5,&cf__);
      if ((cVar1 == '\0') && (cVar1 = FUN_100170633(lVar5,&cf___), cVar1 == '\0')) break;
      lVar5 = *(long *)(param_1 + 0x448);
      if (lVar4 <= lVar5) goto LAB_100375ac9;
    }
    if (param_2 != (undefined4 *)0x0 || param_3 != 0) {
      puVar7 = &local_458;
      if (param_2 != (undefined4 *)0x0) {
        puVar7 = param_2;
      }
      iVar2 = FUN_100377aa5(param_1 + 8,0,0,lVar5,1,puVar7);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          if (param_3 != 0) {
            iVar2 = FUN_10036dfdc(puVar7,param_3,0);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) goto LAB_100375b7a;
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_478 = 0x8220202;
                local_474 = "Assertion failure";
                local_46c = 0x400;
                local_46a = iVar2;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_478,0x12
                                   );
              }
            }
            goto LAB_100375acf;
          }
          goto LAB_100375b7a;
        }
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_478 = 0x8220202;
          local_474 = "Assertion failure";
          local_46c = 0x400;
          local_46a = iVar2;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
      }
      iVar2 = FUN_10036db97(iVar2);
      goto LAB_100375acf;
    }
LAB_100375b7a:
    iVar2 = 0;
    if (param_4 != 0) {
      FUN_1001e115f(lVar5);
    }
  }
  goto LAB_100375acf;
LAB_100375ac9:
  iVar2 = -0x589;
LAB_100375acf:
  FUN_10036d4d2(lVar3);
LAB_100375ad7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

