// name: FUN_1002f54ae
// address: 1002f54ae

int FUN_1002f54ae(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar4 = (long *)FUN_1005cea50();
    iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    iVar3 = (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0xb8),(long)iVar2);
    iVar2 = 0;
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "libErr == eVVViTSLSuccess";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = iVar3 + 0x5dc;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

