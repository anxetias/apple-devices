// name: FUN_100635a98
// address: 100635a98

int FUN_100635a98(undefined8 param_1,byte *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  ushort local_4a;
  undefined4 local_48;
  uint local_44;
  undefined2 uStack_40;
  ushort uStack_3e;
  undefined2 uStack_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_10063534d(param_1,1,&local_4a,2);
  if (iVar3 == 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar4 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_44 = (uint)local_4a;
      uStack_3e = local_4a & 3;
      local_48 = 0x4000300;
      uStack_40 = 0x400;
      uStack_3c = 0;
      local_3a._0_6_ = (uint6)CONCAT22(local_4a >> 8,0x400);
      __os_log_impl(0x100000000,uVar4,1,
                    "batteryStatus = 0x%04X (batteryState = %u, batteryPercent = %u)",&local_48,0x14
                   );
    }
    if (param_2 != (byte *)0x0) {
      *param_2 = (byte)local_4a & 3;
    }
    if (param_3 != (undefined1 *)0x0) {
      uVar2 = 0xff;
      if ((char)(byte)local_4a < '\0') {
        uVar2 = (char)(local_4a >> 8);
      }
      *param_3 = uVar2;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x822;
      local_3a = "err == 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

