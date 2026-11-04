// name: FUN_100357184
// address: 100357184

void FUN_100357184(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined2 local_448 [4];
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 0x9c) == 0)) &&
     (*(char *)(param_1 + 0x3a2) == '\0')) {
    iVar3 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x61727477,0,local_440)
    ;
    if (iVar3 == 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_448[0] = 0;
        __os_log_impl(0x100000000,uVar1,1,"artwork> deleting Artwork directory",local_448,2);
      }
      FUN_100182d59(local_440,0);
    }
    FUN_1004decb2(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

