// name: FUN_100497d69
// address: 100497d69

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100497d69(long param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  undefined8 local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar5 = FUN_100495380();
  if (cVar5 == '\0') {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    lVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar6 = FUN_1001c58d5(*(undefined8 *)(param_1 + 0x48));
    local_50 = lVar6;
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      *(long *)(lVar6 + 0x10) = param_1;
      uVar8 = *(uint *)(param_1 + 0x44);
      if (param_2 == 0) {
        *(uint *)(param_1 + 0x44) = uVar8 + 1;
      }
      else {
        bVar1 = uVar8 <= param_2;
        uVar8 = param_2;
        if (bVar1) {
          uVar7 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar7,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            local_3c = 0x822;
            local_3a = "recordID < imageLibrary->nextRecordID";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      *(uint *)(lVar6 + 0x18) = uVar8;
      FUN_1001c2c8a(param_1 + 0x10,lVar6);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      uVar4 = _UNK_10073fe6c;
      uVar3 = _UNK_10073fe68;
      uVar2 = _UNK_10073fe64;
      *(undefined4 *)(lVar6 + 0xb8) = _DAT_10073fe60;
      *(undefined4 *)(lVar6 + 0xbc) = uVar2;
      *(undefined4 *)(lVar6 + 0xc0) = uVar3;
      *(undefined4 *)(lVar6 + 0xc4) = uVar4;
      if (*(long *)(param_1 + 0x13d0) != 0) {
        local_58 = (ulong)*(uint *)(lVar6 + 0x18);
        FUN_10049bea4(&local_48,*(long *)(param_1 + 0x13d0),&local_58,&local_50);
        if (local_3a._2_1_ == '\0') {
          *(long *)(CONCAT44(uStack_44,local_48) + 8) = lVar6;
        }
      }
      if (*(long *)(param_1 + 0x13e0) != 0) {
        FUN_1001c64c1();
        *(undefined8 *)(param_1 + 0x13e0) = 0;
      }
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

