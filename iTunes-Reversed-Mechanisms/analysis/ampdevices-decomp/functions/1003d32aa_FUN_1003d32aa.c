// name: FUN_1003d32aa
// address: 1003d32aa

void FUN_1003d32aa(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  undefined1 local_448 [1056];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  iVar3 = FUN_1002441f8(*(undefined4 *)(lVar1 + 0x66b0),lVar1 + 0x6b40,0x61727477,0,local_448);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      cVar2 = FUN_1002669ba(*(undefined8 *)(lVar1 + 0x66d8));
      if (cVar2 == '\0') {
        FUN_100591b55(*(undefined8 *)(lVar1 + 0x66c0),local_448,5,0x64656c61,param_1 + 0x410);
        FUN_100182d4d(local_448);
      }
      else {
        FUN_100182d59(local_448,0);
      }
      FUN_1004decb2(lVar1);
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_468 = 0x8220202;
        local_464 = "Assertion failure";
        local_45c = 0x400;
        local_45a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_468,0x12);
      }
    }
  }
  FUN_1001e9809(param_1 + 0x4c8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

