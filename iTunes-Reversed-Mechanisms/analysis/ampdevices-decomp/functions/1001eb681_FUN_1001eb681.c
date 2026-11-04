// name: FUN_1001eb681
// address: 1001eb681

undefined8 FUN_1001eb681(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  size_t local_120;
  undefined1 local_118 [256];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_120 = 0x100;
  uVar2 = 0;
  iVar1 = _sysctlbyname(param_1,local_118,&local_120,(void *)0x0,0);
  if (iVar1 == 0) {
    uVar2 = FUN_100172473(0,local_118,0x8000100);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

