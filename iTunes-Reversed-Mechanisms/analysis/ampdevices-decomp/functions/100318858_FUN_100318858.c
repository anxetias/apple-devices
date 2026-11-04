// name: FUN_100318858
// address: 100318858

int FUN_100318858(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 local_3668;
  undefined8 uStack_3660;
  long local_20;
  
  local_20 = 0x100318869;
  lVar3 = FUN_100108310();
  lVar3 = -lVar3;
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3668 = 0;
  uStack_3660 = 0;
  iVar2 = 0;
  if (param_1 != 0) {
    *(undefined8 *)((long)&local_20 + lVar3) = 0x100318893;
    cVar1 = FUN_10044acc3();
    if (((cVar1 != '\0') && (*(int *)(*(long *)(param_1 + 0x10) + 0x84) == 0x2062696c)) &&
       (iVar2 = 0, (*(byte *)(*(long *)(param_1 + 0x10) + 0x1bb0) & 1) != 0)) {
      *(undefined8 *)((long)&local_20 + lVar3) = 0x1003188bf;
      FUN_1003af7fe(&local_3668);
      *(undefined8 *)((long)&local_20 + lVar3) = 0x1003188ca;
      iVar2 = FUN_10044ab0b(param_1,&local_3668);
      if (iVar2 == 0) {
        *(undefined8 *)((long)&local_20 + lVar3) = 0x1003188df;
        FUN_100318807(param_1,&local_3668);
        iVar2 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_20 + lVar3) = FUN_100318904;
  ___stack_chk_fail();
}

