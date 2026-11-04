// name: FUN_100636c22
// address: 100636c22

undefined8 FUN_100636c22(int param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined2 local_62 [5];
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined2 uStack_42;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "driverObject != 0";
LAB_100636d44:
      local_4c = 0x822;
      local_50 = 1;
      local_58._4_4_ = 0x7a0a90;
      local_58._0_4_ = 0x8220202;
      uStack_4a = SUB82(pcVar3,0);
      local_48 = (undefined6)((ulong)pcVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      FUN_1001c62d9(local_62,10);
      local_62[0] = 0xd5;
      local_50 = 10;
      local_48 = (undefined6)param_2;
      uStack_42 = (undefined2)((ulong)param_2 >> 0x30);
      local_3c = 1;
      local_38 = 0;
      local_40 = param_3;
      local_58 = local_62;
      uVar2 = FUN_1006343f6(param_1,FUN_100637128);
      goto LAB_100636d03;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "requestBuffer != nullptr";
      goto LAB_100636d44;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100636d03:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

