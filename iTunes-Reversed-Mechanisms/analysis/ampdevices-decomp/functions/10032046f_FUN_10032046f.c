// name: FUN_10032046f
// address: 10032046f

undefined8 FUN_10032046f(long param_1,undefined1 param_2,char param_3,void *param_4,long param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10032056b:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_44a = "TrackDataIsValid(inTrackData)";
LAB_10032063a:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure (expected to be true)";
        local_44c = 0x822;
        local_44a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10032056b;
    }
    if (param_4 == (void *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_44a = "outFolderSpec != nullptr";
        goto LAB_10032063a;
      }
    }
    else {
      lVar5 = FUN_100308295(param_1,param_2);
      if (lVar5 != 0) {
        if (*(char *)(lVar5 + 0x448) == '\0') {
LAB_1003206a7:
          iVar3 = FUN_10031a150(param_2,param_4);
          if (iVar3 != 0) {
            uVar4 = FUN_100387b5c(0x3ee,param_2,param_3 != '\0',param_4);
            if ((int)uVar4 != 0) goto LAB_10032066d;
            *(undefined1 *)(lVar5 + 0x449) = 2;
          }
          cVar1 = FUN_10017fbfb(param_4);
          if (cVar1 == '\0') {
            *(undefined2 *)(lVar5 + 0x448) = 0;
            uVar4 = 0xffffff88;
            goto LAB_10032066d;
          }
          _memcpy((void *)(lVar5 + 0x28),param_4,0x420);
          *(undefined1 *)(lVar5 + 0x448) = 1;
          FUN_1004d5e6f(param_1,param_2,param_4);
        }
        else {
          cVar1 = FUN_10017fbfb((void *)(lVar5 + 0x28));
          if (cVar1 == '\0') {
            *(undefined2 *)(lVar5 + 0x448) = 0;
            goto LAB_1003206a7;
          }
          _memcpy(param_4,(void *)(lVar5 + 0x28),0x420);
        }
        cVar1 = *(char *)(lVar5 + 0x449);
        if (cVar1 == '\0') {
          iVar3 = FUN_100387b5c(0x3ee,param_2,0,&local_458);
          if (iVar3 == 0) {
            cVar2 = FUN_10017f77e(&local_458,param_4);
            cVar1 = '\x02';
            if (cVar2 == '\0') goto LAB_10032073c;
          }
          else {
LAB_10032073c:
            cVar1 = '\x01';
          }
          *(char *)(lVar5 + 0x449) = cVar1;
        }
        uVar4 = 0;
        if (param_5 != 0) {
          *(bool *)param_5 = cVar1 == '\x01';
        }
        goto LAB_10032066d;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_44a = "domainInfo != nullptr";
        goto LAB_10032063a;
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_10032066d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

