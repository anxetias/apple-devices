// name: FUN_100448dc4
// address: 100448dc4

int FUN_100448dc4(long *param_1,long param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar4 = 0;
  do {
    local_5c = 0;
    if (((char)param_1[0xe] == '\0') &&
       (iVar2 = (**(code **)(*param_1 + 0x48))(param_1), iVar2 != 0)) {
      if ((iVar2 != -0x80) && (iVar2 != -0x27)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
joined_r0x000100448ebb:
        if (cVar1 != '\0') {
          local_4c = 0x400;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          local_4a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      goto LAB_100448f0f;
    }
    iVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3,&local_5c);
    if (iVar2 != 0) {
      if (iVar2 != -0x80) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        goto joined_r0x000100448ebb;
      }
      goto LAB_100448f0f;
    }
    iVar4 = iVar4 + local_5c;
    param_3 = param_3 - local_5c;
    if (param_3 == 0) {
      iVar2 = 0;
      if (param_4 != (int *)0x0) {
        *param_4 = iVar4;
      }
LAB_100448f0f:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return iVar2;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    param_2 = param_2 + (ulong)local_5c;
  } while( true );
}

