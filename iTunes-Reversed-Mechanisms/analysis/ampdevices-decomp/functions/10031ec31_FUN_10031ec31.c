// name: FUN_10031ec31
// address: 10031ec31

bool FUN_10031ec31(long param_1,ulong param_2,short *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (short *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      local_3c = 0x822;
      local_3a = "appleID != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_3 = 0;
    if (param_1 == 0) {
LAB_10031ee18:
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        local_3c = 0x822;
        local_3a = "TrackDataIsValid(trackData)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (*(int *)(param_1 + 0x80) != 0x74646174) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7ab58c;
          local_40 = 1;
          local_3c = 0x822;
          local_3a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        cVar2 = FUN_1001782e9(0,1);
        if (cVar2 == '\0') goto LAB_10031ee18;
      }
      if (param_2 != 0) {
        lVar1 = *(long *)(param_1 + 0x26f8);
        if ((lVar1 != 0) && (lVar5 = *(long *)(lVar1 + 8), lVar5 != 0)) {
          lVar6 = lVar1 + 8;
          do {
            bVar7 = *(ulong *)(lVar5 + 0x20) < param_2;
            if (!bVar7) {
              lVar6 = lVar5;
            }
            lVar5 = *(long *)(lVar5 + (ulong)bVar7 * 8);
          } while (lVar5 != 0);
          if ((lVar6 != lVar1 + 8) && (*(ulong *)(lVar6 + 0x20) <= param_2)) {
            FUN_1001bb41a(lVar6 + 0x28,param_3);
          }
        }
        if (*param_3 == 0) {
          cVar2 = FUN_10031efff(param_1,param_2,0xffffffff,param_3,0);
          if (cVar2 == '\0') {
            cVar2 = FUN_10031efff(param_1,param_2,1,param_3,1);
            if (cVar2 == '\0') {
              cVar2 = FUN_10031efff(param_1,param_2,0xfffffffe,param_3,1);
              if (cVar2 == '\0') goto LAB_10031edeb;
            }
          }
          if (*param_3 != 0) {
            plVar4 = *(long **)(param_1 + 0x26f8);
            if (plVar4 == (long *)0x0) {
              plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
              if (plVar4 == (long *)0x0) {
                *(undefined8 *)(param_1 + 0x26f8) = 0;
                goto LAB_10031edeb;
              }
              plVar4[1] = 0;
              plVar4[2] = 0;
              *plVar4 = (long)(plVar4 + 1);
              *(long **)(param_1 + 0x26f8) = plVar4;
            }
            FUN_1001b8dfc(local_58,param_3);
            local_48 = (undefined4)param_2;
            uStack_44 = (undefined4)(param_2 >> 0x20);
            FUN_1001b7a88(&local_40,local_58);
            FUN_10032470e(plVar4,&local_48);
            FUN_1001b7a50(&local_40);
            FUN_1001b7a50(local_58);
          }
        }
LAB_10031edeb:
        bVar7 = *param_3 != 0;
        goto LAB_10031ee68;
      }
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        local_3c = 0x822;
        local_3a = "dsid != 0";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  bVar7 = false;
LAB_10031ee68:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

