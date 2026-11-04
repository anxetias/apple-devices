// name: FUN_1003b6f88
// address: 1003b6f88

ulong FUN_1003b6f88(int param_1,long param_2,int param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "location1 != nullptr";
LAB_1003b7325:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1003b70a5:
    bVar5 = false;
    FUN_1001782e9(0,0);
  }
  else {
    if (param_4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = "location2 != nullptr";
        goto LAB_1003b7325;
      }
      goto LAB_1003b70a5;
    }
    bVar5 = false;
    if (param_1 < 0x48545450) {
      if (param_1 == 0x43442020) {
        if ((param_3 != 0x43442020) || (*(short *)(param_2 + 0x44e) != *(short *)(param_4 + 0x44e)))
        goto LAB_1003b7390;
        cVar1 = FUN_10017ec13(param_2 + 0x2c,param_4 + 0x2c);
        bVar5 = cVar1 != '\0';
      }
      else if (param_1 == 0x44574e4c) {
        if (param_3 == 0x46494c45) {
          param_2 = FUN_1004aa9fa(param_2 + 0x2c);
          if (param_2 != 0) {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
              param_4 = param_4 + 0x2c;
              goto LAB_1003b737d;
            }
            goto LAB_1003b73b6;
          }
        }
        else if ((param_3 == 0x44574e4c) && (*(int *)(param_2 + 0x450) == *(int *)(param_4 + 0x450))
                ) {
          bVar5 = true;
          if (*(int *)(param_2 + 0x450) != 0) goto LAB_1003b7393;
          param_2 = FUN_1004aa9fa(param_2 + 0x2c);
          if ((param_2 != 0) && (param_4 = FUN_1004aa9fa(param_4 + 0x2c), param_4 != 0)) {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) goto LAB_1003b737d;
            goto LAB_1003b73b6;
          }
        }
LAB_1003b7390:
        bVar5 = false;
      }
      else if (param_1 == 0x46494c45) goto LAB_1003b70f4;
    }
    else {
      if (param_1 < 0x4d46494c) {
        if (param_1 != 0x48545450) {
          bVar5 = false;
          if (param_1 == 0x4d425546) {
            if (((param_3 != 0x4d425546) || (*(long *)(param_2 + 0x2c) != *(long *)(param_4 + 0x2c))
                ) || ((*(long *)(param_2 + 0x34) != *(long *)(param_4 + 0x34) ||
                      (cVar1 = FUN_1001c5630(param_2 + 0x3c,param_4 + 0x3c,0x28), cVar1 != '\0'))))
            goto LAB_1003b7390;
            bVar5 = *(char *)(param_2 + 100) == *(char *)(param_4 + 100);
          }
          goto LAB_1003b7393;
        }
      }
      else if (param_1 != 0x53485244) {
        if (param_1 != 0x4d46494c) goto LAB_1003b7393;
LAB_1003b70f4:
        if ((((param_3 == 0x44574e4c) || (param_3 == 0x4d46494c)) || (param_3 == 0x46494c45)) &&
           ((param_1 == 0x4d46494c || (param_1 == 0x46494c45)))) {
          if (param_3 == 0x44574e4c) {
            param_4 = FUN_1004aa9fa(param_4 + 0x2c);
            if (param_4 != 0) goto LAB_1003b7363;
          }
          else if ((param_3 == 0x4d46494c) || (param_3 == 0x46494c45)) {
            param_4 = param_4 + 0x2c;
LAB_1003b7363:
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
              param_2 = param_2 + 0x2c;
LAB_1003b737d:
              uVar4 = FUN_10017f77e(param_2,param_4);
              return uVar4;
            }
            goto LAB_1003b73b6;
          }
        }
        goto LAB_1003b7390;
      }
      if ((((param_3 != 0x53485244) && (param_3 != 0x48545450)) ||
          ((param_1 != 0x53485244 && (param_1 != 0x48545450)))) ||
         (((param_3 != 0x53485244 && (param_3 != 0x48545450)) ||
          (iVar2 = *(int *)(param_2 + 0x2c), iVar2 != *(int *)(param_4 + 0x2c)))))
      goto LAB_1003b7390;
      iVar2 = FUN_1001df3ce(param_2 + 0x30,iVar2,param_4 + 0x30,iVar2,1);
      bVar5 = iVar2 == 0;
      if ((param_1 == 0x53485244 || param_3 == 0x53485244) && !bVar5) {
        if (*(uint *)(param_2 + 0x2c) < 8) goto LAB_1003b7390;
        iVar2 = FUN_1001df3ce(param_2 + 0x37,*(uint *)(param_2 + 0x2c) - 7,param_4 + 0x37,
                              *(int *)(param_4 + 0x2c) + -7,1);
        bVar5 = iVar2 == 0;
      }
    }
  }
LAB_1003b7393:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)bVar5;
  }
LAB_1003b73b6:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

