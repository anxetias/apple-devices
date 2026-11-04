// name: FUN_100392ae9
// address: 100392ae9

void FUN_100392ae9(undefined8 param_1,void *param_2,int *param_3)

{
  int iVar1;
  undefined1 local_478 [1096];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_478,0x448);
  _memcpy(local_478,param_2,0x420);
  iVar1 = FUN_1004e9e57(param_1,0x46494c45,local_478,0,0);
  *param_3 = iVar1;
  if (iVar1 != 0) {
    FUN_10032f3f9(param_1,param_2,iVar1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

