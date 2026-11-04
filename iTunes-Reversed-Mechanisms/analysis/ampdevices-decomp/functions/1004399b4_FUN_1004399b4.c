// name: FUN_1004399b4
// address: 1004399b4

undefined8 FUN_1004399b4(long param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long local_d0;
  char local_b9;
  undefined **local_b8;
  long local_b0;
  undefined ***local_98;
  undefined **local_88;
  long local_80;
  char *local_78;
  undefined ***local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_d0 = 0;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (param_1 == 0) {
LAB_100439cce:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100439cce;
    }
    uVar3 = FUN_1004e0c3f(param_1,1);
    FUN_10031c15f(uVar3);
    iVar2 = FUN_1002c0e84(*(undefined8 *)(param_1 + 0x152f0));
    if (iVar2 != 0) {
      iVar8 = 0;
      do {
        uVar4 = FUN_1002c11e9(*(undefined8 *)(param_1 + 0x152f0),iVar8);
        lVar5 = FUN_100300729(uVar3,uVar4);
        if (lVar5 != 0) {
          *(undefined4 *)(lVar5 + 0xc) = 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    for (lVar5 = FUN_1002f930c(uVar3); lVar5 != 0; lVar5 = FUN_1002f9451(lVar5)) {
      if (*(int *)(lVar5 + 0xc) != 0) {
        lVar7 = *(long *)(lVar5 + 0x28);
        if (lVar7 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "albumInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          cVar1 = FUN_1002bec16(0,*(undefined1 *)(param_1 + 0x365),*(undefined1 *)(param_1 + 0x39b))
          ;
          local_b9 = cVar1 != '\0';
        }
        else {
          cVar1 = FUN_1002bec16(lVar7,*(undefined1 *)(param_1 + 0x365),
                                *(undefined1 *)(param_1 + 0x39b));
          local_b9 = cVar1 != '\0';
          local_88 = &PTR_FUN_100859020;
          local_78 = &local_b9;
          local_80 = param_1;
          local_68 = &local_88;
          FUN_1003a0178(lVar7,0,&local_88);
          if (local_68 == &local_88) {
            lVar6 = 0x20;
          }
          else {
            lVar6 = 0x28;
            if (local_68 == (undefined ***)0x0) goto LAB_100439b80;
          }
          (**(code **)((long)*local_68 + lVar6))();
        }
LAB_100439b80:
        if ((local_b9 == '\x01') && (iVar2 = FUN_100437e90(param_1,lVar7,0), iVar2 != -0x80)) {
          if (iVar2 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            if (iVar2 != 0) goto LAB_100439c2e;
          }
          local_b8 = &PTR_FUN_1008590a0;
          local_b0 = param_1;
          local_98 = &local_b8;
          FUN_1003a0178(lVar7,0,&local_b8);
          if (local_98 == &local_b8) {
            lVar7 = 0x20;
LAB_100439c21:
            (**(code **)((long)*local_98 + lVar7))();
          }
          else {
            lVar7 = 0x28;
            if (local_98 != (undefined ***)0x0) goto LAB_100439c21;
          }
          local_d0 = 0x400;
        }
      }
LAB_100439c2e:
    }
    FUN_10031c15f(uVar3);
    if (local_d0 == 0) {
      uVar3 = 0;
    }
    else {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 1;
      }
      FUN_1004ef324(param_1,local_d0,0);
      uVar4 = FUN_1001c156e();
      uVar3 = 0;
      FUN_1001c6987(uVar4,0x69707372,*(undefined4 *)(param_1 + 0x28),0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

