// name: FUN_10023ed5e
// address: 10023ed5e

int FUN_10023ed5e(long param_1,undefined8 param_2,undefined4 param_3,long param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "dragRef != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
  }
  else if (param_4 == 0 || param_5 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "data != __null && dataSize != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = FUN_10023e02c(param_3);
    if (lVar4 != 0) {
      lVar10 = *param_5;
      iVar2 = FUN_10023e9f0(param_1,param_2,lVar4,param_4,param_5);
      if (iVar2 == -0x622d) {
        uVar5 = FUN_10023e02c(param_3);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        iVar3 = _PasteboardCopyName(*(undefined8 *)(param_1 + 0x78),&local_58);
        iVar2 = -0x622d;
        if (iVar3 == 0) {
          IVar6 = NSPasteboard::pasteboardWithName_
                            ((ID)PTR__OBJC_CLASS___NSPasteboard_10082d318,
                             PTR_s_pasteboardWithName__10088c470,CONCAT44(uStack_54,local_58));
          lVar4 = _objc_retainAutoreleasedReturnValue(IVar6);
          FUN_10017060f(CONCAT44(uStack_54,local_58));
          if (lVar4 == 0) {
            iVar2 = -0x622d;
          }
          else {
            uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_dataForType__10088c478,uVar5)
            ;
            lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
            if (lVar8 == 0) {
              iVar2 = -0x622d;
            }
            else {
              lVar9 = (*(code *)PTR__objc_msgSend_10082c770)(lVar8,PTR_s_length_10088bdf0);
              if (lVar9 < lVar10) {
                lVar10 = lVar9;
              }
              (*(code *)PTR__objc_msgSend_10082c770)
                        (lVar8,PTR_s_getBytes_length__10088c480,param_4,lVar10);
              *param_5 = lVar10;
              iVar2 = 0;
            }
            (*(code *)PTR__objc_release_10082c7b0)(lVar8);
          }
          (*(code *)PTR__objc_release_10082c7b0)(lVar4);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      }
      goto LAB_10023ef5b;
    }
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "uti != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_10023ef5b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

