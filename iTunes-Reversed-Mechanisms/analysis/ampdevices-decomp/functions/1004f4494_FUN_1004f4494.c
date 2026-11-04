// name: FUN_1004f4494
// address: 1004f4494

byte FUN_1004f4494(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 local_58;
  uint local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1004de449();
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      pcVar6 = "handlerData != nullptr";
LAB_1004f4619:
      uStack_3c = 0x822;
      local_40 = 1;
      uStack_44 = 0x7a0a90;
      local_48 = 0x8220202;
      uStack_3a = SUB82(pcVar6,0);
      uStack_38 = (undefined6)((ulong)pcVar6 >> 0x10);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar4 = FUN_10048604a(*(undefined8 *)(lVar4 + 0x30));
    if (lVar4 != 0) {
      local_48 = (undefined4)*(undefined8 *)(lVar4 + 0x78);
      uStack_44 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x78) >> 0x20);
      local_40 = 0xffffffff;
      uStack_3c = 0xffff;
      uStack_3a = 0xffff;
      uVar5 = FUN_1004f465d(param_2);
      bVar2 = FUN_10063ae61(lVar4,uVar5,&local_48,0,0,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_54 = (uint)bVar2;
        local_58 = 0x4000100;
        __os_log_impl(0x100000000,uVar1,1,"drag> can accept internal drag = %{BOOL}d",&local_58,8);
      }
      FUN_1002c38bf(uVar5);
      goto LAB_1004f45d5;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      pcVar6 = "playlist != nullptr";
      goto LAB_1004f4619;
    }
  }
  bVar2 = 0;
  FUN_1001782e9(0,0);
LAB_1004f45d5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

