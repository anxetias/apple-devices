// name: FUN_1004b056a
// address: 1004b056a

undefined8 FUN_1004b056a(long param_1,undefined1 param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_458;
  char local_457;
  char local_456;
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_458,0x428);
  local_458 = param_2;
  iVar2 = FUN_1004abe13(param_1,0x63726466,&local_458);
  if (iVar2 == 0) {
    if (local_456 != '\0') {
      _memcpy(param_3,local_450,0x420);
      uVar4 = 0;
      goto LAB_1004b0613;
    }
    uVar4 = 0xffffffce;
    if (local_457 != '\0') goto LAB_1004b0613;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = FUN_1004ac8a7(param_1,param_2);
  uVar4 = FUN_100534ba4(lVar1 + 0x1a8,uVar3,param_3);
LAB_1004b0613:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

