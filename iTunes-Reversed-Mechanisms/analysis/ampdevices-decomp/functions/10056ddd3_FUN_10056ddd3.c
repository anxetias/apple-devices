// name: FUN_10056ddd3
// address: 10056ddd3

undefined8 FUN_10056ddd3(undefined8 param_1,int *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44();
  uVar3 = (ulong)(uint)param_2[1];
  if (uVar3 + 0x10 != param_3) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inObjectSize == (inString->dataSize + sizeof(*inString))";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = (ulong)(uint)param_2[1];
  }
  if ((uint)uVar3 != 0) {
    if (*param_2 == 2) {
      FUN_1001b7b34(&local_48,param_2 + 4,uVar3);
      FUN_1001b80b2(param_1,&local_48);
    }
    else {
      if (*param_2 != 1) goto LAB_10056de86;
      FUN_1001b7e14(&local_48,param_2 + 4,(uint)uVar3 >> 1);
      FUN_1001b80b2(param_1,&local_48);
    }
    FUN_1001b7a50(&local_48);
  }
LAB_10056de86:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

