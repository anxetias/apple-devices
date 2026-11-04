// name: FUN_1003d3b6a
// address: 1003d3b6a

bool FUN_1003d3b6a(long param_1,void *param_2)

{
  long lVar1;
  int iVar2;
  undefined1 local_470 [1096];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_470,0x448);
  _memcpy(local_470,param_2,0x420);
  iVar2 = FUN_1004e9e57(*(undefined8 *)(*(long *)(param_1 + 8) + 0x10),0x46494c45,local_470,0,0);
  if (iVar2 != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    if (lVar1 != 0) {
      FUN_10057c396(lVar1,0x46494c45,local_470,iVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

