// name: FUN_10027ad5e
// address: 10027ad5e

undefined8 FUN_10027ad5e(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_31;
  cfstringStruct *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008b5b80 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008b5b80);
    if (iVar1 != 0) {
      local_30 = &cf_sync_playback_id;
      local_28 = 0xffffffffffffffff;
      FUN_10027c292(&DAT_1008b5b68,&local_30,1,&local_31);
      ___cxa_atexit(FUN_100158034,&DAT_1008b5b68,0x100000000);
      ___cxa_guard_release(&DAT_1008b5b80);
    }
  }
  if (DAT_1008b5b70 != (undefined8 *)0x0) {
    puVar2 = &DAT_1008b5b70;
    puVar4 = DAT_1008b5b70;
    do {
      if ((ulong)puVar4[4] >= param_2) {
        puVar2 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[(ulong)puVar4[4] < param_2];
    } while (puVar4 != (undefined8 *)0x0);
    if (((undefined8 **)puVar2 != &DAT_1008b5b70) && ((ulong)puVar2[4] <= param_2)) {
      uVar3 = puVar2[5];
      *param_3 = uVar3;
      uVar3 = CONCAT71((int7)((ulong)uVar3 >> 8),1);
      goto LAB_10027adc4;
    }
  }
  uVar3 = 0;
LAB_10027adc4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

