// name: FUN_10041649e
// address: 10041649e

int FUN_10041649e(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_68;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "rentalbag.IsValid()";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    local_68 = 0;
    local_5c = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = FUN_1001a8626(param_2);
    uVar3 = FUN_1001a8610(param_2);
    uVar7 = FUN_1001a8626(param_3);
    uVar4 = FUN_1001a8610(param_3);
    iVar5 = FUN_1000b9850(uVar1,uVar6,uVar3,uVar7,uVar4,&local_68,&local_5c);
    if (iVar5 == 0) {
      FUN_1001a833e(&local_58,local_68,local_5c,0);
    }
    else {
      FUN_10032f0f2(&local_58,0);
    }
    FUN_1001a7b1c(param_4,&local_58);
    FUN_1001a85d4(&local_58);
    if (local_68 != 0) {
      FUN_1000bfd00();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

