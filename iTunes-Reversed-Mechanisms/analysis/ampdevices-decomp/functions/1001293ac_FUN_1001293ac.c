// name: FUN_1001293ac
// address: 1001293ac

ulong FUN_1001293ac(undefined4 *param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined7 uVar10;
  ulong uVar9;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_50 [16];
  cfstringStruct *local_40;
  undefined1 local_38 [16];
  cfstringStruct *local_28;
  
  local_28 = &cf_kind;
  FUN_1001a8c1c(local_38);
  FUN_1001b7a44(local_f8);
  puVar1 = param_1 + 4;
  FUN_100129a4c(local_50,puVar1,local_38,local_f8);
  FUN_1001b7a50(local_f8);
  FUN_1001ab006(local_38);
  iVar5 = FUN_1001ba026(local_50,"Goto");
  if (iVar5 == 0) {
    local_40 = &cf_url;
    FUN_1001a8c1c(&local_28);
    FUN_1001b7a44(local_e8);
    FUN_100129a4c(local_38,puVar1,&local_28,local_e8);
    FUN_1001b7a50(local_e8);
    FUN_1001ab006(&local_28);
    cVar4 = FUN_1001b8428(local_38);
    if (cVar4 == '\0') {
      FUN_1001b7a5c(local_d8,local_38);
      plVar2 = *(long **)(param_1 + 2);
      local_128 = *param_1;
      uStack_124 = param_1[1];
      uStack_120 = param_1[2];
      uStack_11c = param_1[3];
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar2[1] = plVar2[1] + 1;
        UNLOCK();
      }
      uVar6 = FUN_100129c65(local_d8,puVar1,param_1 + 8,&local_128);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar3 = plVar2 + 1;
        lVar7 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar8 = local_d8;
LAB_1001296a9:
      uVar9 = (ulong)uVar6;
      FUN_1001b7a50(puVar8);
    }
    else {
LAB_1001295df:
      uVar9 = 0;
    }
    FUN_1001b7a50(local_38);
    goto LAB_1001298f7;
  }
  iVar5 = FUN_1001ba026(local_50,"SetUser");
  uVar10 = (undefined7)((ulong)param_1 >> 8);
  if (iVar5 == 0) {
    local_28 = &cf_dsPersonId;
    FUN_1001a8c1c(local_38);
    lVar7 = FUN_100133ca4(puVar1,local_38,0);
    FUN_1001ab006(local_38);
    if (lVar7 != 0) {
      uVar9 = CONCAT71(uVar10,1);
      FUN_100129e07(lVar7,puVar1);
      goto LAB_1001298f7;
    }
  }
  else {
    iVar5 = FUN_1001ba026(local_50,"SetUserAndReset");
    if (iVar5 == 0) {
      local_28 = &cf_dsPersonId;
      FUN_1001a8c1c(local_38);
      lVar7 = FUN_100133ca4(puVar1,local_38,0);
      FUN_1001ab006(local_38);
      if (lVar7 != 0) {
        FUN_100129e07(lVar7,puVar1);
        FUN_10012bfb0();
        local_40 = &cf_url;
        FUN_1001a8c1c(&local_28);
        FUN_1001b7a44(local_c8);
        FUN_100129a4c(local_38,puVar1,&local_28,local_c8);
        FUN_1001b7a50(local_c8);
        FUN_1001ab006(&local_28);
        cVar4 = FUN_1001b8428(local_38);
        if (cVar4 == '\0') {
          FUN_1001b7a5c(local_b8,local_38);
          plVar2 = *(long **)(param_1 + 2);
          local_118 = *param_1;
          uStack_114 = param_1[1];
          uStack_110 = param_1[2];
          uStack_10c = param_1[3];
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar2[1] = plVar2[1] + 1;
            UNLOCK();
          }
          FUN_100129c65(local_b8,puVar1,param_1 + 8,&local_118);
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar3 = plVar2 + 1;
            lVar7 = *plVar3;
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (lVar7 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              std::__shared_weak_count::__release_weak();
            }
          }
          puVar8 = local_b8;
          goto LAB_1001298e6;
        }
        goto LAB_1001298eb;
      }
    }
    else {
      iVar5 = FUN_1001ba026(local_50,"Reset");
      if (iVar5 == 0) {
        local_28 = &cf_signout;
        FUN_1001a8c1c(local_38);
        FUN_100129b0a(puVar1,local_38,0);
        FUN_1001ab006(local_38);
        FUN_10012bfb0();
        local_40 = &cf_url;
        FUN_1001a8c1c(&local_28);
        FUN_1001b7a44(local_a8);
        FUN_100129a4c(local_38,puVar1,&local_28,local_a8);
        FUN_1001b7a50(local_a8);
        FUN_1001ab006(&local_28);
        cVar4 = FUN_1001b8428(local_38);
        if (cVar4 == '\0') {
          FUN_1001b7a5c(local_98,local_38);
          plVar2 = *(long **)(param_1 + 2);
          local_108 = *param_1;
          uStack_104 = param_1[1];
          uStack_100 = param_1[2];
          uStack_fc = param_1[3];
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar2[1] = plVar2[1] + 1;
            UNLOCK();
          }
          FUN_100129c65(local_98,puVar1,param_1 + 8,&local_108);
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar3 = plVar2 + 1;
            lVar7 = *plVar3;
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (lVar7 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              std::__shared_weak_count::__release_weak();
            }
          }
          puVar8 = local_98;
LAB_1001298e6:
          FUN_1001b7a50(puVar8);
        }
LAB_1001298eb:
        FUN_1001b7a50(local_38);
        uVar9 = CONCAT71(uVar10,1);
        goto LAB_1001298f7;
      }
      iVar5 = FUN_1001ba026(local_50,"OpenURL");
      if (iVar5 == 0) {
        local_28 = &cf_target;
        FUN_1001a8c1c(local_38);
        FUN_1001a7b90(&local_40);
        FUN_10012a380(puVar1,local_38,&local_40);
        FUN_1001ab240(&local_40);
        FUN_1001ab006(local_38);
        local_40 = &cf_url;
        FUN_1001a8c1c(&local_28,&local_40);
        FUN_1001b7a44(local_88);
        FUN_100129a4c(local_38,puVar1,&local_28,local_88);
        FUN_1001b7a50(local_88);
        FUN_1001ab006(&local_28);
        cVar4 = FUN_1001b8428(local_38);
        if (cVar4 != '\0') goto LAB_1001295df;
        FUN_1001b7a5c(local_78,local_38);
        local_68 = *param_1;
        uStack_64 = param_1[1];
        uStack_60 = param_1[2];
        uStack_5c = param_1[3];
        if (*(long *)(param_1 + 2) != 0) {
          LOCK();
          plVar2 = (long *)(*(long *)(param_1 + 2) + 8);
          *plVar2 = *plVar2 + 1;
          UNLOCK();
        }
        uVar6 = FUN_100129c65(local_78,puVar1,param_1 + 8,&local_68);
        FUN_10021e316(&local_68);
        puVar8 = local_78;
        goto LAB_1001296a9;
      }
    }
  }
  uVar9 = 0;
LAB_1001298f7:
  FUN_1001b7a50(local_50);
  return uVar9 & 0xffffffff;
}

