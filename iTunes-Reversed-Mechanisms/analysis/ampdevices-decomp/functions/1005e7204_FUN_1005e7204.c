// name: FUN_1005e7204
// address: 1005e7204

ulong FUN_1005e7204(long param_1,long param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulong uVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_4a = "ecid != 0";
LAB_1005e732d:
      local_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_2 != -1) {
      local_58 = (undefined4)param_2;
      uVar1 = local_58;
      uStack_54 = (undefined4)((ulong)param_2 >> 0x20);
      uVar2 = uStack_54;
      uStack_50 = param_3;
      FUN_1002dc220(param_1 + 0xb8,&local_58);
      uVar5 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
      if (param_4 != '\0') {
        local_58 = uVar1;
        uStack_54 = uVar2;
        uStack_50 = param_3;
        FUN_1002dc220(param_1 + 0xd0,&local_58);
      }
      goto LAB_1005e729b;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_4a = "ecid != kInvalidECID";
      goto LAB_1005e732d;
    }
  }
  uVar5 = 0;
  FUN_1001782e9(0,0);
LAB_1005e729b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

