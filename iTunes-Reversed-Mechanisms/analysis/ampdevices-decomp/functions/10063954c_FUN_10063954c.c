// name: FUN_10063954c
// address: 10063954c

long FUN_10063954c(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 local_6a [34];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = *(long *)*param_1;
  puVar7 = local_6a;
  if (param_3 != (undefined1 *)0x0) {
    puVar7 = param_3;
  }
  FUN_100489136(lVar5,puVar7);
  if ((puVar7[0x20] & 0x40) == 0) {
    if (param_2 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)((long)param_1 + 4);
      uVar2 = *(undefined4 *)(param_1 + 1);
      uVar3 = *(undefined4 *)((long)param_1 + 0xc);
      *(undefined4 *)param_2 = *(undefined4 *)param_1;
      *(undefined4 *)((long)param_2 + 4) = uVar1;
      *(undefined4 *)(param_2 + 1) = uVar2;
      *(undefined4 *)((long)param_2 + 0xc) = uVar3;
    }
  }
  else {
    lVar5 = FUN_10048604a(*(undefined8 *)(lVar5 + 8));
    if (lVar5 == *(long *)*param_1) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "destPlaylist != playlistLocation->parent->playlist";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(lVar5 + 0x78);
      param_2[1] = 0xffffffffffffffff;
    }
    FUN_100489136(lVar5,puVar7);
    if ((puVar7[0x20] & 0x40) != 0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "permissions->addInternalItemsToLibrary == false";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

