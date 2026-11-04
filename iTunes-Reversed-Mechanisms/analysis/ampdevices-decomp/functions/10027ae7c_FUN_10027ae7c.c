// name: FUN_10027ae7c
// address: 10027ae7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10027ae7c(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined8 uStack_40;
  undefined *local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008b5ba0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008b5ba0);
    if (iVar1 != 0) {
      local_38 = PTR_cf_last_artist_artwork_date_100844d58;
      uStack_30 = _UNK_100844d60;
      local_48 = PTR_cf_icml_track_ids_to_upload_process_100844d48;
      uStack_40 = _UNK_100844d50;
      local_58 = PTR_cf_hls_download_info_100844d38._0_4_;
      uStack_54 = PTR_cf_hls_download_info_100844d38._4_4_;
      uStack_50 = _UNK_100844d40;
      uStack_4c = _UNK_100844d44;
      FUN_10027c2fa(&DAT_1008b5b88,&local_58,3,&local_59);
      ___cxa_atexit(FUN_100158042,&DAT_1008b5b88,0x100000000);
      ___cxa_guard_release(&DAT_1008b5ba0);
    }
  }
  if (DAT_1008b5b90 != (undefined8 *)0x0) {
    puVar2 = &DAT_1008b5b90;
    puVar4 = DAT_1008b5b90;
    do {
      if ((ulong)puVar4[4] >= param_2) {
        puVar2 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[(ulong)puVar4[4] < param_2];
    } while (puVar4 != (undefined8 *)0x0);
    if (((undefined8 **)puVar2 != &DAT_1008b5b90) && ((ulong)puVar2[4] <= param_2)) {
      uVar3 = puVar2[5];
      *param_3 = uVar3;
      uVar3 = CONCAT71((int7)((ulong)uVar3 >> 8),1);
      goto LAB_10027aee2;
    }
  }
  uVar3 = 0;
LAB_10027aee2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

