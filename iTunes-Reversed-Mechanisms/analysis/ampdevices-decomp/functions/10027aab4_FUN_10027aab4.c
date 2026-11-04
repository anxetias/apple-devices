// name: FUN_10027aab4
// address: 10027aab4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10027aab4(undefined8 param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_99;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
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
  if (DAT_1008b5b40 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008b5b40);
    if (iVar1 != 0) {
      local_38 = PTR_cf_show_only_favorite_playlists_100844cd8;
      uStack_30 = _UNK_100844ce0;
      local_48 = PTR_cf_show_only_favorite_made_for_you_100844cc8;
      uStack_40 = _UNK_100844cd0;
      local_58 = PTR_cf_show_only_favorite_songs_100844cb8;
      uStack_50 = _UNK_100844cc0;
      local_68 = PTR_cf_show_only_favorite_albums_100844ca8;
      uStack_60 = _UNK_100844cb0;
      local_78 = PTR_cf_show_only_favorite_artists_100844c98;
      uStack_70 = _UNK_100844ca0;
      local_88 = PTR_cf_offline_banner_user_dismissed_100844c88;
      uStack_80 = _UNK_100844c90;
      local_98 = PTR_cf_need_rental_sync_100844c78._0_4_;
      uStack_94 = PTR_cf_need_rental_sync_100844c78._4_4_;
      uStack_90 = _UNK_100844c80;
      uStack_8c = _UNK_100844c84;
      FUN_10027c026(&DAT_1008b5b28,&local_98,7,&local_99);
      ___cxa_atexit(FUN_10027ac08,&DAT_1008b5b28,0x100000000);
      ___cxa_guard_release(&DAT_1008b5b40);
    }
  }
  if (DAT_1008b5b30 != (undefined8 *)0x0) {
    puVar2 = &DAT_1008b5b30;
    puVar4 = DAT_1008b5b30;
    do {
      if ((ulong)puVar4[4] >= param_2) {
        puVar2 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[(ulong)puVar4[4] < param_2];
    } while (puVar4 != (undefined8 *)0x0);
    if (((undefined8 **)puVar2 != &DAT_1008b5b30) && ((ulong)puVar2[4] <= param_2)) {
      *param_3 = *(undefined1 *)(puVar2 + 5);
      uVar3 = 1;
      goto LAB_10027ab1d;
    }
  }
  uVar3 = 0;
LAB_10027ab1d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

