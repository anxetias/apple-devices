// name: FUN_1001eba58
// address: 1001eba58

int FUN_1001eba58(void)

{
  int iVar1;
  size_t local_28;
  int local_1c;
  int local_18 [2];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008a2b18 == '\x01') goto LAB_1001ebb13;
  local_28 = 4;
  iVar1 = _sysctlbyname("hw.activecpu",&local_1c,&local_28,(void *)0x0,0);
  if ((iVar1 == 0) && (local_28 == 4)) {
LAB_1001ebae8:
    DAT_10088f698 = local_1c;
  }
  else {
    local_18[0] = 6;
    local_18[1] = 3;
    local_28 = 4;
    iVar1 = _sysctl(local_18,2,&local_1c,&local_28,(void *)0x0,0);
    if ((iVar1 == 0) && (local_28 == 4)) goto LAB_1001ebae8;
  }
  if (DAT_10088f698 < 1) {
    DAT_10088f698 = 1;
  }
  DAT_1008a2b18 = '\x01';
LAB_1001ebb13:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_10) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return DAT_10088f698;
}

