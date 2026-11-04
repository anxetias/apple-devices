// name: FUN_10049b250
// address: 10049b250

uint FUN_10049b250(ulong *param_1,ulong *param_2,char param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (ulong *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_2a = "item1 != nullptr";
LAB_10049b3fe:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
  }
  else {
    if (param_2 != (ulong *)0x0) {
      uVar1 = *param_1;
      if (uVar1 == 0) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "imageAlbumItem1->imageInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        uVar5 = 0xffffffff;
      }
      else {
        uVar2 = *param_2;
        if (uVar2 == 0) {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x822;
            local_2a = "imageAlbumItem2->imageInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x16);
          }
          FUN_1001782e9(0,0);
          uVar5 = 1;
        }
        else {
          if (*(uint *)(uVar2 + 0x58) < *(uint *)(uVar1 + 0x58)) {
            bVar6 = param_3 != '\0';
          }
          else if (*(uint *)(uVar1 + 0x58) < *(uint *)(uVar2 + 0x58)) {
            bVar6 = param_3 == '\0';
          }
          else if (param_3 == '\0') {
            uVar5 = 0xffffffff;
            if ((*(uint *)(uVar1 + 0x18) < *(uint *)(uVar2 + 0x18)) ||
               (uVar5 = 1, *(uint *)(uVar2 + 0x18) < *(uint *)(uVar1 + 0x18))) goto LAB_10049b308;
            bVar6 = uVar1 < uVar2;
          }
          else {
            uVar5 = 0xffffffff;
            if ((*(uint *)(uVar2 + 0x18) < *(uint *)(uVar1 + 0x18)) ||
               (uVar5 = 1, *(uint *)(uVar1 + 0x18) < *(uint *)(uVar2 + 0x18))) goto LAB_10049b308;
            bVar6 = uVar2 < uVar1;
          }
          uVar5 = -(uint)bVar6 | 1;
        }
      }
      goto LAB_10049b308;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_2a = "item2 != nullptr";
      goto LAB_10049b3fe;
    }
  }
  uVar5 = 0;
  FUN_1001782e9(0,0);
LAB_10049b308:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

