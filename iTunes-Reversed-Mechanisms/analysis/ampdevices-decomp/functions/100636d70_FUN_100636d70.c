// name: FUN_100636d70
// address: 100636d70

undefined8 FUN_100636d70(int param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined2 local_72 [5];
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined6 local_58;
  undefined2 uStack_52;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "driverObject != 0";
LAB_100636ed0:
      local_5c = 0x822;
      local_60 = 1;
      local_68._4_4_ = 0x7a0a90;
      local_68._0_4_ = 0x8220202;
      uStack_5a = SUB82(pcVar3,0);
      local_58 = (undefined6)((ulong)pcVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_68,0x16);
    }
  }
  else if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "responseBuffer != nullptr";
      goto LAB_100636ed0;
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      FUN_1001c62d9(local_72,10);
      local_72[0] = 0x1d5;
      local_50 = *param_3;
      local_60 = 10;
      local_58 = (undefined6)param_2;
      uStack_52 = (undefined2)((ulong)param_2 >> 0x30);
      local_4c = 2;
      local_48 = 0;
      local_68 = local_72;
      uVar2 = FUN_1006343f6(param_1,FUN_100637128,&local_68);
      *param_3 = local_48;
      goto LAB_100636f03;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "responseLength != nullptr";
      goto LAB_100636ed0;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100636f03:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

