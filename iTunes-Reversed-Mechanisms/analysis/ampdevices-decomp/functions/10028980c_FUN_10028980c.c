// name: FUN_10028980c
// address: 10028980c

int FUN_10028980c(int *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_5 = 0;
  iVar3 = *param_1;
  if ((iVar3 == 0x39) || (iVar3 == 0x75)) {
    uVar5 = 0x200000;
    if (iVar3 == 0x39) {
      uVar5 = 4;
    }
    iVar3 = 0;
    if ((*param_2 & uVar5) != 0) goto LAB_1002898f0;
    FUN_1001d2147(param_1,&local_58);
    iVar3 = FUN_1001d146a(param_1[1],1,(undefined1)local_58,&local_59);
    if (iVar3 == -0x80) goto LAB_1002898f0;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
joined_r0x00010028997d:
      if (cVar2 != '\0') {
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        local_4a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_1002898f0;
    }
    if (local_59 != '\0') {
      *param_2 = *param_2 | uVar5;
    }
  }
  else if (iVar3 == 0x3c) {
    uVar5 = 1;
    do {
      if ((*param_2 & uVar5) == 0) {
        iVar3 = FUN_100287266(param_1,uVar5,param_4,0,&local_59);
        if (iVar3 != 0) {
          if (iVar3 == -0x80) goto LAB_1002898f0;
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          goto joined_r0x00010028997d;
        }
        if (local_59 != '\0') {
          *param_2 = *param_2 | uVar5;
        }
      }
      bVar1 = uVar5 < 0x800001;
      uVar5 = uVar5 * 2;
    } while (bVar1);
  }
  else {
    *param_5 = 1;
  }
  iVar3 = 0;
LAB_1002898f0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

