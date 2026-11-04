// name: FUN_1004fc593
// address: 1004fc593

int FUN_1004fc593(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_860 [1056];
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1002b1039(param_1,local_440);
  if (iVar2 == 0) {
    cVar1 = FUN_10017fbfb(local_440);
    if (cVar1 == '\0') {
      iVar2 = FUN_100184b54(local_440);
    }
    else {
      cVar1 = FUN_1001ee068();
      if (cVar1 == '\0') {
        iVar2 = FUN_100182d59(local_440,1);
      }
      else {
        _memcpy(local_860,local_440,0x420);
        if ((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
        }
        iVar2 = FUN_10030c87e(uVar3,FUN_100508330,local_860,1);
      }
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      cVar1 = FUN_100183b4f(local_440);
      if (cVar1 != '\0') {
        iVar2 = FUN_100193820(local_440);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

