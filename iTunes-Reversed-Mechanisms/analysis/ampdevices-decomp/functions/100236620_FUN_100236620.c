// name: FUN_100236620
// address: 100236620

int FUN_100236620(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e9de0(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x38) = param_4;
  if (*(long *)(param_1 + 0xd0) == 0) {
    FUN_1001b7a44(local_88);
    cVar2 = FUN_1001b8428(param_1 + 0x28);
    if (cVar2 == '\0') {
      uVar4 = FUN_1001b83ae(param_1 + 0x28);
      FUN_1001b7b04(&local_78,uVar4);
      FUN_1001bbcfe(local_88,&local_78);
      FUN_1001b7a50(&local_78);
    }
    FUN_1001b7b04(&local_78,"CCP Worker Thread");
    FUN_1001bbcfe(local_88,&local_78);
    FUN_1001b7a50(&local_78);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    local_68 = FUN_1001b83ae(local_88);
    local_74 = CONCAT44(1,param_3);
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_78 = param_2;
    local_6c = uVar1;
    iVar3 = FUN_1001ec886(&local_78,param_1 + 0xd0);
    FUN_1001b7a50(local_88);
    if (iVar3 != 0) goto LAB_1002367ff;
  }
  else {
    uVar4 = FUN_100235e52();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_74 = FUN_1001b83ae(param_1 + 0x28);
      local_78 = 0x8220102;
      __os_log_impl(0x100000000,uVar4,0x10,
                    "**ERROR**: Control thread already active!! ccp:%{public}s",&local_78,0xc);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  uVar4 = FUN_100235e52();
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  cVar2 = _os_log_type_enabled(uVar4,0);
  if (cVar2 != '\0') {
    local_74 = FUN_1001b83ae(param_1 + 0x28);
    local_78 = 0x8220102;
    __os_log_impl(0x100000000,uVar4,0,"Started up ccp:%{public}s",&local_78,0xc);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  *(undefined4 *)(param_1 + 0xfc) = 1;
  iVar3 = 0;
LAB_1002367ff:
  FUN_1001e9eb9(param_1 + 0x40);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

