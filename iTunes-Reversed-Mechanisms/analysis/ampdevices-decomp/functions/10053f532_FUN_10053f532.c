// name: FUN_10053f532
// address: 10053f532

int FUN_10053f532(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar4 = 0;
  if ((char)param_1[0xa7] != '\0') goto LAB_10053f6ab;
  FUN_1001c62d9(&local_60,0x18);
  if ((*(int *)((long)param_1 + 0x14) == 0x46494c45) &&
     (*(int *)((long)param_1 + 0x44) == 0x41464350)) {
    iVar2 = FUN_1002b8bc4(0x46494c45,param_1 + 3,&local_60,&local_58,&local_50);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) goto LAB_10053f624;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x218))(param_1,&local_60);
LAB_10053f624:
    if (local_60 == 0 && local_50 == 0) {
      *(undefined1 *)(param_1 + 0xa7) = 1;
      goto LAB_10053f6ab;
    }
    if (local_60 == 0) {
      if (local_50 != 0) {
        (**(code **)(*param_1 + 0x180))(param_1,(long)param_1 + 0x53c);
      }
    }
    else {
      (**(code **)(*param_1 + 0x178))(param_1,(long)param_1 + 0x53c,local_60,local_58);
    }
    (**(code **)(*param_1 + 0x188))(param_1);
    *(undefined1 *)(param_1 + 0xa7) = 1;
    iVar2 = 0;
  }
  FUN_10017060f(local_60);
  FUN_10017060f(local_58);
  FUN_10017060f(local_50);
  iVar4 = iVar2;
LAB_10053f6ab:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

