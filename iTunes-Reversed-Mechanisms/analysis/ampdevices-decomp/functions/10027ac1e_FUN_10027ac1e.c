// name: FUN_10027ac1e
// address: 10027ac1e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10027ac1e(undefined8 param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined *local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 uStack_40;
  undefined *local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008b5b60 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_1008b5b60);
    if (iVar2 != 0) {
      local_38 = PTR_cf_last_ICML_disable_100844d28;
      uStack_30 = _UNK_100844d30;
      local_48 = PTR_cf_last_sub_update_100844d18;
      uStack_40 = _UNK_100844d20;
      local_58 = PTR_cf_extras_next_update_100844d08;
      uStack_50 = _UNK_100844d10;
      local_68 = PTR_cf_list_view_size_100844cf8;
      uStack_60 = _UNK_100844d00;
      local_78 = PTR_cf_ratings_mode_100844ce8._0_4_;
      uStack_74 = PTR_cf_ratings_mode_100844ce8._4_4_;
      uStack_70 = _UNK_100844cf0;
      uStack_6c = _UNK_100844cf4;
      FUN_10027c22a(&DAT_1008b5b48,&local_78,5,&local_79);
      ___cxa_atexit(FUN_10027ad50,&DAT_1008b5b48,0x100000000);
      ___cxa_guard_release(&DAT_1008b5b60);
    }
  }
  if (DAT_1008b5b50 != (undefined8 *)0x0) {
    puVar3 = &DAT_1008b5b50;
    puVar5 = DAT_1008b5b50;
    do {
      if ((ulong)puVar5[4] >= param_2) {
        puVar3 = puVar5;
      }
      puVar5 = (undefined8 *)puVar5[(ulong)puVar5[4] < param_2];
    } while (puVar5 != (undefined8 *)0x0);
    if (((undefined8 **)puVar3 != &DAT_1008b5b50) && ((ulong)puVar3[4] <= param_2)) {
      uVar1 = *(undefined4 *)(puVar3 + 5);
      *param_3 = uVar1;
      uVar4 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      goto LAB_10027ac84;
    }
  }
  uVar4 = 0;
LAB_10027ac84:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

