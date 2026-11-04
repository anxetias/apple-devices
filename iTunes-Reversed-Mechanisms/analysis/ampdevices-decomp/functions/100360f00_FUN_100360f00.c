// name: FUN_100360f00
// address: 100360f00

undefined8 FUN_100360f00(undefined8 param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_6a9;
  undefined1 local_6a8 [1664];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008bdcb8 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008bdcb8);
    if (iVar1 != 0) {
      _memcpy(local_6a8,&PTR_cf_ITUserPrefsMigrated_100854b38,0x680);
      FUN_10027c026(&DAT_1008bdca0,local_6a8,0x68,&local_6a9);
      ___cxa_atexit(FUN_10027ac08,&DAT_1008bdca0,0x100000000);
      ___cxa_guard_release(&DAT_1008bdcb8);
    }
  }
  if (DAT_1008bdca8 != (undefined8 *)0x0) {
    puVar2 = &DAT_1008bdca8;
    puVar4 = DAT_1008bdca8;
    do {
      if ((ulong)puVar4[4] >= param_2) {
        puVar2 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[(ulong)puVar4[4] < param_2];
    } while (puVar4 != (undefined8 *)0x0);
    if (((undefined8 **)puVar2 != &DAT_1008bdca8) && ((ulong)puVar2[4] <= param_2)) {
      *param_3 = *(undefined1 *)(puVar2 + 5);
      uVar3 = 1;
      goto LAB_100360f6b;
    }
  }
  uVar3 = 0;
LAB_100360f6b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

