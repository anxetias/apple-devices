// name: FUN_10028a58f
// address: 10028a58f

int FUN_10028a58f(int *param_1,undefined4 *param_2,uint *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int local_9c;
  undefined8 *local_98;
  undefined4 *local_90;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  int local_68;
  undefined8 local_64;
  undefined2 local_5c;
  int local_5a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(char *)((long)param_1 + 9) == '\0') || (*(char *)((long)param_2 + 9) == '\0')) {
LAB_10028a6b3:
    iVar6 = 0;
  }
  else {
    if ((char)param_1[2] == '\0') {
      if ((*param_1 != 0x3c) || ((param_1[1] != 0x400 && (param_1[1] != 1)))) goto LAB_10028a6b3;
      iVar6 = 1;
      if (param_3 != (uint *)0x0) {
        uVar4 = FUN_1001d2081();
        *param_3 = uVar4;
      }
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 6);
      if (param_3 != (uint *)0x0) {
        *param_3 = 0;
      }
      local_98 = param_4;
      FUN_1001d019e(uVar5,&local_9c);
      if (local_9c == 1) {
        local_90 = param_2;
        iVar2 = FUN_1001d0b82(uVar5);
        iVar6 = 0;
        param_4 = local_98;
        param_2 = local_90;
        if (iVar2 != 0) {
          do {
            iVar3 = FUN_1001cf495(uVar5,iVar6,&local_68);
            if (iVar3 != 0) {
              if (iVar3 != -0x80) {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  local_88 = 0x8220202;
                  local_84 = "Assertion failure";
                  local_7c = 0x400;
                  local_7a = iVar3;
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_88,
                                      0x12);
                }
              }
LAB_10028a706:
              iVar6 = 0;
              param_4 = local_98;
              param_2 = local_90;
              goto LAB_10028a717;
            }
            if ((((local_64._5_1_ == '\0') || (local_64._4_1_ != '\0')) || (local_68 != 0x3c)) ||
               (((int)local_64 != 0x400 && ((int)local_64 != 1)))) goto LAB_10028a706;
            if (param_3 != (uint *)0x0) {
              uVar4 = FUN_1001d2081(&local_68);
              *param_3 = *param_3 | uVar4;
            }
            iVar6 = iVar6 + 1;
          } while (iVar2 != iVar6);
          iVar6 = 1;
          param_4 = local_98;
          param_2 = local_90;
        }
      }
      else {
        iVar6 = 0;
        param_4 = local_98;
      }
    }
LAB_10028a717:
    if (param_4 != (undefined8 *)0x0 && (char)iVar6 != '\0') {
      if (*(char *)(param_2 + 2) == '\0') {
        iVar2 = FUN_1001cf0e8(0,param_4);
        iVar6 = 1;
        if (iVar2 != -0x80) {
          if (iVar2 != 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_68 = 0x8220202;
              local_64 = "Assertion failure";
              local_5c = 0x400;
              local_5a = iVar2;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_68,0x12);
            }
            if (iVar2 != 0) goto LAB_10028a6b6;
          }
          iVar2 = FUN_1001cf6c3(*param_4,param_2[1],*param_2,*(undefined8 *)(param_2 + 6),param_2[8]
                               );
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_68 = 0x8220202;
              local_64 = "Assertion failure";
              local_5c = 0x400;
              local_5a = iVar2;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_68,0x12);
            }
          }
        }
      }
      else {
        FUN_1001cf1a0(*(undefined8 *)(param_2 + 6));
        *param_4 = *(undefined8 *)(param_2 + 6);
        iVar6 = 1;
      }
    }
  }
LAB_10028a6b6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

