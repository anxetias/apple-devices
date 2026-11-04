// name: FUN_100505cd3
// address: 100505cd3

void FUN_100505cd3(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x14cb0) == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData->iTunesControlFileRefNum != ((JRFileRefNum) 0)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8));
    if ((cVar1 != '\0') &&
       (iVar2 = FUN_10017ce92(*(undefined8 *)(param_1 + 0x14cb0),&local_60), iVar2 != -0x80)) {
      if (iVar2 == 0) {
        uVar3 = FUN_1004e4e24(param_1);
        if (uVar3 <= local_60) goto LAB_100505e20;
        local_60 = local_60 & 0xfffffffffff00000;
        iVar2 = FUN_10017d068(*(undefined8 *)(param_1 + 0x14cb0));
        if (iVar2 == -0x80) goto LAB_100505e20;
        if (iVar2 == 0) {
          lVar4 = FUN_1001c63e1(0x100000);
          if (lVar4 == 0) goto LAB_100505e20;
          for (uVar3 = uVar3 - (int)local_60; uVar3 != 0; uVar3 = uVar3 - (int)uVar6) {
            uVar6 = 0x100000;
            if (uVar3 < 0x100000) {
              uVar6 = (ulong)uVar3;
            }
            iVar2 = FUN_10017d230(*(undefined8 *)(param_1 + 0x14cb0),lVar4,uVar6,0,0);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
              break;
            }
            local_60 = local_60 + uVar6;
          }
          FUN_1001c64c1(lVar4);
          iVar2 = FUN_10017cf3c(*(undefined8 *)(param_1 + 0x14cb0),local_60);
          if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_100505e20;
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 == '\0') goto LAB_100505e20;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 == '\0') goto LAB_100505e20;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 == '\0') goto LAB_100505e20;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      }
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_100505e20:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

