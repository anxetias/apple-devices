// name: FUN_10053d93e
// address: 10053d93e

long FUN_10053d93e(long *param_1,undefined2 *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  iVar4 = (**(code **)(*param_1 + 0xa8))(param_1,0);
  iVar5 = local_3a;
  if (iVar4 == -0x80) goto LAB_10053da1a;
  if (iVar4 == 0) {
    if (param_1[0x95] == 0) goto LAB_10053da1a;
    iVar4 = FUN_1005d38c7(0,0,&local_58);
    lVar2 = local_58;
    if (iVar4 == 0) {
      iVar5 = FUN_1003affb3(param_1[0x95],local_58,&local_50,&local_4c);
      iVar4 = FUN_1005d3a5b(lVar2);
      if ((iVar4 == 0) || (iVar5 != 0)) {
        if (lVar2 != 0) {
          piVar1 = (int *)(lVar2 + 4);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_1005d3cba(lVar2);
          }
        }
        local_58 = 0;
        iVar5 = local_3a;
      }
      else {
        iVar5 = local_3a;
        if (param_2 != (undefined2 *)0x0) {
          param_2[1] = 0x80;
          *param_2 = (undefined2)local_50;
          *(undefined4 *)(param_2 + 2) = local_4c;
        }
      }
      goto LAB_10053da1a;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    iVar5 = local_3a;
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    iVar5 = local_3a;
  }
  local_3a = iVar4;
  if (cVar3 != '\0') {
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    iVar5 = local_3a;
  }
LAB_10053da1a:
  local_3a = iVar5;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

