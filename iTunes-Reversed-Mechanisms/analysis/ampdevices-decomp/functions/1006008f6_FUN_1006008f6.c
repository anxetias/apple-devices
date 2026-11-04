// name: FUN_1006008f6
// address: 1006008f6

undefined8 FUN_1006008f6(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 local_38;
  uint local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(*(long *)(param_1 + 8) + 0x2cf8) != 0) {
    pbVar1 = (byte *)*param_2;
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar3 = DAT_1008c7d18;
    cVar4 = _os_log_type_enabled(DAT_1008c7d18,1);
    if (cVar4 != '\0') {
      local_38 = 0x4000100;
      local_34 = (uint)*pbVar1;
      __os_log_impl(0x100000000,uVar3,1,"closing artwork DB for %d",&local_38,8);
    }
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x2cf8);
    (**(code **)(*plVar2 + 0x10))
              (plVar2,*(undefined8 *)(pbVar1 + 8),*(undefined4 *)(param_1 + 0x10));
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

