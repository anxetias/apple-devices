// name: FUN_10023f935
// address: 10023f935

int FUN_10023f935(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  long lVar8;
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
      local_4a = "inDragRef != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
  }
  else {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
    lVar4 = FUN_10023e02c(param_3);
    if (lVar4 != 0) {
      iVar2 = FUN_10023f480(param_1,param_2,lVar4,param_4);
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
          if (lVar4 != 0) {
            uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_dataForType__10088c478,uVar5)
            ;
            lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
            iVar2 = -0x622d;
            if (lVar8 != 0) {
              iVar2 = 0;
            }
            if ((param_4 != (undefined8 *)0x0) && (lVar8 != 0)) {
              uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(lVar8,PTR_s_length_10088bdf0);
              *param_4 = uVar7;
              iVar2 = 0;
            }
            (*(code *)PTR__objc_release_10082c7b0)(lVar8);
          }
          (*(code *)PTR__objc_release_10082c7b0)(lVar4);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      }
      goto LAB_10023fad7;
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
LAB_10023fad7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

