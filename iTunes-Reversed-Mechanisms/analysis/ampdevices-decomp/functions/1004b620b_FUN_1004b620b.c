// name: FUN_1004b620b
// address: 1004b620b

void FUN_1004b620b(long param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0xb30) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x140) == 0x66696c65) {
      iVar2 = FUN_100170ef7();
      if (iVar2 != 0) {
        uVar3 = FUN_100170f3b(*(undefined8 *)(param_1 + 0xb30));
        FUN_1004b930f(param_1,uVar3,iVar2,param_2,1);
        if (*(long *)(param_1 + 0xb30) != 0) {
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
            FUN_10017103d(*(long *)(param_1 + 0xb30),0);
            return;
          }
          goto LAB_1004b6336;
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "inLeafInfo->downloadItem->downloadTargetType == kDownloadDataDeliveryType_File";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_1004b6336:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

