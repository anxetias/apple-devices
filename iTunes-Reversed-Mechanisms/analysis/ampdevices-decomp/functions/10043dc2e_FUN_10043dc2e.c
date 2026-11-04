// name: FUN_10043dc2e
// address: 10043dc2e

undefined8 FUN_10043dc2e(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *puStack_50;
  long local_48 [2];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_58 = 0;
  puStack_50 = (undefined8 *)0x0;
  iVar2 = FUN_1001e8dd6(&local_78,0,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      local_58 = CONCAT44(local_58._4_4_,0x6361726c);
      puStack_50 = &local_78;
      FUN_1001ee6ff(FUN_10044a4b8,&local_58,0,0,0,"CoreAudioNotificationThread");
      FUN_1001e944c(&local_78);
      if (local_48[0] != 0) {
        DAT_1008c7698 = local_48[0];
        _AudioHardwareSetProperty(0x726e6c70,8,local_48);
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
  }
  cVar1 = FUN_1001e8dbb(&local_78);
  if (cVar1 != '\0') {
    FUN_1001e9587(&local_78);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

