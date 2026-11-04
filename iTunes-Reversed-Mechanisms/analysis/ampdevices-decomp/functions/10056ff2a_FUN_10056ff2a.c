// name: FUN_10056ff2a
// address: 10056ff2a

int FUN_10056ff2a(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = 0;
  iVar2 = 0;
  if ((*(char *)((long)param_1 + 0x74) == '\0') &&
     (iVar2 = (**(code **)(*(long *)param_1[2] + 0x68))((long *)param_1[2],0,&local_40),
     iVar2 != -0x80)) {
    if (iVar2 == 0) {
      if (param_1[0xf] <= local_40) {
        do {
          cVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_1[0x10] + 1,local_40);
          if (cVar1 == '\0') break;
          iVar2 = (**(code **)(*param_1 + 0x68))(param_1,local_40);
          if (iVar2 != 0) {
            if (iVar2 == -0x80) goto LAB_10056ff53;
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            goto joined_r0x00010056fff0;
          }
          cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
        } while (cVar1 == '\0');
      }
      iVar2 = 0;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
joined_r0x00010056fff0:
      if (cVar1 != '\0') {
        local_2c = 0x400;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        local_2a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
  }
LAB_10056ff53:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

