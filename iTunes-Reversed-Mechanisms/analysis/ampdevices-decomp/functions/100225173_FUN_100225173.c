// name: FUN_100225173
// address: 100225173

void FUN_100225173(long param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  iVar2 = FUN_1003870d4(param_2,2,local_458);
  if (iVar2 == 0) {
    FUN_10017fdd8(local_458,1,1,FUN_100229ef0,param_1);
  }
  iVar2 = FUN_1003870d4(param_3,2,local_458);
  if (iVar2 == 0) {
    FUN_10017fdd8(local_458,1,1,FUN_100229ef0,param_1);
  }
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != *(long *)(param_1 + 0x10)) {
    do {
      iVar2 = FUN_100193820(lVar4);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_478 = 0x8220202;
          local_474 = "Assertion failure";
          local_46c = 0x400;
          local_46a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
      }
      lVar4 = lVar4 + 0x420;
    } while (lVar4 != *(long *)(param_1 + 0x10));
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

