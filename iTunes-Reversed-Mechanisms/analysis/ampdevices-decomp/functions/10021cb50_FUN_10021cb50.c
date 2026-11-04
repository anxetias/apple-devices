// name: FUN_10021cb50
// address: 10021cb50

void FUN_10021cb50(long param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_40c [85];
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined1 local_2a0 [624];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001dfc9d(param_2,param_1 + 0x29c);
  _memcpy(local_40c,(void *)(param_1 + 0x298),0x154);
  local_40c[0] = local_40c[0] >> 0x18 | (local_40c[0] & 0xff0000) >> 8 |
                 (local_40c[0] & 0xff00) << 8 | local_40c[0] << 0x18;
  uVar4 = *(undefined8 *)(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  ___bzero(local_2a0,0x26c);
  local_2a4 = 0x154;
  local_2b8 = 10;
  uStack_2b4 = 9;
  local_2b0 = 0x284;
  local_2ac = local_40c;
  iVar3 = (*pcVar1)(uVar4,0x73707266,&local_2b8);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_2b8 = 0x8220202;
      uStack_2b4 = 0x7a0a90;
      local_2b0 = 1;
      local_2ac._0_6_ = CONCAT42(iVar3,0x400);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_2b8,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

