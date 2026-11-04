// name: FUN_1002c4f7a
// address: 1002c4f7a

int FUN_1002c4f7a(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_70;
  ulong local_68;
  int local_60;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c = 0;
  iVar2 = FUN_1002c4ca2();
  if (iVar2 != 0) goto LAB_1002c4fc0;
  if ((local_60 == 0) || (local_60 == 2)) {
    iVar2 = FUN_1002c4bbc(param_1,local_68);
    if (iVar2 == 0) {
      iVar2 = FUN_1001e7237(local_70,local_68 & 0xffffffff,*(undefined8 *)(param_1 + 0x60),
                            local_68 & 0xffffffff,&local_5c);
      if (iVar2 != 0) goto LAB_1002c4fc0;
      local_70 = *(undefined8 *)(param_1 + 0x60);
      goto LAB_1002c5098;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  else {
    iVar2 = -0xce;
    if (local_60 != 1) goto LAB_1002c4fc0;
    local_5c = (int)(local_68 >> 1);
LAB_1002c5098:
    iVar2 = FUN_1001dda73(param_4,local_70,local_5c * 2,param_5);
    if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1002c4fc0;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  if (cVar1 != '\0') {
    local_4c = 0x400;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    local_4a = iVar2;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_1002c4fc0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

