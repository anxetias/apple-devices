// name: FUN_1004cf328
// address: 1004cf328

void FUN_1004cf328(long param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined4 local_48;
  int local_44;
  undefined2 local_40;
  undefined8 local_3e;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar2 = DAT_1008c7d18;
    cVar3 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar3 != '\0') {
      local_3e = *param_3;
      local_48 = 0x4000202;
      local_40 = 0x840;
      local_44 = iVar1;
      __os_log_impl(0x100000000,uVar2,0x10,
                    "**ERROR**: StartLoadingDatabaseItems()[] failed! error:%d failureDict:%@",
                    &local_48,0x12);
    }
  }
  lVar4 = FUN_100314a6c(*(undefined4 *)(param_1 + 8));
  if (lVar4 != 0) {
    cVar3 = FUN_10031b8dc(lVar4);
    if (cVar3 == '\x04') {
      FUN_100319a94(lVar4,*(undefined1 *)(param_1 + 0xc),iVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

