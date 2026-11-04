// name: FUN_1005fe7c4
// address: 1005fe7c4

void FUN_1005fe7c4(long param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_58 [16];
  uint local_48;
  undefined4 local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100238ca8(local_58,param_1 + 0x38);
  uVar1 = uStack_3c;
  uStack_3c = (undefined2)(param_2 >> 0x10);
  uVar2 = uStack_3c;
  uStack_3c = uVar1;
  if (*(uint *)(param_1 + 0xa8) < param_2) {
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar4 = DAT_1008c7d18;
    cVar3 = _os_log_type_enabled(DAT_1008c7d18,1);
    if (cVar3 != '\0') {
      local_44 = *(undefined4 *)(param_1 + 0xa8);
      pcVar5 = "amplc> rev %u -> %u";
LAB_1005fe8b0:
      uStack_3e = (undefined2)param_2;
      uStack_40 = 0x400;
      local_48 = 0x4000200;
      uStack_3c = uVar2;
      __os_log_impl(0x100000000,uVar4,1,pcVar5,&local_48,0xe);
    }
  }
  else {
    if (*(uint *)(param_1 + 0xa8) == param_2) goto LAB_1005fe8ca;
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar4 = DAT_1008c7d18;
    if (param_2 == 0) {
      cVar3 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar3 != '\0') {
        local_48 = local_48 & 0xffff0000;
        __os_log_impl(0x100000000,uVar4,0x10,"**ERROR**: Attempt to set revision to ZERO!",&local_48
                      ,2);
      }
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3e = 0;
        uStack_3c = 0x822;
        local_3a = "0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1005fe8ca;
    }
    cVar3 = _os_log_type_enabled(DAT_1008c7d18,1);
    if (cVar3 != '\0') {
      local_44 = *(undefined4 *)(param_1 + 0xa8);
      pcVar5 = "amplc> [reconnected] rev %u -> %u";
      goto LAB_1005fe8b0;
    }
  }
  *(uint *)(param_1 + 0xa8) = param_2;
LAB_1005fe8ca:
  FUN_10015a142(local_58);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

