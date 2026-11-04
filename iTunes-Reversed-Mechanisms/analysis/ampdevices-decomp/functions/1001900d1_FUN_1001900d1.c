// name: FUN_1001900d1
// address: 1001900d1

undefined4 FUN_1001900d1(long param_1,undefined8 param_2,byte param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_9b0 [80];
  void *local_960;
  undefined1 local_958 [25];
  undefined1 local_93f [1031];
  undefined1 local_538 [256];
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_960 = param_4;
  FUN_10018a3cf(param_1 + 0x19,0x2f,local_438,0x400,local_538,0xfe);
  FUN_1001e5b77(param_2,local_538,0xfe);
  FUN_10019212e(local_438,local_538,local_958);
  iVar1 = FUN_10017d477(local_958,local_9b0,0);
  if (iVar1 == 0) {
    uVar2 = 0xffffffd0;
  }
  else {
    iVar1 = _renamex_np(param_1 + 0x19,local_93f,(ulong)(param_3 ^ 1) << 4);
    if (iVar1 == 0) {
      uVar2 = 0;
      if (local_960 != (void *)0x0) {
        _memcpy(local_960,local_958,0x420);
      }
    }
    else {
      piVar3 = ___error();
      uVar2 = FUN_1001eb020(*piVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

