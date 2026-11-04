// name: FUN_1004d4848
// address: 1004d4848

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1004d4848(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100300729(*(undefined8 *)(param_1 + 0x30),param_3);
  if (lVar3 != 0) {
    lVar4 = lVar3;
    if (*(long *)(param_1 + 0x30) == param_2) goto LAB_1004d49a2;
    if (*(long *)(lVar3 + 0x188) == 0) {
      if (DAT_1008c7808 == '\0') {
        FUN_100538abf(&DAT_1008c77e8,&DAT_100753530);
        DAT_1008c7808 = '\x01';
      }
      _DAT_1008c77d8 = _DAT_1008c77f8;
      uRam00000001008c77e0 = uRam00000001008c7800;
      _DAT_1008c77c8 = _DAT_1008c77e8;
      uRam00000001008c77cc = uRam00000001008c77ec;
      uRam00000001008c77d0 = uRam00000001008c77f0;
      uRam00000001008c77d4 = uRam00000001008c77f4;
      lVar4 = FUN_100306b8c(param_2,lVar3,&DAT_1008c77c8,0,0,0);
    }
    else {
      lVar4 = FUN_100300729(param_2);
    }
    if (lVar4 != 0) goto LAB_1004d49a2;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      FUN_100476ac1(local_58,lVar3);
      local_44 = FUN_1001b83ae(local_58);
      local_3a = "persistent id";
      if (*(long *)(lVar3 + 0x188) == 0) {
        local_3a = "matching fields";
      }
      local_48 = 0x8220202;
      local_3c = 0x822;
      __os_log_impl(0x100000000,uVar1,1,
                    "sync> could not find track \"%{public}s\" in library by %{public}s",&local_48,
                    0x16);
      FUN_1001b7a50(local_58);
    }
  }
  lVar4 = 0;
LAB_1004d49a2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

