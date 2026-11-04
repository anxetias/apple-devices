// name: FUN_100268ed1
// address: 100268ed1

int FUN_100268ed1(long param_1,long param_2,undefined4 param_3,long param_4,uint *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "ITIPodRefIsValid(iPod)";
LAB_1002690d6:
      local_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "requestBuffer != nullptr";
      goto LAB_1002690d6;
    }
  }
  else if (param_4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "responseBuffer != nullptr";
      goto LAB_1002690d6;
    }
  }
  else {
    if (param_5 != (uint *)0x0) {
      if (*(char *)(param_1 + 0x3f) == '\0') {
        iVar2 = FUN_1002d2dd6(param_1,param_2,param_3);
        if (iVar2 == 0) {
          iVar2 = FUN_1002d2f09(param_1,param_4,param_5);
          goto LAB_100268fb9;
        }
      }
      else {
        uVar3 = FUN_100170dc5(DAT_1008c4d90,param_2,param_3);
        local_58 = 0;
        uStack_54 = 0;
        uVar4 = FUN_10055ae0c(param_1);
        iVar2 = FUN_1005c40a3(uVar4,uVar3,&local_58);
        if (iVar2 == 0) {
          lVar5 = FUN_100170ef7(CONCAT44(uStack_54,local_58));
          iVar2 = -0xf3;
          if (lVar5 <= (long)(ulong)*param_5) {
            uVar4 = FUN_100170f3b(CONCAT44(uStack_54,local_58));
            FUN_1001c631b(uVar4,param_4,lVar5);
            *param_5 = (uint)lVar5;
            iVar2 = 0;
          }
        }
        FUN_10017060f(CONCAT44(uStack_54,local_58));
        FUN_10017060f(uVar3);
LAB_100268fb9:
        if (iVar2 == 0) {
          iVar2 = 0;
          goto LAB_10026910a;
        }
      }
      *param_5 = 0;
      goto LAB_10026910a;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "responseLength != nullptr";
      goto LAB_1002690d6;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10026910a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

