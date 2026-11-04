// name: FUN_1004d4654
// address: 1004d4654

undefined4 FUN_1004d4654(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined4 local_90;
  undefined3 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined8 local_44;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0;
  iVar5 = 1;
  do {
    FUN_1001c34b7(0x23280040,param_2);
    FUN_1001e5722(param_2,param_2,iVar5);
    lVar4 = FUN_10048b91a(param_1,param_2,1);
    *param_3 = lVar4;
    iVar5 = iVar5 + 1;
  } while (lVar4 != 0);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_9a = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_8c = 0;
  local_88 = 0x3ff0000000000000;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    FUN_1001b8dfc(local_58,param_2);
    local_44 = FUN_1001b83ae(local_58);
    local_48 = 0x8220102;
    __os_log_impl(0x100000000,uVar1,1,"sync> creating new playlist \"%{public}s\"",&local_48,0xc);
    FUN_1001b7a50(local_58);
  }
  uStack_b0 = param_2;
  uVar3 = FUN_1002e2674(param_1,1,&local_b8,param_3);
  FUN_1004d47f3(*param_3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

