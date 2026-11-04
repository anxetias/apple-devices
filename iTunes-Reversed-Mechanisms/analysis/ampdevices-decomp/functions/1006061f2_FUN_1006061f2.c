// name: FUN_1006061f2
// address: 1006061f2

long FUN_1006061f2(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_250 [20];
  undefined4 local_23c;
  undefined4 local_238;
  undefined8 local_234;
  undefined2 local_22c;
  undefined8 local_22a;
  undefined2 local_222;
  undefined8 local_220;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  local_23c = param_4;
  if (((puVar1 == (undefined8 *)0x0) || (puVar1[2] == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x10) + 0x38) == 0)) {
    if (*(int *)((long)puVar1 + 0xc2) < 0) {
      uVar4 = FUN_1004744bf(puVar1,0);
      if ((uVar4 & 0xc00000) != 0) {
        lVar5 = FUN_1003003ff(param_2,*puVar1,1);
        goto LAB_10060634f;
      }
    }
    lVar5 = FUN_100306976(param_2,param_1,0,0,1,0);
  }
  else {
    uVar3 = FUN_1004744bf(puVar1,0);
    if ((uVar3 >> 0x16 & 1) == 0) {
      if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
      }
      lVar5 = FUN_1002b231f(param_3,uVar6,0,1,*(undefined2 *)(*(long *)(param_1 + 0x18) + 2),2,0,0);
    }
    else {
      FUN_10030666b(param_1,&local_238,1);
      if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
      }
      lVar5 = FUN_1002b231f(param_3,uVar6,0,1,100,2,&local_238,0);
    }
  }
LAB_10060634f:
  if (lVar5 != 0) {
    uVar4 = *(ulong *)(*(long *)(lVar5 + 0x10) + 0xa8);
    if ((uVar4 == 0) || (*(ulong *)(*(long *)(param_1 + 0x10) + 0xa8) <= uVar4)) goto LAB_100606448;
    if ((char)local_23c != '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        FUN_100476ac1(local_250,puVar1);
        local_234 = FUN_1001b83ae(local_250);
        local_22a = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0xa8);
        local_220 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8);
        local_238 = 0x8220302;
        local_22c = 0x800;
        local_222 = 0x800;
        __os_log_impl(0x100000000,uVar6,1,
                      "sync> replacing track \"%{public}s\" in library since device version is newer (%llu vs. %llu)"
                      ,&local_238,0x20);
        FUN_1001b7a50(local_250);
      }
    }
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 1;
    }
  }
  lVar5 = 0;
LAB_100606448:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

