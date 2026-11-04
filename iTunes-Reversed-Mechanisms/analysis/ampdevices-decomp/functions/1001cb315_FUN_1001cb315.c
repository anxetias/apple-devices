// name: FUN_1001cb315
// address: 1001cb315

undefined1 * FUN_1001cb315(long param_1,short *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  short sVar3;
  ulong uVar4;
  int local_420;
  byte local_419;
  ushort local_418 [512];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_1001cad10(param_1,1,&local_419,local_418,0x400,&local_420);
    puVar2 = (undefined1 *)0x0;
    if ((iVar1 != 0) || ((long)local_420 == 0)) goto LAB_1001cb3a1;
    puVar2 = &DAT_ffffff30;
    if (0x12 < local_419) goto LAB_1001cb3a1;
    if ((0x406d2U >> (local_419 & 0x1f) & 1) == 0) {
      if ((0x24U >> (local_419 & 0x1f) & 1) != 0) {
        iVar1 = 0x1fe;
        if (local_420 < 0x1fe) {
          iVar1 = local_420;
        }
        sVar3 = (short)(iVar1 / 2);
        *param_2 = sVar3;
        puVar2 = (undefined1 *)0x0;
        if (sVar3 != 0) {
          puVar2 = (undefined1 *)0x0;
          uVar4 = 0;
          do {
            param_2[uVar4 + 1] = local_418[uVar4] << 8 | local_418[uVar4] >> 8;
            uVar4 = uVar4 + 1;
          } while ((iVar1 / 2 & 0xffff) != uVar4);
        }
      }
      goto LAB_1001cb3a1;
    }
    FUN_1001e5811(local_418,(long)local_420,param_2);
  }
  puVar2 = (undefined1 *)0x0;
LAB_1001cb3a1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar2;
}

