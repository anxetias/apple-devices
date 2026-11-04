// name: FUN_1003610f2
// address: 1003610f2

undefined8 FUN_1003610f2(undefined8 param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_269;
  undefined1 local_268 [576];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008bdcf8 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_1008bdcf8);
    if (iVar2 != 0) {
      _memcpy(local_268,&PTR_cf_ageGateLastConfirmedAge_100855488,0x240);
      FUN_10027c22a(&DAT_1008bdce0,local_268,0x24,&local_269);
      ___cxa_atexit(FUN_10027ad50,&DAT_1008bdce0,0x100000000);
      ___cxa_guard_release(&DAT_1008bdcf8);
    }
  }
  if (DAT_1008bdce8 != (undefined8 *)0x0) {
    puVar3 = &DAT_1008bdce8;
    puVar5 = DAT_1008bdce8;
    do {
      if ((ulong)puVar5[4] >= param_2) {
        puVar3 = puVar5;
      }
      puVar5 = (undefined8 *)puVar5[(ulong)puVar5[4] < param_2];
    } while (puVar5 != (undefined8 *)0x0);
    if (((undefined8 **)puVar3 != &DAT_1008bdce8) && ((ulong)puVar3[4] <= param_2)) {
      uVar1 = *(undefined4 *)(puVar3 + 5);
      *param_3 = uVar1;
      uVar4 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      goto LAB_10036115d;
    }
  }
  uVar4 = 0;
LAB_10036115d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

