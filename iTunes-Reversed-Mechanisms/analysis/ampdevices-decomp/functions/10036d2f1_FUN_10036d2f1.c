// name: FUN_10036d2f1
// address: 10036d2f1

long FUN_10036d2f1(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *plVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined8 local_8a;
  undefined2 local_82;
  char *local_80;
  undefined2 local_78;
  undefined8 local_76;
  undefined2 local_6e;
  long local_6c;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e9de0(&DAT_1008bddd0);
  plVar6 = (long *)(param_1 + 0x638);
  if (*(long *)(param_1 + 0x650) == 0) {
    plVar6 = (long *)(param_1 + 0x670);
  }
  if ((param_2 == 0) || (plVar6[4] == 0)) {
    plVar8 = plVar6 + 3;
    if (plVar6[3] == 0) goto LAB_10036d370;
  }
  else {
    plVar8 = plVar6 + 4;
  }
  cVar1 = _AFCConnectionIsValid();
  if ((cVar1 == '\0') && (*(long *)(param_1 + 0x6b0) == 0)) {
    FUN_1003795cb(plVar6,0);
    if (*plVar6 != 0) {
      iVar2 = FUN_10036fbfc(*plVar6,local_48,&local_58);
      if (iVar2 == 0) {
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
        if (cVar1 != '\0') {
          local_a0 = local_50;
          iVar2 = _AMDeviceGetInterfaceType(*plVar6);
          pcVar5 = "UNKNOWN";
          if (iVar2 == 2) {
            pcVar5 = "WiFi";
          }
          pcVar7 = "USB";
          if (iVar2 != 1) {
            pcVar7 = pcVar5;
          }
          uVar4 = _AMDeviceCopyDeviceIdentifier(*plVar6);
          FUN_1001aaedc(&local_a8,uVar4);
          local_6c = *plVar6;
          local_98 = 0x8000502;
          local_94 = local_58;
          local_8c = 0x800;
          local_8a = local_a0;
          local_82 = 0x822;
          local_78 = 0x842;
          local_76 = local_a8;
          local_6e = 0x800;
          local_80 = pcVar7;
          __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                        "re-created AFC connections %p, %p for %{public}s device %{public}@ (%p)",
                        &local_98,0x34);
          FUN_1001ab006(&local_a8);
        }
        FUN_1003706be(plVar6,*plVar6,local_48,&local_58);
      }
    }
  }
LAB_10036d370:
  lVar3 = FUN_1001705fc(*plVar8);
  *plVar8 = lVar3;
  FUN_1001e9eb9(&DAT_1008bddd0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return *plVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

