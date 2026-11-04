// name: FUN_1006017e0
// address: 1006017e0

undefined8 FUN_1006017e0(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 < 0) {
    *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    lVar3 = FUN_10017076e(*(undefined8 *)(param_1 + 0x38));
    if (lVar3 < 1) {
LAB_100601983:
      uVar4 = 0;
      goto LAB_100601985;
    }
    FUN_10017060f(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
    iVar2 = FUN_100325516(param_1,param_2,param_1 + 0x58,0,0,&local_59);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    if (local_59 == '\0') {
      cVar1 = FUN_100325496(param_1);
      if (cVar1 == '\0') {
        lVar5 = 0;
        do {
          FUN_10017060f(*(undefined8 *)(param_1 + 0x58));
          *(undefined8 *)(param_1 + 0x58) = 0;
          iVar2 = FUN_100325516(param_1,lVar5,param_1 + 0x58,0,0,&local_59);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = iVar2;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          if (local_59 != '\0') {
LAB_100601964:
            *(long *)(param_1 + 0x60) = lVar5;
            goto LAB_100601983;
          }
          cVar1 = FUN_100325496(param_1);
          if (cVar1 != '\0') goto LAB_100601964;
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
        FUN_10017060f(*(undefined8 *)(param_1 + 0x58));
        *(undefined8 *)(param_1 + 0x58) = 0;
        goto LAB_100601983;
      }
    }
    *(long *)(param_1 + 0x60) = param_2;
  }
  uVar4 = 1;
LAB_100601985:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

