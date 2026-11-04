// name: FUN_10061f473
// address: 10061f473

undefined1 FUN_10061f473(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar6 = FUN_1004744bf(param_2[1],0);
  if ((uVar6 & 0x18040) != 0x40) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "IsIPodTVShowTrack(playlistTrack->trackInfo)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if ((((*(char *)(lVar1 + 0x328) == '\0') || (*(char *)(lVar1 + 0xd30) == '\0')) ||
      (*(char *)(lVar1 + 0x3a) != '\0')) ||
     ((*(char *)(lVar1 + 0x2a2) != '\0' && (cVar4 = FUN_1003a7f56(param_2), cVar4 != '\0')))) {
    uVar5 = 0;
    goto LAB_10061f4f8;
  }
  puVar2 = (undefined8 *)param_2[1];
  cVar4 = *(char *)(lVar1 + 0x329);
  if (cVar4 == '\x01') {
LAB_10061f581:
    if ((*(char *)(lVar1 + 0x32b) != '\x01') || (*(int *)((long)puVar2 + 0x144) == 0)) {
      uVar5 = 1;
      if (*(char *)(lVar1 + 0x32a) == '\0') goto LAB_10061f4f8;
      plVar8 = (long *)**(long **)(param_1 + 0x3c8);
      plVar3 = (long *)(*(long **)(param_1 + 0x3c8))[1];
      if (plVar8 == plVar3) {
LAB_10061f61f:
        if (plVar8 != plVar3) goto LAB_10061f4f8;
      }
      else {
        do {
          if ((undefined8 *)*plVar8 == puVar2) goto LAB_10061f61f;
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar3);
      }
      goto LAB_10061f628;
    }
LAB_10061f62d:
    if (puVar2[5] != 0) {
      cVar4 = FUN_1002be216(*(undefined8 *)(lVar1 + 0x808),*(undefined8 *)(puVar2[5] + 0x20));
      uVar5 = 1;
      if (cVar4 != '\0') goto LAB_10061f4f8;
    }
    cVar4 = FUN_1002be216(*(undefined8 *)(lVar1 + 0x800),*puVar2);
    uVar5 = 1;
    if (cVar4 != '\0') goto LAB_10061f4f8;
  }
  else {
    if ((cVar4 == '\x06') || (cVar4 == '\x02')) {
      FUN_10047db99(puVar2,&local_238);
      cVar4 = FUN_1002c16fa(*(undefined8 *)(lVar1 + 0x7f8),&local_238);
      if (cVar4 != '\0') goto LAB_10061f581;
    }
LAB_10061f628:
    if (puVar2 != (undefined8 *)0x0) goto LAB_10061f62d;
  }
  uVar5 = FUN_1002be216(*(undefined8 *)(lVar1 + 0x810),*(undefined8 *)(*param_2 + 0x60));
LAB_10061f4f8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

