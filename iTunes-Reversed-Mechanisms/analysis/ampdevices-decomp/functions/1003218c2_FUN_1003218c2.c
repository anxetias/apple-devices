// name: FUN_1003218c2
// address: 1003218c2

int FUN_1003218c2(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_1001c156e();
  iVar2 = FUN_1001c76b2(param_1 + 0x30,uVar3);
  if (iVar2 == -0x80) goto LAB_100321bbd;
  if (iVar2 == 0) {
    uVar3 = FUN_1001cc6d6();
    iVar2 = FUN_1001c76b2(param_1 + 0x30,uVar3);
    if (iVar2 == -0x80) goto LAB_100321bbd;
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      goto joined_r0x000100321b79;
    }
    local_78 = &PTR_FUN_100854280;
    local_70 = 0x21;
    local_68 = 0;
    local_60 = param_1;
    local_58 = &local_78;
    iVar2 = FUN_1001c7241(param_1 + 0x2d38,&local_78);
    if (local_58 == &local_78) {
      lVar4 = 0x20;
LAB_100321a24:
      (**(code **)((long)*local_58 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (local_58 != (undefined ***)0x0) goto LAB_100321a24;
    }
    if (iVar2 == -0x80) goto LAB_100321bbd;
    if (iVar2 == 0) {
      iVar2 = FUN_1001c666e(param_1 + 0x2d78);
      if (iVar2 == -0x80) goto LAB_100321bbd;
      if (iVar2 == 0) {
        iVar2 = FUN_1003012c8(param_1);
        if (iVar2 == -0x80) goto LAB_100321bbd;
        if (iVar2 == 0) {
          uVar5 = FUN_1001cd9a6("log-db-transactions",3,0);
          if ((uVar5 & 1) != 0) {
            *(byte *)(param_1 + 0x1bb2) = *(byte *)(param_1 + 0x1bb2) | 8;
          }
          if ((uVar5 & 2) != 0) {
            *(byte *)(param_1 + 0x1bb2) = *(byte *)(param_1 + 0x1bb2) | 0x40;
          }
          if ((uVar5 & 4) != 0) {
            *(byte *)(param_1 + 0x1bb2) = *(byte *)(param_1 + 0x1bb2) | 0x10;
          }
          iVar2 = 0;
          if ((uVar5 & 8) != 0) {
            *(byte *)(param_1 + 0x1bb2) = *(byte *)(param_1 + 0x1bb2) | 0x20;
          }
          goto LAB_100321bbd;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
joined_r0x000100321b79:
  if (cVar1 != '\0') {
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    local_3a = iVar2;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_100321bbd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

