// name: FUN_10036168c
// address: 10036168c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10036168c(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
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
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008bdd78 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008bdd78);
    if (iVar1 != 0) {
      FUN_10032f0f2(&DAT_1008bdd68);
      ___cxa_atexit(FUN_1001a8fac,&DAT_1008bdd68,0x100000000);
      ___cxa_guard_release(&DAT_1008bdd78);
    }
  }
  if (DAT_1008bdd98 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008bdd98);
    if (iVar1 != 0) {
      local_38 = PTR_cf_previousLanguages_1008557c8;
      uStack_30 = _UNK_1008557d0;
      local_48 = PTR_cf_lastMusicTabs_1008557b8;
      uStack_40 = _UNK_1008557c0;
      local_58 = PTR_cf_downloadAudioLanguages_1008557a8;
      uStack_50 = _UNK_1008557b0;
      local_68 = PTR_cf_pref_401_TouchRemotePreferences_100855798;
      uStack_60 = _UNK_1008557a0;
      local_78 = PTR_cf_sidebarItemInfo_100855788;
      uStack_70 = _UNK_100855790;
      local_88 = PTR_cf_lastViewdViewMode_100855778;
      uStack_80 = _UNK_100855780;
      local_98 = (undefined8 *)
                 CONCAT44(PTR_cf_lastViewdLibraryViewMode_100855768._4_4_,
                          PTR_cf_lastViewdLibraryViewMode_100855768._0_4_);
      uStack_90 = _UNK_100855770;
      uStack_8c = _UNK_100855774;
      FUN_10027c2fa(&DAT_1008bdd80,&local_98,7,&local_a8);
      ___cxa_atexit(FUN_100158042,&DAT_1008bdd80,0x100000000);
      ___cxa_guard_release(&DAT_1008bdd98);
    }
  }
  lVar2 = FUN_100173bb7(param_2,&cf_CDPlaylistColumns,0);
  if (lVar2 == 0) {
    local_a0 = param_1;
    if (DAT_1008bdd60 != -1) {
      local_98 = &local_a0;
      local_a8 = &local_98;
      std::__call_once((ulong *)&DAT_1008bdd60,&local_a8,FUN_100361f9b);
    }
    puVar3 = &DAT_1008bdd68;
LAB_100361773:
    uVar4 = *puVar3;
    *param_3 = uVar4;
    uVar4 = CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  else {
    if (DAT_1008bdd88 != (undefined8 *)0x0) {
      puVar3 = &DAT_1008bdd88;
      puVar5 = DAT_1008bdd88;
      do {
        if ((ulong)puVar5[4] >= param_2) {
          puVar3 = puVar5;
        }
        puVar5 = (undefined8 *)puVar5[(ulong)puVar5[4] < param_2];
      } while (puVar5 != (undefined8 *)0x0);
      if (((undefined8 **)puVar3 != &DAT_1008bdd88) && ((ulong)puVar3[4] <= param_2)) {
        puVar3 = puVar3 + 5;
        goto LAB_100361773;
      }
    }
    uVar4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

