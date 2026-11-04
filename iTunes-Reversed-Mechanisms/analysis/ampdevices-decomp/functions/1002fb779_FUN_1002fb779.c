// name: FUN_1002fb779
// address: 1002fb779

undefined4 FUN_1002fb779(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_e8 [8];
  undefined4 local_e0;
  undefined1 *local_c0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xcce1;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1002fa385(param_1,param_2,local_e8);
    uVar2 = FUN_1002fae31(local_e8,param_3,param_4);
    if (local_c0 != (undefined1 *)0x0) {
      *local_c0 = 0;
    }
    uStack_48 = 0;
    uStack_42 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    FUN_1005389ba(&local_58,local_e0);
    FUN_1004755ef(param_1,0,&local_58);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

