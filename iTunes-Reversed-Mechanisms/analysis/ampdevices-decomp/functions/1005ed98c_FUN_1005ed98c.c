// name: FUN_1005ed98c
// address: 1005ed98c

int FUN_1005ed98c(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0x4e2f;
  if (param_2 != 0) {
    for (lVar4 = *(long *)(param_1 + 0x60); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x6878)) {
      if (*(int *)(lVar4 + 0x6884) == param_2) {
        iVar2 = FUN_1005eda55();
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x400;
            local_2a = iVar2;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
          }
        }
        break;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

