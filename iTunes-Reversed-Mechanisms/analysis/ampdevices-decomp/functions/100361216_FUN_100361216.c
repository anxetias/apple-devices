// name: FUN_100361216
// address: 100361216

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100361216(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined *local_98;
  undefined8 uStack_90;
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
  if (DAT_1008bdd18 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008bdd18);
    if (iVar1 != 0) {
      local_38 = PTR_cf_upgradeHLSSubscriptionKey_100855738;
      uStack_30 = _UNK_100855740;
      local_48 = PTR_cf_refreshedHLSKeysTime_100855728;
      uStack_40 = _UNK_100855730;
      local_58 = PTR_cf_checkedHLSKeysTime_100855718;
      uStack_50 = _UNK_100855720;
      local_68 = PTR_cf_storeMediaTypeFlags_100855708;
      uStack_60 = _UNK_100855710;
      local_78 = PTR_cf_persistentUserID_1008556f8;
      uStack_70 = _UNK_100855700;
      local_88 = PTR_cf_featureFlags_1008556e8;
      uStack_80 = _UNK_1008556f0;
      local_98 = PTR_cf_controllableInterfaceGUID_1008556d8;
      uStack_90 = _UNK_1008556e0;
      local_a8 = PTR_cf_artworkDownloadDSID_1008556c8._0_4_;
      uStack_a4 = PTR_cf_artworkDownloadDSID_1008556c8._4_4_;
      uStack_a0 = _UNK_1008556d0;
      uStack_9c = _UNK_1008556d4;
      FUN_10027c292(&DAT_1008bdd00,&local_a8,8,&local_a9);
      ___cxa_atexit(FUN_100158034,&DAT_1008bdd00,0x100000000);
      ___cxa_guard_release(&DAT_1008bdd18);
    }
  }
  if (DAT_1008bdd08 != (undefined8 *)0x0) {
    puVar2 = &DAT_1008bdd08;
    puVar4 = DAT_1008bdd08;
    do {
      if ((ulong)puVar4[4] >= param_2) {
        puVar2 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[(ulong)puVar4[4] < param_2];
    } while (puVar4 != (undefined8 *)0x0);
    if (((undefined8 **)puVar2 != &DAT_1008bdd08) && ((ulong)puVar2[4] <= param_2)) {
      uVar3 = puVar2[5];
      *param_3 = uVar3;
      uVar3 = CONCAT71((int7)((ulong)uVar3 >> 8),1);
      goto LAB_10036127f;
    }
  }
  uVar3 = 0;
LAB_10036127f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

