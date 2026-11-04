// name: FUN_100397c06
// address: 100397c06

undefined8
FUN_100397c06(long param_1,undefined8 param_2,void *param_3,undefined8 *param_4,void *param_5,
             undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 local_78 [16];
  undefined2 local_68 [8];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004de449(param_7);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0x45f;
  }
  else {
    FUN_100238ca8(&local_58,lVar2 + 0x16878);
    if (*(long *)(*(long *)(lVar2 + 0x168c0) + 0x10) == 0) {
      do {
        FUN_100395b14(local_78,&local_58);
        if ((*(byte *)(param_1 + 0x2be0) & 0x40) != 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar5 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          uVar3 = 0xffffff80;
          if (cVar1 != '\0') {
            pcVar4 = "airtraffic> photo get promised file proc: copy fiber aborted";
            goto LAB_100397e8e;
          }
          goto LAB_100397ea1;
        }
        if (*(int *)(lVar2 + 0x168c8) == 0) {
          if (*(char *)(lVar2 + 0x168cd) == '\0') {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar5 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            uVar3 = 0x488;
            if (cVar1 != '\0') {
              pcVar4 = "airtraffic> photo get promised file proc: convert fiber exited";
              goto LAB_100397e8e;
            }
          }
          else {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar5 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            uVar3 = 0xffffffde;
            if (cVar1 != '\0') {
              pcVar4 = 
              "airtraffic> photo get promised file proc: convert fiber aborted due to device disk full"
              ;
LAB_100397e8e:
              local_68[0] = 0;
              __os_log_impl(0x100000000,uVar5,1,pcVar4,local_68,2);
            }
          }
LAB_100397ea1:
          FUN_100179644(local_78);
          FUN_10015a142(&local_58);
          goto LAB_100397eb3;
        }
        FUN_1001b0d8d(DAT_10070e568);
        FUN_100179644(local_78);
      } while (*(long *)(*(long *)(lVar2 + 0x168c0) + 0x10) == 0);
    }
    FUN_10015a142(&local_58);
    FUN_100238ca8(local_78,lVar2 + 0x16878);
    lVar2 = *(long *)(*(long *)(lVar2 + 0x168c0) + 8);
    cVar1 = FUN_10017cbd0((void *)(lVar2 + 0x20));
    if ((cVar1 == '\0') && (*(long *)(lVar2 + 0x10) == 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "JRFileSpecIsValid(&promisedFileItem.sourceFileSpec) || promisedFileItem.thumbnailData.IsValid()"
        ;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    _memcpy(param_3,(void *)(lVar2 + 0x20),0x420);
    uVar3 = FUN_1001705fc(*(undefined8 *)(lVar2 + 0x10));
    *param_4 = uVar3;
    _memcpy(param_5,(void *)(lVar2 + 0x448),0x420);
    FUN_1001bb41a(lVar2 + 0x868,param_6);
    FUN_10015a142(local_78);
    uVar3 = 0;
  }
LAB_100397eb3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

