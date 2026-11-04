// name: FUN_1005eda55
// address: 1005eda55

int FUN_1005eda55(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_99;
  undefined4 local_98;
  char *local_94;
  undefined2 local_8c;
  int local_8a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = 0;
  if (param_1[0x111] != 0x2711) goto LAB_1005edc09;
  uVar1 = param_1[0xbe];
  FUN_100249cb6(&local_98,param_1[0xba],param_1[0xbd],uVar1,param_1[0xbf],*param_1,0x2711);
  iVar3 = FUN_10024be76(uVar1,&local_98,&local_99);
  FUN_100249ea6(&local_98);
  if (iVar3 == 0x5c6) {
    iVar3 = FUN_1005f09c2(param_1);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        uVar1 = param_1[0xbe];
        FUN_100249cb6(&local_98,param_1[0xba],param_1[0xbd],uVar1,param_1[0xbf],*param_1,
                      param_1[0x111]);
        iVar3 = FUN_10024be76(uVar1,&local_98,&local_99);
        FUN_100249ea6(&local_98);
        if (iVar3 == -0x80) goto LAB_1005edbff;
        if (iVar3 == 0) goto LAB_1005edb74;
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
      }
      if (cVar2 != '\0') {
        local_8c = 0x400;
        local_94 = "Assertion failure";
        local_98 = 0x8220202;
        local_8a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_98,0x12);
      }
    }
  }
  else {
LAB_1005edb74:
    iVar5 = 0;
    FUN_1004ffa54(param_1[0x111],local_99,0);
    *(undefined1 *)((long)param_1 + 0x68c6) = 0;
    if (iVar3 == 0) goto LAB_1005edc09;
  }
LAB_1005edbff:
  *(undefined1 *)((long)param_1 + 0x68c6) = 1;
  iVar5 = iVar3;
LAB_1005edc09:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

