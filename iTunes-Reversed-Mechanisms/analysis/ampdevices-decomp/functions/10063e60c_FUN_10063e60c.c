// name: FUN_10063e60c
// address: 10063e60c

undefined8 FUN_10063e60c(long param_1,void *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_78;
  undefined4 local_74;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  _memcpy((void *)(param_1 + 0x1c),param_2,0xa0);
  if ((*(byte *)((long)param_2 + 0x40) | 2) != 3) {
    *(undefined1 *)(param_1 + 0x9b8) = 1;
  }
  if ((*(uint *)(param_1 + 0x18) & 0x20) != 0) goto LAB_10063e77f;
  if ((*(uint *)(param_1 + 0x18) & 2) == 0) {
    FUN_1003090e3(*(undefined8 *)(param_1 + 8),*(undefined1 *)((long)param_2 + 0x68),
                  *(undefined8 *)((long)param_2 + 0x30));
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined1 *)((long)param_2 + 0x68);
  plVar5 = operator_new(0xa8);
  *plVar5 = (long)&PTR_FUN_100871480;
  _memcpy(plVar5 + 1,param_2,0xa0);
  local_48 = plVar5;
  FUN_100308bbf(uVar2,uVar1,local_68);
  if (local_48 == local_68) {
    lVar6 = 0x20;
LAB_10063e6dc:
    (**(code **)(*local_48 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_10063e6dc;
  }
  *(undefined8 *)(param_1 + 0x9c0) = *(undefined8 *)((long)param_2 + 0x5c);
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(lVar6 + 0xa0);
      uVar7 = (undefined4)*(undefined8 *)(lVar6 + 0xa4);
      uVar8 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0xa4) >> 0x20);
      uVar9 = (undefined4)*(undefined8 *)(lVar6 + 0x98);
      uVar10 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x98) >> 0x20);
    }
    *(undefined4 *)(param_1 + 0x760) = uVar7;
    *(undefined4 *)(param_1 + 0x764) = uVar8;
    *(undefined4 *)(param_1 + 0x768) = uVar9;
    *(undefined4 *)(param_1 + 0x76c) = uVar10;
    *(undefined4 *)(param_1 + 0x770) = uVar4;
    if (DAT_1008c66e8 != -1) {
      _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
    }
    uVar2 = DAT_1008c66e0;
    cVar3 = _os_log_type_enabled(DAT_1008c66e0,0);
    if (cVar3 != '\0') {
      local_74 = *(undefined4 *)((long)param_2 + 0x68);
      local_78 = 0x4000100;
      __os_log_impl(0x100000000,uVar2,0,"db> Begin DB load: mediaDomains = %d",&local_78,8);
    }
  }
LAB_10063e77f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

